using System.Runtime.InteropServices;

namespace API.Model;
[StructLayout(LayoutKind.Sequential)]
public struct Person
{
    public int PersonId { get; set; }
    public int PersonBirthYear { get; set; }
    [return: MarshalAs(UnmanagedType.I1)]
    public byte IsCollegeEducated { get; set; }
    [return: MarshalAs(UnmanagedType.I1)]
    public byte IsEmployed { get; set; }
    public int YearlySalary { get; set; }
}

