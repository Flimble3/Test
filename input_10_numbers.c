#include<stdio.h>

int main() {
    int array[10]; //10 number array
    int i, sum = 0;
    float average;
    printf("Enter 10 numbers\n");
    for(i = 0; i < 10; i++) {
        scanf("%d",&array[i]);
        sum += array[i];
    }
    average = sum / 10;
    printf("The sum of the array is %d\n", sum);
    printf("The average of the array is %.2f\n", average);
    return 0;
}