#include "CommonDataModel.h"
#include "../Simulator/Simulator.h"
#include <vector>

#ifdef __cplusplus
extern "C" {
#endif

    __declspec(dllexport) double calculateAvgEmploymentRate(const Person* people, int count, bool is_college_educated) {
        std::vector<Person> peopleVector(people, people + count);
        Simulator simulator;
        if (is_college_educated) {
            return simulator.calculateAvgEmploymentRateCollege(peopleVector);
        }
        else {
            return simulator.calculateAvgEmploymentRateNonCollege(peopleVector);
        }
    }

    __declspec(dllexport) double calculateAvgYearlySalary(const Person* people, int count, bool is_college_educated) {
        std::vector<Person> peopleVector(people, people + count);
        Simulator simulator;
        if (is_college_educated) {
            return simulator.calculateAvgYearlySalaryCollege(peopleVector);
        }
        else {
            return simulator.calculateAvgYearlySalaryNonCollege(peopleVector);
        }
    }

    __declspec(dllexport) double calculateEmploymentRateBasedOnBirthYear(const Person* people, int count, int birth_year, bool is_college_educated) {
        std::vector<Person> peopleVector(people, people + count);
        Simulator simulator;
        if (is_college_educated) {
            return simulator.calculateEmploymentRateBasedOnBirthYearCollege(peopleVector, birth_year);
        }
        else {
            return simulator.calculateEmploymentRateBasedOnBirthYearNonCollege(peopleVector, birth_year);
        }
    }

#ifdef __cplusplus
}
#endif
