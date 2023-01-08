#include<stdio.h>
int main(){
    int marks[5];
    printf("maths : ");
    scanf("%d",&marks[0]);
    printf("physics : ");
    scanf("%d",&marks[1]);
    printf("chemistry : ");
    scanf("%d",&marks[2]);
    printf("political science : ");
    scanf("%d",&marks[3]);
    printf("geography : ");
    scanf("%d",&marks[4]);
    printf("%d marks for maths out of 100 \n",marks[0]);
    printf("%d marks for physics out of 100 \n",marks[1]);
    printf("%d marks for chemistry out of 100 \n",marks[2]);
    printf("%d marks for political science out of 100 \n",marks[3]);
    printf("%d marks for geography out of 100 \n",marks[4]);
    int res=percentage(marks[0],marks[1],marks[2],marks[3],marks[4]);



return 0;
}
int percentage(int s1,int s2, int s3, int s4, int s5){
    return s1+s2+s3+s4+s5/5;
    // int marks1; int marks2; int marks3; int marks4; int marks5;
    // int tmarks=(marks1+marks2+marks3+marks4+marks5)/5;
    // int maths;int physics;int chemistry;int political_science;int geography;
    // int tmarks=(maths+physics+chemistry+political_science+geography);
    // float percent=(tmarks/500)*100;
    // return percent;
    // printf("total marks = %d",tmarks);
    // printf("percentage = %f",percent);
}