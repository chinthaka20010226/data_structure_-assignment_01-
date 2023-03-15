#include<stdio.h>

struct stu_info{
    char name[50];
    int marks;
}s[];

void stu_information(struct stu_info *s,int );

int main(){
    int n;
    printf("Input number of students:");
    scanf("%d", &n);

    printf("\n");
    printf("Enter information of students:\n");

    printf("\n");
    for(int i = 0;i < n;i++){
        printf("For roll number %d\n", i+1);
        printf("Enter name:");
        scanf(" %[^\n]s", s[i].name);
        printf("Enter marks:");
        scanf("%d", &s[i].marks);
    }

    //printf("%u\n", &s[0].name);
    //printf("%s", s[0].name);

    printf("\n");
    printf("Displaying information of students:\n");
    printf("\n");
    stu_information(&s,n);

    return 0;
}

void stu_information(struct stu_info *s,int size){
    //printf("%u\n", &s[0].name);
    //printf("%s", s[0].name);
    for(int i = 0;i < size;i++){
        printf("Information for roll number %d:\n", i+1);
        printf("Name:%s\n", s[i].name);
        printf("Marks:%d\n", s[i].marks);
    }
}