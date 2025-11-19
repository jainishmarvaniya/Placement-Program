// WAP to Convert a Decimal to Octal and vice versa. 

#include<stdio.h>
#include<math.h>
void main(){
    int n,o=0,k=1;

    printf("Enter the decimal number: ");
    scanf("%d",&n);

    while(n!=0){
        int rem=n%8;
        o=o+rem*k;
        n=n/8;
        k=k*10;
    }

    printf("The octal number is: %d\n",o);
    
    int oc;
    printf("Enter the octal number: ");
    scanf("%d",&oc);

    int oct=oc;

    int dec=0,i=0;

    while(oct!=0){
        int rem=oct%10;
        dec=dec+rem*pow(8,i); 
        oct=oct/10;
        i++;
        
    }

    printf("The decimal number is: %d\n", dec);
}