// c program to find count of each element of an array.
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
    int freq[size];
    int count=0;
    for (int i=0;i<size;i++){
        count=1;
        if(array[i] != -1){
            for (int j=i+1;j<size;j++){
                if (array[i]==array[j]){
                    count++;
                    array[j]=-1;
                }
            }
            freq[i]=count;
        }
    }
    printf("\n");
    for (int i=0;i<size;i++){
        if (array[i] != -1){
            printf("number %d occurs %d times \n",array[i],freq[i]);
        }
    }
return 0;
}
