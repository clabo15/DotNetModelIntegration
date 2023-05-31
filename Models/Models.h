#pragma once                            // Ensures that the header file is included only once during compilation
#include <vector>                       // Include the header file for the vector container
#include "Person.h"                     // Include the header file for the Person struct

#ifdef MODELS_EXPORTS
#define MODELS_API __declspec(dllexport) // Specifies the export attribute for the Models class
#else
#define MODELS_API __declspec(dllimport) // Specifies the import attribute for the Models class
#endif

class MODELS_API Models
{
public:
    static double calculateAvgEmploymentRate(const std::vector<Person>& people, bool is_college_educated);
    static double calculateAvgYearlySalary(const std::vector<Person>& people, bool is_college_educated);
    static double calculateEmploymentRateBasedOnBirthYear(const std::vector<Person>& people, int birth_year, bool is_college_educated);
};
