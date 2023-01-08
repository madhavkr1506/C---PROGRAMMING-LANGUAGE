#include<stdio.h>
int main(){
    int num;
    printf("enter number to check whether it is natural number or not: ");
    scanf("%d",&num);
    if (num>=1){
        printf("natural number \n");
    }
    else{
        printf("not a natural number");
    }
return 0;
}