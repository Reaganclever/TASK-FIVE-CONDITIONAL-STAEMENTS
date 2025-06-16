#include <stdio.h>
#include "TaskFiveProject.h"
double calculateTotalCost( double priceperunit , double quantity){

while(1){

        double totalCost1;

        totalCost1 = priceperunit * quantity;

       if(quantity >= 10){
        double discountTotal = totalCost1 * 0.24;
        double totalcostWithdiscount = totalCost1 - discountTotal;
        printf("NEW DISCOUNT TOTAL IS %.2lf\n" , discountTotal);
        printf("THE NEW TOTAL COST AFTER DISCOUNT IS %.2lf\n" , totalcostWithdiscount);
       }
       else{
        printf("NO DISCOUNT");
        printf("\nTHE  OLD TOTAL COST WITH NO DISCOUNT IS %.2lf\n" , totalCost1);
        break;
       }
        }
    return 0;

        }







