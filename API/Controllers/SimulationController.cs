using Microsoft.AspNetCore.Mvc;
using System.Collections.Generic;
using System;
using API.Model;

namespace API.Controllers
{
    [ApiController]
    [Route("api/simulation")]
    public class SimulationController : ControllerBase
    {
        private readonly CommonDataModel commonDataModel;

        public SimulationController()
        {
            commonDataModel = new CommonDataModel();
        }

        [HttpPost]
        public IActionResult RunSimulation(string simulationName, List<Person> people)
        {
            double result = 0.0;

            CommonDataModel commonDataModel = new CommonDataModel();

            switch (simulationName)
            {
                case "avgEmploymentRateCollege":
                    result = commonDataModel.CalculateAvgEmploymentRateCollege(people);
                    break;
                case "avgEmploymentRateNonCollege":
                    result = commonDataModel.CalculateAvgEmploymentRateNonCollege(people);
                    break;
                case "avgYearlySalaryCollege":
                    result = commonDataModel.CalculateAvgYearlySalaryCollege(people);
                    break;
                case "avgYearlySalaryNonCollege":
                    result = commonDataModel.CalculateAvgYearlySalaryNonCollege(people);
                    break;
                case "employmentRateBasedOnBirthYearCollege":
                    // Assume birthYear is also passed as a parameter
                    int birthYear = 1990; // Example birthYear value
                    result = commonDataModel.CalculateEmploymentRateBasedOnBirthYearCollege(people, birthYear);
                    break;
                case "employmentRateBasedOnBirthYearNonCollege":
                    // Assume birthYear is also passed as a parameter
                    birthYear = 1990; // Example birthYear value
                    result = commonDataModel.CalculateEmploymentRateBasedOnBirthYearNonCollege(people, birthYear);
                    break;
                default:
                    return BadRequest("Invalid simulation name.");
            }

            return Ok(result);
        }
    }
}
