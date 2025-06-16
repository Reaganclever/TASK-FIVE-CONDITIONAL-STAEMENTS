#include <stdio.h>
#include "TaskFiveProject.h"

double calculateTotalBills(double units){
while(1){
        double totalunits1 , totalunits2 , oneUnitCost = 1000 ;

       if(units < 200){
        totalunits1 = units * 0.3;
      printf("TOTAL UNITS LESS THAN 200: ");
      double totalBill_1 = oneUnitCost * totalunits1;
      printf("NEWEST TOTAL BILL = %.2lf" , totalBill_1);
       break;
       }

       else if(units >= 200){
        totalunits2 = units * 0.45;
       printf("NEWEST TOTAL UNITS GREATER OR EQUAL TO 200: ");
        double totalBill_2 = oneUnitCost * totalunits2;
        printf("NEWEST TOTAL BILL  = %.2lf" , totalBill_2);
        break;

       }

}

}


