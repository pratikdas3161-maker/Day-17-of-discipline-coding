/* C program to calculate the sum and average of elements in an array. */
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    float average;

    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    average = (float)sum / 5; // Typecast to float for decimal accuracy

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
