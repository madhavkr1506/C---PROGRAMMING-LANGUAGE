#include<stdio.h>
int main(){
    int num1,num2;
    printf("enter num1: ");
    scanf("%d",&num1);
    printf("enter num2: ");
    scanf("%d",&num2);
    for (int i=1;i<=num2;++i){
        printf("%d x %d = %d \n",num1,i,(num1*i));
    }
return 0;
}