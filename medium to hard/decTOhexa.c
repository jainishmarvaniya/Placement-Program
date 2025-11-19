//WAP to Convert a Decimal to Hexa-decimal and vice versa.
#include<stdio.h>
void main(){
    int n;

    printf("Enter the decimal number: ");
    scanf("%d",&n);

    char hexa[30];

    int i=0;
    while(n!=0){
        int rem=n%16;

        if(rem<10){
            rem='0'+rem;
        }
        else{
            rem=rem+'A'-10;
        }
        hexa[i]=rem;
        n=n/16;
        i++;
    }
        printf("The hexadecimal number is: ");
        for(int j=0;j<i;j++){
            printf("%c",hexa[i-j-1]);
        }

    printf("\n");
        
     char hexInput[20];
    printf("Enter Hexadecimal number :");
    scanf("%s", hexInput);
    int dec = 0;
    int len = 0;
    while(hexInput[len] != '\0'){
        len++;
    }
    for(int j = 0; j < len; j++){
        char ch = hexInput[j];
        int val;
        if(ch >= '0' && ch <= '9'){
            val = ch - '0';
        } else {
            val = ch - 'A' + 10;
        }
        dec = dec * 16 + val;
    }
    printf("Hexadecimal to Decimal : %d\n", dec);


   
    
        



}