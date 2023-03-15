//Using a pointer,

/*#include<stdio.h>
int main(){
     int num1,num2,*ptr1,*ptr2;
     printf("Input first number:");
     scanf("%d", &num1);
     printf("Input second number:");
     scanf("%d",&num2);

     ptr1 = &num1;
     ptr2 = &num2;

     printf("Summation of two numbers:%d", *ptr1+*ptr2);

     return 0;
}*/

//Using pointer and function,

#include<stdio.h>
int Add(int* ,int* );
int main(){
    int num1,num2,summation;

    printf("Input first number:");
    scanf("%d", &num1);

    printf("Input second number:");
    scanf("%d", &num2);

    //summation = Add(&num1,&num2);
    //printf("summation of two numbers:%d", summation);

    printf("summation of two numbers:%d", Add(&num1,&num2));

    return 0;
}
int Add(int* x,int* y){
    int Add = *x + *y;
    return Add;
}