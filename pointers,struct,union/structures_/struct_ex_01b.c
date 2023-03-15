#include<stdio.h>

struct stu_address{
    int street;
    char state[50];
    char city[30];
    char country[20];
};

struct stu_data{
    char id[20];
    char name[50];
    struct stu_address address;
    int age;
};

void main(){
    struct stu_data s;
    printf("Input student id:");
    scanf(" %[^\n]s", s.id);
    printf("Input student name:");
    scanf(" %[^\n]s", s.name);
    printf("Input student address,\n street:");
    scanf("%d", &s.address.street);
    printf(" state:");
    scanf(" %[^\n]s", s.address.state);
    printf(" city:");
    scanf(" %[^\n]s", s.address.city);
    printf(" country:");
    scanf(" %[^\n]s", s.address.country);
    printf("Input student age:");
    scanf("%d", &s.age);

    printf("student,\nid      : %s\nname    : %s\naddress : %d, %s, %s, %s\nage     : %d", s.id,s.name,s.address.street,s.address.state,s.address.city,s.address.country,s.age);
}
