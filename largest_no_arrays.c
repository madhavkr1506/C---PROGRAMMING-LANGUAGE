// c program to find largest elements in an arrays?
// using loop;
#include<stdio.h>
int main(){
    int size,largest,i;
    printf("enter the number of element you want to enter : ");
    scanf("%d",&size);
    int array[size];
    printf("enter %d element of the array \n",size);
    for (i=0;i<size;i++){
        printf("enter %d index of the array \n",i);
        scanf("%d",&array[i]);
    }
    largest=array[0];
    for (i=0;i<size;i++){
        if (largest<array[i]){
            largest=array[i];
        }
    }
    printf("largest element in this array is : %d",largest);
return 0;
}