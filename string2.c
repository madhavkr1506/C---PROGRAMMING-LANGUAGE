// string format specifier;
// char name[]="madhav";
// printf("%s",name);
#include<stdio.h>
int main(){
    char name[50];
    // printf("enter name : ");
    // scanf("%s",&name);
    // printf("your name is : %s",name);
    // gets(name);
    // puts(name);
    fgets(name,100,stdin);
    puts(name);
    
return 0;
}
// scanf() cannot input multi word string with spaces.
// here gets() and puts() comes into picture.
// gets()=input function and puts()=output function.
// fgets(str,n,file)= it stops when n-1 char input or new line is entered.