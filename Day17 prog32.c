/* C program to find the largest and smallest elements in an array. */
#include <stdio.h>

int main() {
    int arr[6] = {12, 45, 2, 67, 34, 8};
    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < 6; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Largest Element: %d\n", max);
    printf("Smallest Element: %d\n", min);

    return 0;
}
