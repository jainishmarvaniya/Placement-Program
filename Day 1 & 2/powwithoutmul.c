//power without multiplication and power operator
#include<stdio.h>
void main(){
    int x,y,result=1;

    printf("Enter a base Number: ");
    scanf("%d",&x);

    printf("Enter a Power Number: ");
    scanf("%d",&y);

    for(int i=1;i<=y;i++){
        int temp=result;
        result=0;
        for(int j=1;j<=x;j++){
            result=result+temp;
        }
    }

    printf("%d",result);
}