// pointer to structure.
// struct student s1;
// struct student *ptr;
// ptr = &s1;
#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1={111,9.9,"madhav"};
    printf("stduen name : %s\n",s1.name);
    printf("student roll numbar : %d\n",s1.roll);
    printf("student cgpa : %.2f\n",s1.cgpa);
    struct student *ptr = &s1;
    printf("stduent name : %s\n",(*ptr).name);
    printf("student roll number : %d\n",(*ptr).roll);
    printf("student cgpa : %.2f\n",(*ptr).cgpa);
return 0;
}