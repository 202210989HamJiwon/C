#include <stdio.h>

int main()
{
    int input;
    printf("Please enter a number: ");
    scanf("%d", &input);
    
    for(int i=2;i<input;i++){
        if(input%i == 0){
            printf("It is not a prime number\n");
            return 0;
        }
    }
    printf("It is a prime number\n");
    return 0;
}