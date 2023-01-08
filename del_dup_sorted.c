// write a program in c language to remove duplicate element presente in sorted array.
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
    for (int i=0;i<size;i++){
        printf("%d \t",array[i]);
    }
    printf("\n");
    size=remove_duplicate(array,size);
    printf("array after removing duplicate\n");
    for (int i=0;i<size;i++){
        printf("%d\t",array[i]);
    }
return 0;
}
int remove_duplicate(int arr[],int n){
    if (n==0 | n==1){
        return n;
    }
    int temp[n];
    int i,j=0;
    for(i=0;i<n-1;i++){
        if (arr[i] != arr[i+1]){
            temp[j++]=arr[i];
        }
    }
    temp[j++]=arr[n-1];
    for (i=0;i<j;i++){
        arr[i]=temp[i];
    }
return j;
}