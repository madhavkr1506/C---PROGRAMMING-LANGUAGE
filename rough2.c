// using function find largest number in an array.
#include<stdio.h>
int main(){
    int size;
    printf("enter the number of element you want to enter in an array : ");
    scanf("%d",&size);
    printf("the %d element that you want to enter in an array are as follow.\n",size);
    int array[size];
    for (int i=0;i<size;i++){
        printf("the %d index of an array that consisist an element : ",i);
        scanf("%d",&array[i]);
    }
    printf("the largest element of an array is : %d",largest(array,size));
return 0;
}
int largest(int arr[],int size){
    int largest=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}