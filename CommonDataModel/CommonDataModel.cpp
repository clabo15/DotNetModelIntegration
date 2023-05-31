#include "CommonDataModel.h"
#include "../Simulator/Simulator.h"

// Calculate the average employment rate for college-educated people in the given vector
double CommonDataModel::avgEmploymentRateCollege(const std::vector<Person>& people)
{
    Simulator simulator; // Create an instance of the Simulator class
    return simulator.calculateAvgEmploymentRateCollege(people); // Call the Simulator's method to calculate the average employment rate for college-educated people
}

// Calculate the average employment rate for non-college-educated people in the given vector
double CommonDataModel::avgEmploymentRateNonCollege(const std::vector<Person>& people)
{
    Simulator simulator; // Create an instance of the Simulator class
    return simulator.calculateAvgEmploymentRateNonCollege(people); // Call the Simulator's method to calculate the average employment rate for non-college-educated people
}

// Calculate the average yearly salary for college-educated people in the given vector
double CommonDataModel::avgYearlySalaryCollege(const std::vector<Person>& people)
{
    Simulator simulator; // Create an instance of the Simulator class
    return simulator.calculateAvgYearlySalaryCollege(people); // Call the Simulator's method to calculate the average yearly salary for college-educated people
}

// Calculate the average yearly salary for non-college-educated people in the given vector
double CommonDataModel::avgYearlySalaryNonCollege(const std::vector<Person>& people)
{
    Simulator simulator; // Create an instance of the Simulator class
    return simulator.calculateAvgYearlySalaryNonCollege(people); // Call the Simulator's method to calculate the average yearly salary for non-college-educated people
}

// Calculate the employment rate based on birth year for college-educated people in the given vector
double CommonDataModel::employmentRateBasedOnBirthYearCollege(const std::vector<Person>& people, int birthYear)
{
    Simulator simulator; // Create an instance of the Simulator class
    return simulator.calculateEmploymentRateBasedOnBirthYearCollege(people, birthYear); // Call the Simulator's method to calculate the employment rate based on birth year for college-educated people
}

// Calculate the employment rate based on birth year for non-college-educated people in the given vector
double CommonDataModel::employmentRateBasedOnBirthYearNonCollege(const std::vector<Person>& people, int birthYear)
{
    Simulator simulator; // Create an instance of the Simulator class
    return simulator.calculateEmploymentRateBasedOnBirthYearNonCollege(people, birthYear); // Call the Simulator's method to calculate the employment rate based on birth year for non-college-educated people
}
