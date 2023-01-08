#include<stdio.h>
void rev(int arr[],int n){
    for (int i=0;i<n/2;i++){
        int fir=arr[i];
        int sec=arr[n-i-1];
        arr[i]=sec;
        arr[n-i-1]=fir;
    }
}
void printarr(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    rev(arr,5);
    printarr(arr,5);
return 0;
}