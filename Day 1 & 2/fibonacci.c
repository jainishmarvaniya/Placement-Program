#include<stdio.h>
void main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    int n1=0,n2=1,nextfib=0;

    printf("Fibonacci Series: %d %d ",n1,n2);

    for(int i=1;i<n;i++){
        nextfib=n1+n2;
        n1=n2;
        n2=nextfib;

        printf("%d ",nextfib);
    }
}