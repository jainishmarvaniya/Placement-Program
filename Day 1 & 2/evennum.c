#include<stdio.h>
void main(){
    int a,b;
     printf("Enter a num1: ");
    scanf("%d",&a);

    printf("Enter a num1: ");
    scanf("%d",&b);

    for(int i=a;i<b;i++){
        if(i%2==0){
            printf("even num is %d ",i);
        }
    }
}