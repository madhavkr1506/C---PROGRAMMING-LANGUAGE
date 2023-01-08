// using pointer in an array find lagest elements.
#include<stdio.h>
int main(){
    int size;
    printf("enter the number of elements that you want to enter in an array : ");
    scanf("%d",&size);
    printf("the %d elements that you want to enter in an atrray are as follow : ",size);
    int array[size],largest;
    for (int i=0;i<size;i++){
        printf("the %d index of an array : ",i);
        scanf("%d",&array[i]);
    }
    largest_em(array,size,&largest);
    printf("the largest element is %d",largest);
return 0;
}
void largest_em(int arr[],int size, int *largest){
    *largest=arr[0];
    for (int i=0;i<size;i++){
        if(*largest<arr[i]){
            *largest=arr[i];
        }
    }
}