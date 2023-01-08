#include<stdio.h>
int main(){
    int arr[10],i;
    printf("welcome to madhav world ! \n");
    for (i=0;i<10;i++){
        printf("enter the input for index %d : \n",i);
        scanf("%d",&arr[i]);
    }
    printf("array elements are as follow : \n");
    for (i=0;i<10;i++){
        printf("%d \t",arr[i]);
    }
return 0;
}