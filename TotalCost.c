#include <stdio.h>
#include "TaskFiveProject.h"
double calculateTotalCost( double priceperunit , double quantity){

while(1){

        double totalCost1;

        totalCost1 = priceperunit * quantity;

       if(quantity >= 10){
        double discountTotal = totalCost1 * 0.15;
        double totalcostWithdiscount = totalCost1 - discountTotal;
        printf("DISCOUNT TOTAL IS %.2lf\n" , discountTotal);
        printf("THE TOTAL COST AFTER DISCOUNT IS %.2lf\n" , totalcostWithdiscount);
       }
       else{
        printf("NO DISCOUNT");
        printf("\nTHE TOTAL COST WITH NO DISCOUNT IS %.2lf\n" , totalCost1);
        break;
       }
        }
    return 0;

        }







