// c progam to find count of duplicate elements in an array;
#include<stdio.h>
int main(){
    int i,j,size,count=0;
    printf("enter the number of elements that you want to enter in an array : ");
    scanf("%d",&size);
    printf("the %d elements that you want to enter in an array are as follow.\n",size);
    int array[size];
    for(i=0;i<size;i++){
        printf("the %d index of an element : ",i);
        scanf("%d",&array[i]);
    }
    for (i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if (array[i]==array[j]){
                count++;
                break;
            }
        }
    }
    printf("total number of duplicate element in an array is/are : %d",count);
return 0;
}