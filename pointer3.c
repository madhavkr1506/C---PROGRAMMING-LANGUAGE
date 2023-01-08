#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    printf("%u \n",&age);
    printf("%u \n",ptr);
    printf("%u \n",&ptr);
    printf("%d \n",age);
    printf("%d \n",*ptr);
    printf("%d",*(&age));
return 0;
}