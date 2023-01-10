// create a structure to store complex numbers. use arrow operator.
#include<stdio.h>
#include<string.h>
struct complex{
    int real;
    int img;
};
int main(){
    struct complex number1={5,7};
    struct complex *ptr = &number1;
    printf("real part = %d \n",ptr -> real);
    printf("imaginary part = %d \n",ptr -> img);
return 0;
}

// you have to store the marks of 30 students in class. what will you use?
// option a: array of 30 float.
// option b: structure.
// ans : array of 30 float is smart choice.

