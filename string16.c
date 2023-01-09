// c program to find the frequency of character in string.
#include<stdio.h>
int main(){
    char str[1000],ch;
    int count=0;
    printf("enter a string : \n");
    fgets(str,sizeof(str),stdin);
    printf("enter the char to find its frequency : \n");
    scanf("%c",&ch);
    for (int i=0;str[i]!=0;i++){
        if (ch==str[i]){
            count++;
        }
    }
    printf("frequency of %c = %d",ch,count);
return 0;
}