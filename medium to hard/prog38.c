// Write a Function that returns either 1 or 0 based on following condition if the Aay is in ascending order 
// and occurrence of that number at least 3 then it should return 1 otherwise it should return 0.  
// e.g. if A=[1,1,1,2,2] it should return 0, if A= [1,1,1,3,3,3,3] it should return 1.

#include <stdio.h>

int checkAay(int A[], int n) {
      int minindex,temp;
    for(int i=0;i<n-1;i++){
        minindex=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[minindex]){
                minindex=j;
            }
        }
        temp=A[i];
        A[i]=A[minindex];
        A[minindex]=temp;
    }

    
    int count = 1;
    for (int i = 1; i <= n; i++) {
        if (i < n && A[i] == A[i - 1]) {
            count++;
        } else {
            if (count < 3){
                return 0;
            }
            count = 1;
        }
    }
    
    return 1;
}

void main() {
    int n;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
     for(int i=0;i<n;i++){
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    printf("%d\n", checkAay(arr,n)); 
    
 
}
