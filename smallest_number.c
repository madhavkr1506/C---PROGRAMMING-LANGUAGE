#include<stdio.h>
int main(){
    int num,largest,smallest,i,arr[20];
    printf("how many number you want to enter? ");
    scanf("%d",&num);
    printf("enter elements: \n");
    for (i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    smallest=arr[0];
    for (i=1;i<num;i++){
        if (arr[i]>largest)
            largest=arr[i];      
        if (arr[i]<smallest)
            smallest=arr[i];    
    }
    printf("largest number is : %d \n",largest);
    printf("smallest number is : %d \n",smallest);
return 0;
}