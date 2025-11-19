// Take an Input in the form of Binary String that contains only 0’s and 1’s and convert this number into 
// integer.  
// Input: 101.110 
// Output: 5.75

#include<stdio.h>
#include<math.h>

void main(){
    int size, count = 0;
    double sum = 0.0;
    printf("Enter the string size: ");
    scanf("%d",&size);
    
    char s[size];
    getchar();
    printf("Enter the string: ");
    for(int i=0;i<size;i++){
        scanf("%c",&s[i]);
    }

    int dotFound = 0;
    for(int i = 0; i < size; i++){
        if(s[i] == '.'){
            count = i;
            dotFound = 1;
            break;
        }
    }

    if(dotFound == 0){
        count = size;
    }

    int j = 0;
    for(int i = count - 1; i >= 0; i--){
        if(s[i] != '.'){
            sum = sum + (s[i] - '0') * pow(2, j);
            j++;
        }
    }

    if(dotFound == 1){
        j = -1;
        for(int i = count + 1; i < size; i++){
            if(s[i] != '.'){
                sum = sum + (s[i] - '0') * pow(2, j);
                j--;
            }
        }
    }

    printf("Sum is %.2f\n", sum);
}