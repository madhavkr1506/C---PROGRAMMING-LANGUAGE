// int arr[10]={[0]=1, [5]=2, [6]=3};
// int arr[10]={[0]=1, [6]=3, [5]=2};
// no need to bother aboyt order at all.
// this way of initialization is called designated initialization.
// and each number in square bracket is said to be designator.
// if the length of an array is n than each designator must be between 0 and n-1.
// what if i won't mention the length?
// designator could be any non negative integers.
// compiler will deduce the length of the array from the largest designator in the list.
// int arr[]={[0]=1, [51]=2, [60]=3};
// write a program to print the following numbers in reverse order:
// 34,56,54,32,67,89,90,32,31
// assume that all these numbers are stored in an array.
#include<stdio.h>
int main(){
    int arr[9]={34,56,54,32,67,89,90,32,31};
    int i;
    for (i=0;i<9;i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");
    for (i=8;i>=0;i--){
        printf("%d \t",arr[i]);
    }
return 0;
}