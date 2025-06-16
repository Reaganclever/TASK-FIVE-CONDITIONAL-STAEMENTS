#include <stdio.h>
#include "TaskFiveProject.h"

double computeTotalSalary(double hoursWorked , const double hourlyRate){
 double totalSalary , overTime , initialSalary = 400000 , totalSalaryNoOvertime;
 if(hoursWorked > 40){
        overTime = 1.5 * hourlyRate;
      }
      else{
        printf("NO PAYMENT OVERTIME\n");

      }

        //TOTAL SALARY
       totalSalaryNoOvertime = initialSalary * hourlyRate * hoursWorked;
       totalSalary = initialSalary * overTime* hoursWorked;
        printf("\nTHE TOTAL SALARY WITH OVERTIME IS %.2lf\n" , totalSalary);
        printf("THE TOTAL SALARY NO OVERTIME IS %.2lf\n" , totalSalaryNoOvertime);



}

