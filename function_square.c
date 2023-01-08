#include<stdio.h>
int calculate_area(int side){
    return side*side;
}
int main(){
    int side;
    printf("enter side: ");
    scanf("%d",&side);
    int res=calculate_area(side);
    printf("area of square whose side is %d is %d",side,res);
return 0;
}