#include "Simulator.h"
#include "../Models/Models.h"


std::vector<Person> parseJsonToList(const std::string& jsonString) {
    std::vector<Person> objList;
    json jsonData = json::parse(jsonString);
    // Iterate through each JSON object
    for (const auto& obj : jsonData) {
        Person person;
        person.person_id = obj["PersonId"];
        person.person_birth_year = obj["PersonBirthYear"];
        person.is_college_educated = obj["IsCollegeEducated"];
        person.is_employed = obj["IsEmployed"];
        person.yearly_salary = obj["YearlySalary"];
        // Assign other members as needed
        objList.push_back(person);
    }
    return objList;
}

// Calculate the average employment rate for college-educated people using the Models class
double Simulator::calculateAvgEmploymentRateCollege(const char* jsonstr)
{
    auto people = parseJsonToList(jsonstr);
    return Models::calculateAvgEmploymentRate(people, true); // Call the Models class method to calculate the average employment rate for college-educated people
}

// Calculate the average employment rate for non-college-educated people using the Models class
double Simulator::calculateAvgEmploymentRateNonCollege(const char* jsonstr)
{
    auto people = parseJsonToList(jsonstr);
    return Models::calculateAvgEmploymentRate(people, false); // Call the Models class method to calculate the average employment rate for non-college-educated people
}

// Calculate the average yearly salary for college-educated people using the Models class
double Simulator::calculateAvgYearlySalaryCollege(const std::vector<Person>& people)
{
    return Models::calculateAvgYearlySalary(people, true); // Call the Models class method to calculate the average yearly salary for college-educated people
}

// Calculate the average yearly salary for non-college-educated people using the Models class
double Simulator::calculateAvgYearlySalaryNonCollege(const std::vector<Person>& people)
{
    return Models::calculateAvgYearlySalary(people, false); // Call the Models class method to calculate the average yearly salary for non-college-educated people
}

// Calculate the employment rate based on birth year for college-educated people using the Models class
double Simulator::calculateEmploymentRateBasedOnBirthYearCollege(const std::vector<Person>& people, int birthYear)
{
    return Models::calculateEmploymentRateBasedOnBirthYear(people, birthYear, true); // Call the Models class method to calculate the employment rate based on birth year for college-educated people
}

// Calculate the employment rate based on birth year for non-college-educated people using the Models class
double Simulator::calculateEmploymentRateBasedOnBirthYearNonCollege(const std::vector<Person>& people, int birthYear)
{
    return Models::calculateEmploymentRateBasedOnBirthYear(people, birthYear, false); // Call the Models class method to calculate the employment rate based on birth year for non-college-educated people
}
