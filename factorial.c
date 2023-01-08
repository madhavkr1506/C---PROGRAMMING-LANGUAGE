#include<stdio.h>
int main(){
    int num,fact=1,i;
    printf("enter number : ");
    scanf("%d",&num);
    for (i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("%d",fact);
return 0;
}