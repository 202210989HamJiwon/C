#include <stdio.h>
int arr_print(int arr1[],int arr2[]){
    printf("arr1 = ");
    for(int i = 0; i<6;i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("arr2 = ");
    for(int i = 0; i<6;i++){
        printf("%d ", arr2[i]);
    }
    printf("\n");
}
int main()
{
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[6] = {7,8,9,10,11,12};
    int tmp=0;
    arr_print(arr1,arr2);
    for(int i =0; i<6;i++){
        tmp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tmp;
    }
    printf("after swap\n");
    arr_print(arr1,arr2);
    return 0;
}
