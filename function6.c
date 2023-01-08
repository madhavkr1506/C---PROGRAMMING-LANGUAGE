#include<stdio.h>
#include<math.h>
float area_square(float side){
    return side*side;
}
float area_circle(float radius){
    return 3.14*radius*radius;
}
float area_triangle(float base, float height){
    return 0.5*base*height;
}
int main(){
    // int side;
    // printf("enter side : ");
    // scanf("%d",&side);
    // printf("side of square is %d \n",side);
    // float res=area_square(side);
    // printf("area of square is %.2f \n",res);

    // int radius;
    // printf("enter radius : ");
    // scanf("%d",&radius);
    // printf("radius of circle is %d \n",radius);
    // float res=area_circle(radius);
    // printf("area of circle is %.2f \n",res);

    int base,height;
    printf("enter base : ");
    scanf("%d",&base);
    printf("enter height : ");
    scanf("%d",&height);
    printf("base of triangle is %d \n",base);
    printf("height of triangle is %d \n",height);
    float res=area_triangle(base,height);
    printf("area of triangle is %.2f \n",res);
return 0;
}