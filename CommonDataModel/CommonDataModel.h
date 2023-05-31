#pragma once
#include <vector>
#include "../Models/Person.h"

#ifdef __cplusplus
extern "C" {
#endif

    __declspec(dllexport) double calculateAvgEmploymentRate(const Person* people, int count, bool is_college_educated);
    __declspec(dllexport) double calculateAvgYearlySalary(const Person* people, int count, bool is_college_educated);
    __declspec(dllexport) double calculateEmploymentRateBasedOnBirthYear(const Person* people, int count, int birth_year, bool is_college_educated);

#ifdef __cplusplus
}
#endif
