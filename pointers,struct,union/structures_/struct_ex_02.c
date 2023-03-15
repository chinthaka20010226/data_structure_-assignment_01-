#include<stdio.h>

struct Add{
    int feet;
    float inch;
}s[],result;

int main(){
    int sum1 = 0,no_of_dis;
    float sum2 = 0;

    printf("Input number of distance:");
    scanf("%d", &no_of_dis);

    for(int i = 1;i <= no_of_dis;i++){
        printf("Enter information for %dst distance,\nEnter feet:", i);
        scanf("%d", &s[i].feet);
        printf("Enter inch:");
        scanf("%f", &s[i].inch);
    }

    for(int i = 1;i <= no_of_dis;i++){
        sum1 = sum1 + s[i].feet;
        sum2 = sum2 + s[i].inch;
    }
    result.feet = sum1;
    result.inch = sum2;

    while(result.inch >= 12.0){
        result.inch = result.inch - 12.0;
        ++result.feet;
    }

    printf("Sum of distances = %d'-%.1f''", result.feet,result.inch);

    return 0;

}