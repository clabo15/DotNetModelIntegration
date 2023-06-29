#pragma once
#include <vector>
#include "../Models/Person.h"
#include <iostream>
#include <string>
#include "json.hpp"
using json = nlohmann::json;

// Simulator class represents a simulator for calculating employment rates and salaries
class Simulator
{
public:
    // Calculate the average employment rate for college-educated people in the given vector
    double calculateAvgEmploymentRateCollege(const char* jsonstr);

    // Calculate the average employment rate for non-college-educated people in the given vector
    double calculateAvgEmploymentRateNonCollege(const char* jsonstr);

    // Calculate the average yearly salary for college-educated people in the given vector
    double calculateAvgYearlySalaryCollege(const std::vector<Person>& people);

    // Calculate the average yearly salary for non-college-educated people in the given vector
    double calculateAvgYearlySalaryNonCollege(const std::vector<Person>& people);

    // Calculate the employment rate based on birth year for college-educated people in the given vector
    double calculateEmploymentRateBasedOnBirthYearCollege(const std::vector<Person>& people, int birthYear);

    // Calculate the employment rate based on birth year for non-college-educated people in the given vector
    double calculateEmploymentRateBasedOnBirthYearNonCollege(const std::vector<Person>& people, int birthYear);
};
