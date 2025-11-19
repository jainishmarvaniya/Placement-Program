// Given a string S of length n, the task is to find the earliest repeated character in it. The earliest repeated 
// character means, the character that occurs more than once and whose second occurrence has the 
// smallest index. 
// Input: s = "geeksforgeeks"  
// Output: e  
// Explanation: e is the first element that repeats 

#include<stdio.h>
#include<string.h>
void main(){
    int arr[26],i,size;
    printf("Enter the string size: ");
    scanf("%d",&size);

    char s[size];
    getchar();
    printf("Enter the string: ");
    for(int i=0;i<size;i++){
        scanf("%c",&s[i]);
    }
   
//abaacd
//arr -> 1,1,1,1....26 times
    for(int i=0;i<26;i++){
        arr[i] = 0;
    }
    int f = 0;
    // iterate in string s : 
      for(i=0;s[i]!='\0';i++){
         arr[s[i]-'a']++;
         if(arr[s[i]-'a'] > 1){
            f = 1;
            printf("First repeating character is: %c",s[i]);
            break;
         }
     }

        if(f==0){
            printf("no repeating char");
        }
}