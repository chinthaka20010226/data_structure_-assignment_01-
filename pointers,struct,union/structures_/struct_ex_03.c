#include<stdio.h>

struct student{
    char name[50];
    int roll;
};

struct student s[];

void stu_details(struct student *s);

int main(){
    int num_of_stu;
    printf("Input number of students:");
    scanf("%d", &num_of_stu);
    for(int i = 1;i <= 2;i++){
        printf("Enter N0.%d student's name:", i);
        scanf(" %[^\n]s", s[i].name);
        printf("Enter roll number:");
        scanf("%d", &s[i].roll);
    }

    stu_details(&s);
    return 0;
}

void stu_details(struct student *s){
    for(int i = 1;i <= 2;i++){
        printf("No.%d student's Name:%s\n", i,s[i].name);
        printf("No.%d student's Roll:%d\n", i,s[i].roll);
    }

}