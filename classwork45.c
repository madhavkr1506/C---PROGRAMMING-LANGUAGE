// multiplication of elements of two matrix.
#include<stdio.h>
int main(){
    int arr1[10],arr2[10],arr3[10],num,i;
    printf("Enter the number of elements that you want to enter in your both array : ");
    scanf("%d",&num);
    printf("The %d elements in array 1 are as follow:\n",num);
    for (i=0;i<num;i++){
        printf("enter the input for index %d = ",i);
        scanf("%d",&arr1[i]);
    }
    printf("the %d elements in array 2 are as follow:\n",num);
    for (i=0;i<num;i++){
        printf("enter the input for index %d = ",i);
        scanf("%d",&arr2[i]);
    }
    for (i=0;i<num;i++){
        arr3[i]=arr1[i]*arr2[i];
    }
    printf("Multiplication of the elements of two array are as follow : \n");
    for (i=0;i<num;i++){
        printf("Multiplication of %d index elements of two array is = ",i);
        printf("%d\n",arr3[i]);
    }
return 0;
}