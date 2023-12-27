//Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_standard
//- stu_school
#include<stdio.h>
#include<string.h>
struct student{
 
  int stu_id;
  char stu_name[100];
  int  stu_age;
  char stu_course[100];
  char stu_city[100];
  int stu_standard;
  char stu_school[100];
};

main(){

struct student s1,s2,s3;


strcpy(s1.stu_name,"kavya");
s1.stu_age=14;
s1.stu_id=3031;
strcpy(s1.stu_city,"bhavnagar");
s1.stu_standard=9;
strcpy(s1.stu_course,"python");

printf("Student name=%s\n",s1.stu_name);
printf("student age=%d\n",s1.stu_age);
printf("student id=%d\n",s1.stu_id);
printf("student standard=%d\n",s1.stu_standard);
printf("student course=%s\n",s1.stu_course);
printf("student city=%s\n",s1.stu_city);

printf("\n");
strcpy(s2.stu_name,"aman");
s2.stu_age=18;
s2.stu_id=3431;
strcpy(s2.stu_city,"surat");
s2.stu_standard=12;
strcpy(s2.stu_course,"C++");

printf("Student name=%s\n",s2.stu_name);
printf("student age=%d\n",s2.stu_age);
printf("student id=%d\n",s2.stu_id);
printf("student standard=%d\n",s2.stu_standard);
printf("student course=%s\n",s2.stu_course);
printf("student city=%s\n",s2.stu_city);

printf("\n");
strcpy(s3.stu_name,"Raj");
s3.stu_age=16;
s3.stu_id=3341;
strcpy(s3.stu_city,"dang");
s3.stu_standard=11;
strcpy(s3.stu_course,"telugu");

printf("Student name=%s\n",s3.stu_name);
printf("student age=%d\n",s3.stu_age);
printf("student id=%d\n",s3.stu_id);
printf("student standard=%d\n",s3.stu_standard);
printf("student course=%s\n",s3.stu_course);
printf("student city=%s\n",s3.stu_city);

}