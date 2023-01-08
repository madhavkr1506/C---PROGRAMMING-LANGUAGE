#include<stdio.h>
void finalprice(float price){
    price=price+(0.18*price);
    printf("final price after gst is : %.2f \n",price);
}
int main(){
    float price;
    printf("enter price : ");
    scanf("%f",&price);
    finalprice(price);
    printf("actual price is %.2f",price);
return 0;
}
