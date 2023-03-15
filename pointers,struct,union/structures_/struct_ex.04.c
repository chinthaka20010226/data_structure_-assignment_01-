#include<stdio.h>

struct compl_num{
     float real;
     float imag_res;
}num[],sum;

void main(){
     float sum1 = 0,sum2 = 0;
     int n;
     printf("Input number of complex number:");
     scanf("%d", &n);

     for(int i = 1;i <= n;i++){
        printf("For %dst complex number,\nEnter real and imaginary respectively:", i);
        scanf("%f %f", &num[i].real,&num[i].imag_res);
     }

     for(int i = 1;i <= n;i++){
        sum1 = sum1 + num[i].real;
        sum2 = sum2 + num[i].imag_res;
     }

     sum.real = sum1;
     sum.imag_res = sum2;

     printf("Sum = %.1f+%.1fi", sum.real,sum.imag_res);
}