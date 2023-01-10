// initializing structure.
// struct student s1={"madhav",1664,7.9};
// struct student s2={"kishan",8889,8.9};
// struct student s3={0};
#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1={111,9.6,"madhav"};
    printf("student roll number : %d\n",s1.roll);
    printf("student cgpa : %.2f\n",s1.cgpa);
    printf("student name : %s\n",s1.name);
return 0;
}