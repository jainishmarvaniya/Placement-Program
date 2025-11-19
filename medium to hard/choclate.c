// WAP for following Scenario. 
// Given n rupees and a chocolate price of m for each chocolate, with a wrapper exchange offer of 1 
// chocolate per k wrappers, calculate the total number of chocolates you can eat with n rupees.

#include<stdio.h>

// int choclate(int money,int price,int wrap_nedd){
//     int totchoc=money/price;

//     int tw=totchoc;

//     while(tw>=wrap_nedd){
//         int temp=tw/wrap_nedd;
//         totchoc=totchoc+temp;
//         tw=(tw%wrap_nedd)+temp;

//     }
//     return totchoc;
// }

void main(){
    int money,price,wrappers;
   
    printf("Enter the number of Ruppes: ");
    scanf("%d",&money);

    printf("Enter the per choclate price: ");
    scanf("%d",&price);

    printf("Enter the wrappers nedded: ");
    scanf("%d",&wrappers);

         int totchoc=money/price;

         int tw=totchoc;
    

    while(tw>=wrappers){
        tw=tw-wrappers+1;
        totchoc++;
    }

    printf("Total choclate is: %d\n",totchoc);
    printf("Total wrappers is: %d",tw);


}