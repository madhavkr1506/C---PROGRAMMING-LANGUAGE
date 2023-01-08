// an array is a data structure containing a number of data values (all of which are of same type).
// data structure = it is a formate for organising data and storing data.
// each data structure is designed to organise data to suit a specific purpose.
// imagine array is a large chunkn of memory divided in smaller block of memory and each block is capable of of storing a data value of some type.
// the simplest form of array one can imagine is one dimensional array.
// declare and define one dimensional array.
// syntax = data_type name of the array[no. of elements];
// int arr[5]; = this is example of declaration.
// compiler will allocate a contiguous block of memory of size= 5*sizeof(int)
// the length of an array can be specified by any integer constant expression.
// how to access array element from 1d array?
// index start from 0 and goes to len-1.
// accessing first element of the array = arr[0]
// accessing second element of the array = arr[1] and so on.
// using macro:
#include<stdio.h>
#define N 15
int main(){
    int a[N],i;
    for (i=0;i<N;i++){
        printf("enter the input for index %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("array elements are as follow : \n");
    for (i=0;i<N;i++){
        printf("%d \t",a[i]);
    }
return 0;
}