using System.Runtime.InteropServices;

namespace API.Model;

public class Person
{
    public int PersonId { get; set; }
    public int PersonBirthYear { get; set; }
    public bool IsCollegeEducated { get; set; }
    public bool IsEmployed { get; set; }
    public int YearlySalary { get; set; }
}

