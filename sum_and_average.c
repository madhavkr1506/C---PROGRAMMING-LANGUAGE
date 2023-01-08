#include<stdio.h>
int main(){
     int numbers,num,i,sum=0;
     float avg;
     printf("how many number you want to enter? ");
     scanf("%d",&num);
     printf("enter elements that you want to enter: \n");
     for (i=1;i<=num;i++){
        scanf("%d",&numbers);
        sum=sum+numbers;
     }
     avg=sum/num;
     printf("sum of given number is: %d \n",sum);
     printf("average of given numbers is: %.2f \n",avg);
return 0;
}