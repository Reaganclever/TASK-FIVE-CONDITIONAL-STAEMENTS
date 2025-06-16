#include <stdio.h>
#include "TaskFiveProject.h"

double computeFinalPayableAmount(int membershipDuration , double totalFee){

 while(1){
        double discountAmount1_3 , discountAmount_EqualandAbove4 , discountTotalGymPrice1_3 , discountTotalgymPrice_EqualandAbove4;

        if(membershipDuration >= 1 && membershipDuration <= 3){
            discountAmount1_3 = totalFee * 0.05;
            discountTotalGymPrice1_3 = totalFee - discountAmount1_3;
            printf("THE DISCOUNT AMOUNT IS %.0lf\n" , discountAmount1_3);
            printf("THE FINAL PAYABLE AMOUNT IS %.2lf\n" , discountTotalGymPrice1_3);
            break;

        }
        else if(membershipDuration >=4){
             discountAmount_EqualandAbove4 = totalFee * 0.1;
            discountTotalgymPrice_EqualandAbove4 = totalFee - discountAmount_EqualandAbove4;
            printf("THE DISCOUNT AMOUNT 4+ IS %.0lf\n" , discountAmount_EqualandAbove4);
            printf("THE FINAL PAYABLE AMOUNT 4+ IS %.2lf\n" , discountTotalgymPrice_EqualandAbove4);
            break;
        }
        else{
            printf("INVALID MEMBERSHIP DURATION\n");
            break;
        }
        }

}

