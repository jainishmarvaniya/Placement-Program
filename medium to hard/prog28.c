// Write a program that should decode the given pattern and print the resulting expanded string. 
// Input: 2a3bc4dE5F2G7H 
// Output: aabbbcddddEFFFFFGGHHHHHHH
#include<stdio.h>
void main(){
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            int count = str[i] - '0';
            i++;
            if(str[i] != '\0'){
                char ch = str[i];
                for(int j = 0; j < count; j++){
                    printf("%c", ch);
                }
            }
        }
        else{
            printf("%c", str[i]);
        }
    }
    printf("\n");
    
}