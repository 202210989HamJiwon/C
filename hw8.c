#include <stdio.h>
#include <math.h>

double sd(double arr[]){
    double result = 0;
    double sum = 0;
    double avr = 0;
    for(int i = 0; i<5;i++){
        sum += arr[i];
    }
    avr = sum / 5;

    sum = 0;
    for(int i = 0; i<5;i++){
        sum += pow(arr[i]-avr, 2);
    }
    result = sqrt(sum/5);
    return result;
}
int main()
{
    double result = 0;
    double arr[5] = {0,0,0,0,0};
    printf("Enter 5 real numbers: ");
    for (int i = 0; i<5;i++){
        scanf("%lf", &arr[i]);
    }
    result = sd(arr);
    printf("Standard Deviation = %lf\n", result);
    return 0;
}
