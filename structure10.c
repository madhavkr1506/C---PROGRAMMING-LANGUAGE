// typedef keyword.
// used to create alias for data types.
// typedef struct computerscienceengineeringstudent{
//     int roll;
//     float cgpa;
//     char name[100];
// }coe;
// coe student1;
#include<stdio.h>
#include<string.h>
typedef struct student{
    int roll;
    float cgpa;
    char name[100];
}su;
int main(){
    su s1={111,9.9,"madhav kumar"};
    printf("student name = %s\n",s1.name);
    printf("student roll number = %d\n",s1.roll);
    printf("student cgpa = %.2f\n",s1.cgpa);
return 0;
}