// write a program to remove blank spaces in a string;
#include<stdio.h>
int main(){
    char str[100];
    int i,j=0;
    printf("enter string : \n");
    gets(str);
    puts(str);
    for (i=0;str[i]!='\0';i++){
        str[i]=str[i+j];
        if (str[i]==' ' || str[i]=='\t'){
            j++;
            i--;
        }
    }
    printf("string after removing spaces : %s\n",str);
return 0;
}