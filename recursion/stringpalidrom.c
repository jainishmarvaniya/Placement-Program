#include<stdio.h>
#include<string.h>
int palidrom(char str[],int left,int right){
     if(left>=right){
         return 1;
     }
     if(str[left]!=str[right]){
         return 0;
     }
      return palidrom(str,left+1,right-1);
}
void main(){
    char str[100];

    printf("Enter the String: ");
    gets(str);

    int i=0;
    while(str[i]!='\0'){
        i++;
    }

    int left=str[0];
    int right=str[i];

    int res=palidrom(str,left,right);

    if(res==1){
        printf("palidrome String");
    }
    else{
        printf("Not palidrom String");
    }
}