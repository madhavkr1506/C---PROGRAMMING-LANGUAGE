#include<stdio.h>
int main(){
    char input_char;
    printf("enter character: ");
    scanf("%c",&input_char);
    if (input_char>='A' && input_char<='Z'){
        printf("uppercase \n");
    }
    else if (input_char>='a' && input_char<='z'){
        printf("lowercase \n");
    }
    else{
        printf("not english");
    }
return 0;
}