// string using pointers;
// char *str="hello world"
// store string in memory and assigned address is stored in the char pointer 'str'.
// char *str= "hello world"; can br reinitialized.
// char str[]="hello world"; cannot be reinitialized.
#include<stdio.h>
int main(){
    char *canchange="hello world";
    puts(canchange);
    canchange="hello";
    puts(canchange);
return 0;
}