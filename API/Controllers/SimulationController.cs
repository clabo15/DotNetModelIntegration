using Microsoft.AspNetCore.Mvc;
using System.Collections.Generic;
using API.Model;

namespace YourNamespace
{
    [ApiController]
    [Route("api/simulation")]
    public class SimulationController : ControllerBase
    {
        [HttpPost]
        public IActionResult RunSimulation(string simulationName, List<Person> people)
        {
            double result = 0.0;

            switch (simulationName)
            {
                case "avgEmploymentRateCollege":
                    result = CommonDataModel.CalculateAvgEmploymentRateCollege(people);
                    break;
                case "avgEmploymentRateNonCollege":
                    result = CommonDataModel.CalculateAvgEmploymentRateNonCollege(people);
                    break;
                case "avgYearlySalaryCollege":
                    result = CommonDataModel.CalculateAvgYearlySalaryCollege(people);
                    break;
                case "avgYearlySalaryNonCollege":
                    result = CommonDataModel.CalculateAvgYearlySalaryNonCollege(people);
                    break;
                case "employmentRateBasedOnBirthYearCollege":
                    // Assume birthYear is also passed as a parameter
                    int birthYear = 1990; // Example birthYear value
                    result = CommonDataModel.CalculateEmploymentRateBasedOnBirthYearCollege(people, birthYear);
                    break;
                case "employmentRateBasedOnBirthYearNonCollege":
                    // Assume birthYear is also passed as a parameter
                    birthYear = 1990; // Example birthYear value
                    result = CommonDataModel.CalculateEmploymentRateBasedOnBirthYearNonCollege(people, birthYear);
                    break;
                default:
                    return BadRequest("Invalid simulation name.");
            }

            return Ok(result);
        }
    }
}
