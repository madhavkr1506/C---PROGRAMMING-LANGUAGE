// write a program to convert all lowercase vowels to uppercase in a string.
#include<stdio.h>
void convert(char str[]){
    for (int i=0;str[i]!='\0';i++){
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            // str[i]=str[i]-32;
            str[i]=toupper(str[i]);
        }
    }
    puts(str);
}
int main(){
    char str[100];
    gets(str);
    puts(str);
    convert(str);
return 0;
}