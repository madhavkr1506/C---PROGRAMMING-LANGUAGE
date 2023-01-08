// write a program to enter price of three items and print their final cost with gst.
#include<stdio.h>
int main(){
    float price[3];
    printf("enter price 1 : ");
    scanf("%f",&price[0]);
    printf("enter price 2 : ");
    scanf("%f",&price[1]);
    printf("enter price 3 : ");
    scanf("%f",&price[2]);
    printf("final price 1 = %f \n",(price[0]+(0.18*price[0])));
    printf("final price 2 = %f \n",(price[1]+(0.18*price[1])));
    printf("final price 3 = %f \n",(price[2]+(0.18*price[2])));
return 0;
}