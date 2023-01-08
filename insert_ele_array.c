// c program to insert an element in an array.
#include<stdio.h>
int main(){
    int size;
    printf("enetr number of elements that you want to enter in an array : ");
    scanf("%d",&size);
    printf("the %d elements that you want to enter in an array \n",size);
    int array[size];
    for(int i=0;i<size;i++){
        printf("the %d index of an array : ",i);
        scanf("%d",&array[i]);
    }
    int position,value,i;
    printf("please enter the location where you want to enter a new element : ");
    scanf("%d",&position);
    printf("enter the value of new element : ");
    scanf("%d",&value);
    for(i=size-1;i>=position-1;i--){
        array[i+1]=array[i];
        // array[position-1]=value;
    }
    array[position-1]=value;
    printf("resultant array is \n");
    for (i=0;i<=size;i++){
        printf("%d \t",array[i]);
    }
return 0;
}