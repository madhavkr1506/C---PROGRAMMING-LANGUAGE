// c program to find maximum repeating element in an array;
#include<stdio.h>
int main(){
    int size,i,j;
    printf("enter the number of elements that you want to enter in an array : ");
    scanf("%d",&size);
    printf("the %d elements that you have to enter in an array.\n",size);
    int array[size];
    for (i=0;i<size;i++){
        printf("the %d index of an array that consist an element : ",i);
        scanf("%d",&array[i]);
    }
    int count,maxcount=0,maxelement=-1;
    for (i=0;i<size;i++){
        count=0;
        for (j=i+1;j<size;j++){
            if(array[j]==array[i]){
                count++;
                if (count>maxcount){
                    maxcount=count;
                    maxelement=array[i];
                }
            }
        }
    }
    printf("maximum repeting element is %d",maxelement);
return 0;
}