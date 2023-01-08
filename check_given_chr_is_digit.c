#include<stdio.h>
int main(){
    int digit;
    printf("enter digit: ");
    scanf("%d",&digit);
    if (digit>"0" && digit<="9"){
        printf("%d",digit);
    }
    else{
        printf("0");
    }
return 0;
}