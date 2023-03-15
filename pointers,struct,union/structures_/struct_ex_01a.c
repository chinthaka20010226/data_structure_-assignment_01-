#include<stdio.h>

struct stu_data{
     char id[20];
     char name[50];
     char address[50];
     int age;
};

void main(){
     struct stu_data s;
     printf("Input student id:");
     scanf("%s", s.id);
     printf("Input student name:");
     scanf(" %[^\n]s", s.name);
     printf("Input student address:");
     scanf(" %[^\n]s", s.address);
     printf("Input student age:");
     scanf("%d", &s.age);

     printf("student,\nid      : %s\nname    : %s\naddress : %s\nage     : %d", s.id,s.name,s.address,s.age);
}
