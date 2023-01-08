// c program to delete duplicate elements from an array.
#include<stdio.h>
int main(){
    int size;
    printf("enter the number of elements that you want to enter in your array : ");
    scanf("%d",&size);
    printf("the %d elements that you have to enter are listed below.\n");
    int array[size];
    for (int i=0;i<size;i++){
        printf("the %d index in an array have element : ",i);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if (array[i]==array[j]){
                for (int k=j;k<size;k++){
                    array[k]=array[k+1];
                }
                size--;
                j--;
            }
        }
    }
    printf("array elements after deletion of duplicate elements \n");
    for (int i=0;i<size;i++){
        printf("%d \t",array[i]);
    }
return 0;
}