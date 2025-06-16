#include <stdio.h>
#include "TaskFiveProject.h"


double computeFinalAmount(double purchaseAmount){
double discount = 0.1;
    double FinalAmount = purchaseAmount -(purchaseAmount * discount);
if(purchaseAmount > 1000){

    printf("FINAL AMOUNT AFTER DISCOUNT: %.2lf\n" , FinalAmount);
}
else{
    printf("NO DISCOUNT: %.2lf\n" , purchaseAmount);
}
return FinalAmount;
}

