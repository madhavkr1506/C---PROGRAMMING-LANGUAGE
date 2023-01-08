#include<stdio.h>
int main(){
    int a;
    int *ptr;
    ptr=&a;
    *ptr=0;
    printf("x= %d \n",a);
    printf("*ptr = %d \n",*ptr);
    *ptr+=5;
    printf("x= %d \n",a);
    printf("*ptr = %d \n",*ptr);
    (*ptr)++;
    printf("x= %d \n",a);
    printf("*ptr = %d \n",*ptr);
return 0;
}