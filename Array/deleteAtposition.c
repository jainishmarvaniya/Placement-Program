// Write a program to delete an element from a specific position in an array.
#include<stdio.h>
void main(){
    int n,pos;

    printf("Enter number of elements: ");\
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter the position to delete(1 to %d): ",n);
    scanf("%d",&pos);
    if(pos<0 || pos>=n){
        printf("Invalid position!");
        return;
    }
     pos = pos-1;
    for(int i=n;i>=pos;i--){
        
        if(i==pos){
            for(int j=pos+1;j<=n;j++){
                arr[j-1]=arr[j];
            }
        }
    }
    n--;
    printf("Array after deletion: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
 