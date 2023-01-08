#include <stdio.h>
int main(){
    int side;
    printf("enter side : ");
    scanf("%d",&side);
    int area=side*side;
    printf("area of square whose side is %d is : %d",side,area);
    return 0;
}