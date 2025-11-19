// For n=4 
// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4 
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4

#include<stdio.h>
int main(){
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);

    int size = (n*2) - 1;
    for(int i=1; i<=size; i++){
        for(int j=1; j<=size; j++){
            int top = i;
            int left = j;
            int bot = size - i + 1;
            int rig = size - j + 1;
            
            int temp = top;
            if(left < temp) temp = left;
            if(bot < temp) temp = bot;
            if(rig < temp) temp = rig;
            
            printf("%5d",n-temp+1);
        }
        printf("\n");
    }
    return 0;
}