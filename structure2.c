#include<stdio.h>
#include<string.h>
struct student{
    int roll_no;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1;
    s1.roll_no=111111111;
    s1.cgpa=9.6;
    strcpy(s1.name,"madhav");

    printf("student name = %s \n",s1.name);
    printf("student roll_no = %d \n",s1.roll_no);
    printf("student cgpa point = %.2f \n",s1.cgpa);
return 0;
}
// structure are stored in contiguous memory location.
// example = datatype : memory location;
//           name :       2010
//           roll_no :     2110
//           cgpa :         2114