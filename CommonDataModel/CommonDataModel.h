#pragma once
#include <vector>
#include "../Models/Person.h"

#ifdef __cplusplus
extern "C" {
#endif

    // CommonDataModel class represents a common data model for calculating employment rates and salaries
    class CommonDataModel
    {
    public:
        // Calculate the average employment rate for college-educated people in the given vector
        static double avgEmploymentRateCollege(const std::vector<Person>& people);

        // Calculate the average employment rate for non-college-educated people in the given vector
        static double avgEmploymentRateNonCollege(const std::vector<Person>& people);

        // Calculate the average yearly salary for college-educated people in the given vector
        static double avgYearlySalaryCollege(const std::vector<Person>& people);

        // Calculate the average yearly salary for non-college-educated people in the given vector
        static double avgYearlySalaryNonCollege(const std::vector<Person>& people);

        // Calculate the employment rate based on birth year for college-educated people in the given vector
        static double employmentRateBasedOnBirthYearCollege(const std::vector<Person>& people, int birthYear);

        // Calculate the employment rate based on birth year for non-college-educated people in the given vector
        static double employmentRateBasedOnBirthYearNonCollege(const std::vector<Person>& people, int birthYear);
    };

#ifdef __cplusplus
}
#endif