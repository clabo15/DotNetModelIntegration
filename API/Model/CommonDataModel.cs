using System.Runtime.InteropServices;
using System;

namespace API.Model;

public class CommonDataModel
{
    [DllImport("C:\\Users\\clabo\\source\\repos\\DotNetModelIntegration\\x64\\Debug\\CommonDataModel.dll", CallingConvention = CallingConvention.Cdecl)]
    private static extern double calculateAvgEmploymentRate(Person[] people, int count, bool is_college_educated);

    [DllImport("C:\\Users\\clabo\\source\\repos\\DotNetModelIntegration\\x64\\Debug\\CommonDataModel.dll", CallingConvention = CallingConvention.Cdecl)]
    private static extern double calculateAvgYearlySalary(Person[] people, int count, bool is_college_educated);

    [DllImport("C:\\Users\\clabo\\source\\repos\\DotNetModelIntegration\\x64\\Debug\\CommonDataModel.dll", CallingConvention = CallingConvention.Cdecl)]
    private static extern double calculateEmploymentRateBasedOnBirthYear(Person[] people, int count, int birth_year, bool is_college_educated);

    public double CalculateAvgEmploymentRateCollege(List<Person> people)
    {
        return calculateAvgEmploymentRate(people.ToArray(), people.Count, true);
    }

    public double CalculateAvgEmploymentRateNonCollege(List<Person> people)
    {
        return calculateAvgEmploymentRate(people.ToArray(), people.Count, false);
    }

    public double CalculateAvgYearlySalaryCollege(List<Person> people)
    {
        return calculateAvgYearlySalary(people.ToArray(), people.Count, true);
    }

    public double CalculateAvgYearlySalaryNonCollege(List<Person> people)
    {
        return calculateAvgYearlySalary(people.ToArray(), people.Count, false);
    }

    public double CalculateEmploymentRateBasedOnBirthYearCollege(List<Person> people, int birthYear)
    {
        return calculateEmploymentRateBasedOnBirthYear(people.ToArray(), people.Count, birthYear, true);
    }

    public double CalculateEmploymentRateBasedOnBirthYearNonCollege(List<Person> people, int birthYear)
    {
        return calculateEmploymentRateBasedOnBirthYear(people.ToArray(), people.Count, birthYear, false);
    }
}
