//Find the sum of series 1 – 2 + 3 – 4 + 5 – 6 + … ± n
#include<stdio.h>
void main(){
      int n,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
        }
        else{
            sum=sum-i;
        }
    }
    printf("Sum is %d",sum);
}
