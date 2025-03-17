#include <stdio.h>
#include <stdlib.h>

void generate_matrix(char *plain, int key) {


    // finding large value


    int larger_value = 0;
    int temp_key = key;

    while (temp_key > 0) {
        int digit = temp_key % 10;
        if (digit > larger_value) {
            larger_value = digit;
        }
        temp_key /= 10;
    }

    char matrix[larger_value][100]; 

    // Assigning the plaintext 
    int row_index = 0;
    int col_index = 0;

    for (int i = 0; plain[i] != '\0'; i++) {
        matrix[row_index][col_index] = plain[i];

        // making new col
        if (row_index == larger_value - 1) {
            row_index = 0;
            col_index++;
        } else {
            row_index++;
        }
    }

   //print
    for (int i = 0; i < larger_value; i++) {
        printf("Row %d: %s\n", i + 1, matrix[i]);
    }
    
    // as per the key
      int rowToPrint[larger_value];
    int temp_key2 = key;
    for (int i = larger_value - 1; i >= 0; i--) {
        rowToPrint[i] = temp_key2 % 10;
        temp_key2 /= 10;
    }

    // rearranged matrix
    printf("\nRearranged Matrix:\n");
    for (int i = 0; i < larger_value; i++) {
        printf("Row %d: %s\n", rowToPrint[i], matrix[rowToPrint[i] - 1]);
    }

    
}

int main() {
    
    char plain[100]; 
    printf("Enter plaintext: ");
    scanf("%s", plain);

    int key;
    printf("Enter numeric key: ");
    scanf("%d", &key);


    generate_matrix(plain, key);

    return 0;
}

