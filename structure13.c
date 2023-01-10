// create the structure to store vectors. then make a function to return sum of two vwctors.
#include<stdio.h>
#include<string.h>
struct vector{
    int x;
    int y;
};
int main(){
    struct vector v1={5,6};
    struct vector v2={3,8};
    struct vector sum={0};
    vector_sum(v1,v2,sum);
return 0;
}
void vector_sum(struct vector v1, struct vector v2, struct vector sum){
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("sum of x is : %d \n",sum.x);
    printf("sum of y is : %d \n",sum.y);
}