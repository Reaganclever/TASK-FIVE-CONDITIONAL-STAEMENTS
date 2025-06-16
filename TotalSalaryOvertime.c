#include <stdio.h>
#include "TaskFiveProject.h"

double computeTotalSalary(double hoursWorked , const double hourlyRate){
 double totalSalary , overTime , initialSalary = 358000 , totalSalaryNoOvertime;
 if(hoursWorked > 40){
        overTime = 1.7 * hourlyRate;
      }
      else{
        printf("NO PAYMENT OVERTIME\n");

      }

        //TOTAL SALARY
       totalSalaryNoOvertime = initialSalary * hourlyRate * hoursWorked;
       totalSalary = initialSalary * overTime* hoursWorked;
        printf("\nNEW THE TOTAL SALARY WITH OVERTIME IS %.2lf\n" , totalSalary);
        printf("NEW THE TOTAL SALARY NO OVERTIME IS %.2lf\n" , totalSalaryNoOvertime);



}

