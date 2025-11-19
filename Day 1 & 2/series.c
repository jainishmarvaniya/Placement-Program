// Print sum series 1 + 4 + 9 + 16 + … + n
#include<stdio.h>
void main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int sum=0,temp=0;

    for(int i=1;i<=n;i++){
        sum=i*i+sum;

    }
    printf("Sum is %d",sum);
}