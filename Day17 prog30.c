/* C program to read 5 integers from the user and print them. */
#include <stdio.h>

int main() {
    int arr[5];

    printf("Enter 5 integers:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nYou entered: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
