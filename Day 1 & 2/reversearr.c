#include<stdio.h>
void main(){
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Reversed array is:\n");
    for(int i=n-1;i>=0;i--){
        printf("%d",arr[i]);

        if(i!=0){
            printf(", ");
    }
}
}