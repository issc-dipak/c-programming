#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  
    int *p;                             
    int **pp;                         

    p = arr;    
    pp = &p;    

    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(p + i)); 
    }

    printf("\nUsing pointer to pointer:\n");
    printf("Address stored in p: %p\n", p);
    printf("Address stored in pp (which is address of p): %p\n", pp);
    printf("Value pointed to by pp (which is the address stored in p): %p\n", *pp);
    printf("Value pointed to by *pp (which is the first element of array): %d\n", **pp);

    *p = 100;   
    *(p + 2) = 300; 

    printf("\nModified array:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(p + i)); 
    }

    return 0;
}
