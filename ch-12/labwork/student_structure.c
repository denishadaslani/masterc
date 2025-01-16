#include <stdio.h>

struct Student
{
    int stu_id;
    char name[20];
    int stu_age;
    char course[20];
    char city[20];
    int standard;
    char school[60];
};

void main()
{

    struct Student s1, s2, s3;

    printf("First student Record:\n");

    printf("Enter the student id:");
    scanf("%d", &s1.stu_id);
    fflush(stdin);
    printf("Enter the student name:");
    gets(s1.name);
    printf("Enter the student age:");
    scanf("%d", &s1.stu_age);
    fflush(stdin);
    printf("Enter the student course:");
    gets(s1.course);
    printf("Enter the student standard:");
    scanf("%d", &s1.standard);
    fflush(stdin);
    printf("Enter the student school:");
    gets(s1.school);
    printf("\n\n");

    printf("Second student Record:\n");

    printf("Enter the student id:");
    scanf("%d", &s2.stu_id);
    fflush(stdin);
    printf("Enter the student name:");
    gets(s2.name);
    printf("Enter the student age:");
    scanf("%d", &s2.stu_age);
    fflush(stdin);
    printf("Enter the student course:");
    gets(s2.course);
    printf("Enter the student standard:");
    scanf("%d", &s2.standard);
    fflush(stdin);
    printf("Enter the student school:");
    gets(s2.school);
    printf("\n\n");

    printf("Thared student Record:\n");

    printf("Enter the student id:");
    scanf("%d", &s3.stu_id);
    fflush(stdin);
    printf("Enter the student name:");
    gets(s3.name);
    printf("Enter the student age:");
    scanf("%d", &s3.stu_age);
    fflush(stdin);
    printf("Enter the student course:");
    gets(s3.course);
    printf("Enter the student standard:");
    scanf("%d", &s3.standard);
    fflush(stdin);
    printf("Enter the student school:");
    gets(s3.school);
    printf("\n\n");

    printf("first student Record:\n");

    printf("student_id:%d\n", s1.stu_id);
    printf("student_name:%s\n", s1.name);
    printf("student_age:%d\n", s1.stu_age);
    printf("student_course:%s\n", s1.course);
    printf("student_standard:%d\n", s1.standard);
    printf("student_school:%s\n", s1.school);
    printf("\n\n");

    printf("second student Record:\n");

    printf("student_id:%d\n", s2.stu_id);
    printf("student_name:%s\n", s2.name);
    printf("student_age:%d\n", s2.stu_age);
    printf("student_course:%s\n", s2.course);
    printf("student_standard:%d\n", s2.standard);
    printf("student_school:%s\n", s2.school);
    printf("\n\n");

    printf("first student Record:\n");

    printf("student_id:%d\n", s3.stu_id);
    printf("student_name:%s\n", s3.name);
    printf("student_age:%d\n", s3.stu_age);
    printf("student_course:%s\n", s3.course);
    printf("student_standard:%d\n", s3.standard);
    printf("student_school:%s\n", s3.school);
    printf("\n\n");
}