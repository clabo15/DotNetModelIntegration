#include "CommonDataModel.h"        // Include the header file for the CommonDataModel class
#include "../Simulator/Simulator.h" // Include the header file for the Simulator class
#include <vector>                   // Include the header file for the vector container

#ifdef __cplusplus
extern "C" {
#endif

    // Export the calculateAvgEmploymentRate function with the specified parameters and return type
    __declspec(dllexport) double calculateAvgEmploymentRate(const Person* people, int count, bool is_college_educated) {
        // Convert the array of Person objects to a vector
        std::vector<Person> peopleVector(people, people + count);
        Simulator simulator; // Create an instance of the Simulator class
        if (is_college_educated) {
            // Call the Simulator's method to calculate the average employment rate for college-educated people
            return simulator.calculateAvgEmploymentRateCollege(peopleVector);
        }
        else {
            // Call the Simulator's method to calculate the average employment rate for non-college-educated people
            return simulator.calculateAvgEmploymentRateNonCollege(peopleVector);
        }
    }

    // Export the calculateAvgYearlySalary function with the specified parameters and return type
    __declspec(dllexport) double calculateAvgYearlySalary(const Person* people, int count, bool is_college_educated) {
        // Convert the array of Person objects to a vector
        std::vector<Person> peopleVector(people, people + count);
        Simulator simulator; // Create an instance of the Simulator class
        if (is_college_educated) {
            // Call the Simulator's method to calculate the average yearly salary for college-educated people
            return simulator.calculateAvgYearlySalaryCollege(peopleVector);
        }
        else {
            // Call the Simulator's method to calculate the average yearly salary for non-college-educated people
            return simulator.calculateAvgYearlySalaryNonCollege(peopleVector);
        }
    }

    // Export the calculateEmploymentRateBasedOnBirthYear function with the specified parameters and return type
    __declspec(dllexport) double calculateEmploymentRateBasedOnBirthYear(const Person* people, int count, int birth_year, bool is_college_educated) {
        // Convert the array of Person objects to a vector
        std::vector<Person> peopleVector(people, people + count);
        Simulator simulator; // Create an instance of the Simulator class
        if (is_college_educated) {
            // Call the Simulator's method to calculate the employment rate based on birth year for college-educated people
            return simulator.calculateEmploymentRateBasedOnBirthYearCollege(peopleVector, birth_year);
        }
        else {
            // Call the Simulator's method to calculate the employment rate based on birth year for non-college-educated people
            return simulator.calculateEmploymentRateBasedOnBirthYearNonCollege(peopleVector, birth_year);
        }
    }

#ifdef __cplusplus
}
#endif
