#include <stdio.h>
#include <string.h>

struct student_info{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student_info s1;
    strcpy(s1.name, "Ctrl Z");
    s1.roll = 143;
    s1.cgpa = 9.0;
    printf("Student 1 Info:\n\n");
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("CGPA: %f\n\n", s1.cgpa);

    struct student_info s2;
    strcpy(s2.name, "404 Brain Not Found");
    s2.roll = 1432;
    s2.cgpa = 9.7;
    printf("Student 2 info:\n\n");
    printf("NAME:%s\n", s2.name);
    printf("ROLL:%d\n", s2.roll);
    printf("CGPA:%f\n", s2.cgpa);

    return 0;
}
