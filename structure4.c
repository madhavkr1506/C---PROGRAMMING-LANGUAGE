// array of structure.
// struct student ece[100];
// struct student coe[100];
// struct student it[100];
// access
// it[0].roll=200;
// it[0].cgpa=7.6;
#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student ece[100];
    ece[0].roll=1111;
    ece[0].cgpa=9.6;
    strcpy(ece[0].name,"madhav kumar");

    printf("student name : %s\n",ece[0].name);
    printf("student roll number : %d\n",ece[0].roll);
    printf("student cgoa : %.2f\n",ece[0].cgpa);
return 0;
}