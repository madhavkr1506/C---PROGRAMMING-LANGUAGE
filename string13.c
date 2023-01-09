// check if a given character is present in a string or not.
#include<stdio.h>
int main(){
    char str[]="madhavkumar";
    char ch='p';
    checkchar(str,ch);
return 0;
}
void checkchar(char str[],char ch){
    for (int i=0;str[i]!='\0';i++){
        if (str[i]==ch){
            printf("character is present !");
            return 0;
        }
    }
    printf("character is not present !");
}