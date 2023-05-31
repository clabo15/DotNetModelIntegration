
#include "Models.h"
#include <numeric>

double Models::calculateAvgEmploymentRate(const std::vector<Person>& people, bool is_college_educated)
{
    int count = 0; // Initialize a counter variable

    // Iterate over each Person in the vector
    for (const Person& person : people)
    {
        // Check if the person is college-educated and employed
        if (person.is_college_educated && person.is_employed)
        {
            count++; // Increment the counter if the conditions are met
        }
    }

    // Calculate and return the average employment rate
    return static_cast<double>(count) / people.size();
}

double Models::calculateAvgYearlySalary(const std::vector<Person>& people, bool is_college_educated)
{
    int sum = 0; // Initialize a variable to store the sum of salaries
    int count = 0; // Initialize a counter variable

    // Iterate over each Person in the vector
    for (const Person& person : people)
    {
        // Check if the person is college-educated
        if (person.is_college_educated)
        {
            sum += person.yearly_salary; // Add the person's yearly salary to the sum
            count++; // Increment the counter
        }
    }

    // Calculate and return the average yearly salary
    return static_cast<double>(sum) / count;
}

double Models::calculateEmploymentRateBasedOnBirthYear(const std::vector<Person>& people, int birth_year, bool is_college_educated)
{
    int count = 0; // Initialize a counter variable

    // Iterate over each Person in the vector
    for (const Person& person : people)
    {
        auto test = person.person_birth_year;
        // Check if the person is college-educated, born in the specified year, and employed
        if (person.is_college_educated && person.person_birth_year == birth_year && person.is_employed)
        {
            count++; // Increment the counter
        }
    }

    // Calculate and return the employment rate based on birth year
    return static_cast<double>(count) / people.size();
}
