// pointer arithmetic
// pointer can be incremented or decremented.
#include<stdio.h>
int main(){
    // int age = 22;
    // int *ptr = &age;
    // printf("ptr = %u \n",ptr);
    // ptr++;
    // printf("ptr = %u \n",ptr);
    // ptr--;
    // printf("ptr = %u \n",ptr);

    // float price = 20.00;
    // float *ptr = &price;
    // printf("ptr = %u \n",ptr);
    // ptr++;
    // printf("ptr = %u \n",ptr);
    // ptr--;
    // printf("ptr = %u \n",ptr);

    char ch = '*';
    char *ptr = &ch;
    printf("ptr = %u \n",ptr);
    ptr++;
    printf("ptr = %u \n",ptr);
    ptr--;
    printf("ptr = %u \n",ptr);
return 0;
}

