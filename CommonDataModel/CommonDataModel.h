#pragma once                      // Ensures that the header file is included only once during compilation
#include <vector>                 // Include the header file for the vector container
#include "../Models/Person.h"     // Include the header file for the Person struct

#ifdef __cplusplus
extern "C" {
#endif

	// Declare the calculateAvgEmploymentRate function with the specified parameters and return type
	__declspec(dllexport) double calculateAvgEmploymentRate(const Person* people, int count, bool is_college_educated);

	// Declare the calculateAvgYearlySalary function with the specified parameters and return type
	__declspec(dllexport) double calculateAvgYearlySalary(const Person* people, int count, bool is_college_educated);

	// Declare the calculateEmploymentRateBasedOnBirthYear function with the specified parameters and return type
	__declspec(dllexport) double calculateEmploymentRateBasedOnBirthYear(const Person* people, int count, int birth_year, bool is_college_educated);

#ifdef __cplusplus
}
#endif
