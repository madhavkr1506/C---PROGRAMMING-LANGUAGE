#include<stdio.h>
int main(){
    int size;
    printf("enter the number of element that you want to enter in an array : ");
    scanf("%d",&size);
    printf("the %d element that you want to enter in an array are listed below.\n",size);
    int array[size];
    for (int i=0;i<size;i++){
        printf("the %d index contain element : ",i);
        scanf("%d",&array[i]);
    }
    printf("This is original array =>\n");
    for (int i=0;i<size;i++){
        printf("%d \t",array[i]);
    }
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if (array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("\n");
    printf("Sorted array by bubble short method =>\n");
    for (int i=0;i<size;i++){
        printf("%d\t",array[i]);
    }
return 0;
}
