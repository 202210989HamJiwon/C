#include <stdio.h>

int main()
{
    float mile = 1.609;
    float input = 0;
    
    printf("Please enter kilometers: ");
    scanf("%f", &input);
    printf("%.1f km is equal to %.1f miles.", input, input/mile);
    return 0;
}
