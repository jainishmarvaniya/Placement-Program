// Given 2 sorted arrays a[] and b[], each of size n, the task is to find the median of the array obtained 
// after merging a[] and b[]. 
// Input: a[] = [1, 12, 15, 26, 38], b[] = [2, 13, 17, 30, 45] 
// Output: 16 
// Explanation: The middle two elements are 15 and 17,  
// so median = (15 + 17)/2 = 16

#include<stdio.h>
#include<math.h>
void main(){
    int n1,n2,temp,minindex;

    printf("Enter the size of array 1:");
    scanf("%d",&n1);
    
    int arr1[n1];
    for(int i=0;i<n1;i++){
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr1[i]);
    }
 
    printf("Enter the size of array 2:");
    scanf("%d",&n2);
    
    int arr2[n2];
    for(int i=0;i<n2;i++){
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr2[i]);
    }

    int c[n1+n2];
     
    
    for(int i=0;i<n1;i++){
          c[i]=arr1[i];
    }

    for(int i=0;i<n2;i++){
        c[n1+i]=arr2[i];
    }
    
     for(int i=0;i<n1+n2;i++){
        minindex=i;
        for(int j=i+1;j<n1+n2;j++){
            if(c[j]<c[minindex]){
                minindex=j;
            }
        }
        temp=c[i];
        c[i]=c[minindex];
        c[minindex]=temp;
    }
     
    // for(int i=0;i<n1+n2;i++){
    //     printf("%d ",c[i]);
    // }

    // int middle1=(floor)(arr1[n1/2]);
    // int middle2=(floor)(arr2[n2/2]);

    // double median= (floor)((middle1+middle2)/2);

    // printf("median is: %.2f",median);
    int total = n1 + n2;
    if(total % 2 != 0) {
        printf("Median is: %d\n", c[total / 2]);
    }
    else {
        printf("Median is: %.1f\n", (c[total / 2] + c[total / 2 - 1]) / 2.0);
    }
    
}