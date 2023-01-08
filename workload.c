#include<stdio.h>
int main(){
    int age=22;
    int *ptrage=&age;
    printf("address of age : %p \n",&age);
    printf("address of age : %p \n",ptrage);
    printf("value of age : %d \n",age);
    printf("value of age : %d \n",*ptrage);
    printf("value of age : %d\n",*(&age));
    printf("the address of pointer to age is : %p \n",&ptrage);
return 0;
}