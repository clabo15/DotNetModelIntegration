using System.Runtime.InteropServices;
using System;

namespace API.Model;

public class CommonDataModel
{
    private const string CommonDataModelDllName = "CommonDataModel.dll";

    [DllImport(CommonDataModelDllName, CallingConvention = CallingConvention.Cdecl)]
    public static extern double calculateAvgEmploymentRate([In] Person[] people, int count, bool is_college_educated);

    [DllImport(CommonDataModelDllName, CallingConvention = CallingConvention.Cdecl)]
    public static extern double calculateAvgYearlySalary([In] Person[] people, int count, bool is_college_educated);

    [DllImport(CommonDataModelDllName, CallingConvention = CallingConvention.Cdecl)]
    public static extern double calculateEmploymentRateBasedOnBirthYear([In] Person[] people, int count, int birth_year, bool is_college_educated);

    public static double CalculateAvgEmploymentRateCollege(List<Person> people)
    {
        return calculateAvgEmploymentRate(people.ToArray(), people.Count, true);
    }

    public static double CalculateAvgEmploymentRateNonCollege(List<Person> people)
    {
        return calculateAvgEmploymentRate(people.ToArray(), people.Count, false);
    }

    public static double CalculateAvgYearlySalaryCollege(List<Person> people)
    {
        return calculateAvgYearlySalary(people.ToArray(), people.Count, true);
    }

    public static double CalculateAvgYearlySalaryNonCollege(List<Person> people)
    {
        return calculateAvgYearlySalary(people.ToArray(), people.Count, false);
    }

    public static double CalculateEmploymentRateBasedOnBirthYearCollege(List<Person> people, int birthYear)
    {
        return calculateEmploymentRateBasedOnBirthYear(people.ToArray(), people.Count, birthYear, true);
    }

    public static double CalculateEmploymentRateBasedOnBirthYearNonCollege(List<Person> people, int birthYear)
    {
        return calculateEmploymentRateBasedOnBirthYear(people.ToArray(), people.Count, birthYear, false);
    }
}
