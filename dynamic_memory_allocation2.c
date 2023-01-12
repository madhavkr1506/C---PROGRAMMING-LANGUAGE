//  write a program to allocate memory to store 5 prices.
#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    ptr = (float *)malloc(5*sizeof(float));
    ptr[0]=9;
    ptr[1]=8;
    ptr[2]=7;
    ptr[3]=6;
    ptr[4]=5;
    for (int i=0;i<5;i++){
        printf("%f\n",ptr[i]);
    }
return 0;
}