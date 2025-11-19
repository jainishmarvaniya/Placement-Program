// Given an array, rotate the array to the right by k steps, where k is non-negative.  
// Input: nums = [1,2,3,4,5,6,7], k = 3 
// Output: [5,6,7,1,2,3,4]
#include<stdio.h>
void main(){
    int n;

printf("Enter number of elements: ");
scanf("%d",&n);

int arr[n],temp,direction;

for(int i=0;i<n;i++){
    printf("Enter element %d: ",i+1);
    scanf("%d",&arr[i]);
}
    
int iter;
printf("Enter the number of rotation: ");
scanf("%d",&iter);


for(int j=iter;j>=1;j--){
    temp=arr[n-1];
for(int i=n-1;i>0;i--){
      arr[i]=arr[i-1];
}
arr[0]=temp;    
}

printf("Array after right rotation: ");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");
}
