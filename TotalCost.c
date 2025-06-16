#include <stdio.h>
#include "TaskFiveProject.h"
double calculateTotalCost( double priceperunit , double quantity){

while(1){

        double totalCost1;

        totalCost1 = priceperunit * quantity;

       if(quantity >= 10){
        double discountTotal = totalCost1 * 0.29;
        double totalcostWithdiscount = totalCost1 - discountTotal;
        printf("NEWEST DISCOUNT TOTAL IS %.2lf\n" , discountTotal);
        printf("THE NEWEST TOTAL COST AFTER DISCOUNT IS %.2lf\n" , totalcostWithdiscount);
       }
       else{
        printf("NO DISCOUNT");
        printf("\nTHE  OLDER TOTAL COST WITH NO DISCOUNT IS %.2lf\n" , totalCost1);
        break;
       }
        }
    return 0;

        }







