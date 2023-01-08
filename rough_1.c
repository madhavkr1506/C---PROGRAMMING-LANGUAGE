// using recursion find largest element in an array;
#include<stdio.h>
int main(){
    int size,i;
    printf("enter the number of elements that you want to enter in an array : ");
    scanf("%d",&size);
    printf("the %d elements that you want to enter in an arrray \n",size);
    int array[size];
    for(i=0;i<size;i++){
        printf("the %d index of an array having element : ",i);
        scanf("%d",&array[i]);
    }
    size=sizeof(array)/sizeof(array[0]);
    printf("the largest element in an array is : %d",largest(array,size));
return 0;
}
int max(int a , int b){
    return a>b?a:b;
}
int largest(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    return max(arr[n-1],largest(arr,n-1));
}