//Method 01,

/*#include<stdio.h>
union stu_information{
    char name[50];
    int roll;
    int marks;
}student[];
void main(){
    int num,i = 0,j = 0;
    printf("Enter number of students:");
    scanf("%d", &num);

    while(i < num){
        printf("For %d student's,\nname:", i+1);
        scanf(" %[^\n]s", student->name);
        printf("roll:");
        scanf("%d", &student->roll);
        printf("marks:");
        scanf("%d", &student->marks);
        i++;
    }
    printf("\n");
    while(j < num){
        printf("For %d student's,\n", j+1);
        printf("name:%s\n", student->name);
        printf("roll:%d\n", student->roll);
        printf("marks:%d\n", student->marks);
        j++;
    }
}*/

//Method 02,

#include<stdio.h>
#include<string.h>
union stu_information{
    int roll;
    float marks;
    char name[50];
};
void main(){
    union stu_information s;

    s.roll = 01;
    s.marks = 20.2;
    strcpy(s.name,"SENARATHNA G.G.P.C.");

    printf("\nroll:%d", s.roll);
    printf("\nmarks:%f", s.marks);
    printf("\nname:%s", s.name);

}

