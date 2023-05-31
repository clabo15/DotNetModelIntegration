#pragma once
#include <vector>
#include "Person.h"

#ifdef MODELS_EXPORTS
#define MODELS_API __declspec(dllexport)
#else
#define MODELS_API __declspec(dllimport)
#endif

class MODELS_API Models
{
public:
    static double calculateAvgEmploymentRate(const std::vector<Person>& people, bool is_college_educated);
    static double calculateAvgYearlySalary(const std::vector<Person>& people, bool is_college_educated);
    static double calculateEmploymentRateBasedOnBirthYear(const std::vector<Person>& people, int birth_year, bool is_college_educated);
};
