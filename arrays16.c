// int arr[]={1,2,3,4,5}; for the given array, what will the following give?
// *(arr+2) or *(arr+5)
// *(arr+2) this is answer.
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d \n",*(arr+2));
    printf("%d \n",*(arr+5));
return 0;
}