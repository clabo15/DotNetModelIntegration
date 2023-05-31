using System.Runtime.InteropServices;
using System;

namespace API.Model;

public class CommonDataModel
{

    private const string CommonDataModelDllName = "C:\\Users\\clabo\\source\\repos\\GitHub-Repos\\DotNetModelIntegration\\x64\\Debug\\CommonDataModel.dll";

    [DllImport(CommonDataModelDllName, CallingConvention = CallingConvention.Cdecl)]
    private static extern double avgEmploymentRateCollege(Person[] people, int count);

    [DllImport(CommonDataModelDllName, CallingConvention = CallingConvention.Cdecl)]
    private static extern double avgEmploymentRateNonCollege(Person[] people, int count);

    [DllImport(CommonDataModelDllName, CallingConvention = CallingConvention.Cdecl)]
    private static extern double avgYearlySalaryCollege(Person[] people, int count);

    [DllImport(CommonDataModelDllName, CallingConvention = CallingConvention.Cdecl)]
    private static extern double avgYearlySalaryNonCollege(Person[] people, int count);

    [DllImport(CommonDataModelDllName, CallingConvention = CallingConvention.Cdecl)]
    private static extern double employmentRateBasedOnBirthYearCollege(Person[] people, int count, int birth_year);

    [DllImport(CommonDataModelDllName, CallingConvention = CallingConvention.Cdecl)]
    private static extern double employmentRateBasedOnBirthYearNonCollege(Person[] people, int count, int birth_year);

    public double CalculateAvgEmploymentRateCollege(List<Person> people)
    {
        return avgEmploymentRateCollege(people.ToArray(), people.Count);
    }

    public double CalculateAvgEmploymentRateNonCollege(List<Person> people)
    {
        return avgEmploymentRateNonCollege(people.ToArray(), people.Count);
    }

    public double CalculateAvgYearlySalaryCollege(List<Person> people)
    {
        return avgYearlySalaryCollege(people.ToArray(), people.Count);
    }

    public double CalculateAvgYearlySalaryNonCollege(List<Person> people)
    {
        return avgYearlySalaryNonCollege(people.ToArray(), people.Count);
    }

    public double CalculateEmploymentRateBasedOnBirthYearCollege(List<Person> people, int birthYear)
    {
        return employmentRateBasedOnBirthYearCollege(people.ToArray(), people.Count, birthYear);
    }

    public double CalculateEmploymentRateBasedOnBirthYearNonCollege(List<Person> people, int birthYear)
    {
        return employmentRateBasedOnBirthYearNonCollege(people.ToArray(), people.Count, birthYear);
    }


}
