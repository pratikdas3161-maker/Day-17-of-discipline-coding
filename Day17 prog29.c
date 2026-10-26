/*Array in C programming*/
    #include <stdio.h>

int main() {
    
    int numbers[5] = {10, 20, 30, 40, 50};
    
   
    printf("First element (index 0): %d\n", numbers[0]);
    printf("Third element (index 2): %d\n", numbers[2]);
    
   
    numbers[1] = 99; // Changes 20 to 99
    printf("Modified second element (index 1): %d\n", numbers[1]);
    
    
    printf("\nAll array elements:\n");
    for(int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }
    
    return 0;
}

