//Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
//- emp_id
//- emp_name
//- emp_age
//- emp_role
//- emp_city
//- emp_experience
//- emp_company_name
#include<stdio.h>

struct employees{

int emp_id;
char emp_name[100];
int emp_age;
char emp_role[100];
char emp_city[100];
int emp_experience;
char emp_company_name[100];
};

int main()
{
int i,n;
printf("enter the number of employees:");
scanf("%d",&n);

 struct employees emps[n];
 
 printf("Enter %d Employee Details \n \n",n);

 for(i=0;i<n;i++){

printf("Employee %d:-\n",i+1);

printf("Enter the name:");
scanf("%s",emps[i].emp_name);  

printf("Enter the id:");
scanf("%d",&emps[i].emp_id);

printf("enter the position:");
scanf("%s",emps[i].emp_role);  

printf("Enter the cityname:");
scanf("%s",emps[i].emp_city);  

printf("Enter the companyname:");
scanf("%s",emps[i].emp_company_name);  

printf("Enter the expericence(years):");
scanf("%d",&emps[i].emp_experience);  

printf("Enter the age of employe:");
scanf("%d",&emps[i].emp_age);  
}   
    printf("-------------- All Employees Details ---------------\n");
    for(i=0;i<n;i++){
        printf("Name:");
        printf("%s \n",emps[i].emp_name);
 
        printf("Id:");
        printf("%d \n",emps[i].emp_id);
 
        printf("Position:");
        printf("%s \n",emps[i].emp_role);
       
        printf("Experience:");
        printf("%d \n",emps[i].emp_experience);
       
        printf("comName:");
        printf("%s \n",emps[i].emp_company_name);
       
        printf("age:");
        printf("%d \n",emps[i].emp_age);
       
        printf("City:");
        printf("%s \n",emps[i].emp_city);
 
       }
}