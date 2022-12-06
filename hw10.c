#include <stdio.h>
typedef struct country{
    char city[50];
    char name[50];
    int pop;
} Country;
int main()
{
    Country list[3];
    printf("Input three cities: \n");
    for(int i = 0; i< 3 ; i++){
        printf("Name> ");
        scanf(" %[^\n]s", list[i].city);
        printf("Country> ");
        scanf(" %[^\n]s", list[i].name);
        printf("Population> ");
        scanf("%d", &list[i].pop);
    }
    printf("Printing the three cities:\n");
    for(int i =0;i<3;i++){
        printf("%d. %s in %s with a population of %d\n", i+1, list[i].city, list[i].name, list[i].pop);
    }
    return 0;
}
