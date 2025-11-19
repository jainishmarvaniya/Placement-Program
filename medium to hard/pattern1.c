// For n=4                   For n=5 
// 1                          1  
// 2   5                      2  6
// 3   6   8                  3  7  10
// 4   7   9  10              4  8  11  13 
//                            5  9  12  14  15

#include<stdio.h>
void main(){
    int n,k=1,m;

    printf("Enter the n: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
         int value=i;
         m=n;
        for(int j=1;j<=i;j++){
           
            printf("%d ",value);
            m--;
            value=value+m;
        }
        printf("\n");
    }

}

