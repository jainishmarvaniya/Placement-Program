#include<stdio.h>
void main(){
     int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

   int max=(a>b)?a:b;
   int lcm=1;

   for(int i=max;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            lcm=i;
            break;
        }
   }

   printf("The LCM of %d and %d is %d\n", a, b, lcm);
}