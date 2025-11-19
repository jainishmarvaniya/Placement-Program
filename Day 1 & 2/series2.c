#include<stdio.h>
void main(){
    int n,ans=0;
    printf("Enter number of elements:");
    scanf("%d",&n);

      for(int i=1;i<=n;i++){
         for(int j=1;j<=i;j++){
            ans=ans+j;
         }
      }
      printf("%d",ans);
    
}