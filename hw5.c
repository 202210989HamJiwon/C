#include <stdio.h>

int bin();
int por();

int main()
{
    int input;
    printf("Please enter a number : ");
    scanf("%d", &input);
    
    printf("bin num = %d \n", bin(input));
    return 0;
}
int por(int num, int count){
    int r = 1;
    
    for(int tmp = 0; tmp < count; tmp++){
        r *= num;
    }
    return r;
}
int bin(int input){
    static long long int num= 0;
    static int i = 0;
    if(input == 1){
        num += por(10 ,i);
        return num;
    }
    else if(input % 2 == 0){
        i++;
        return bin(input/2);
    }
    else if (input % 2 == 1){
        num += por(10, i);
        i++;
        return bin(input/2);
    }
}