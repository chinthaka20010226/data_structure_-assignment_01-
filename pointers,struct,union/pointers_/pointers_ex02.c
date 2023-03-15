//using pointers,

/*#include<stdio.h>
int main(){
    int num1,num2,*ptr1,*ptr2; //declare variables and pointers,

    printf("Input first number:");
    scanf("%d", &num1);

    printf("Input second number:");
    scanf("%d", &num2);

    ptr1 = &num1; //assigned an address of num1,
    ptr2 = &num2; //assigned an address of num2,

    printf("Product of two numbers:%d", (*ptr1)*(*ptr2));

    return 0;
}*/

//Using pointer and function,

#include<stdio.h>
void product(int* ,int* );
void main(){
    int num1,num2;

    printf("Input first number:");
    scanf("%d", &num1);

    printf("Input second number:");
    scanf("%d", &num2);

    product(&num1,&num2);

}
void product(int *x,int *y){
    printf("Product of two numbers:%d", (*x)*(*y));
}