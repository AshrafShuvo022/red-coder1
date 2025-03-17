#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool checkFloatingPoint(const char *str) {
    int len = strlen(str);
    int dotIndex = -1;

    for (int i = 0; i < len; ++i) {
        if (str[i] == '.') {
            if (dotIndex != -1) {
                return false;
            }
            dotIndex = i;
        } else if ((str[i] < '0' || str[i] > '9') && i != dotIndex) {
            return false;
        }
    }

    return (dotIndex > 0) && (len - dotIndex == 3);
}

int main() {
    FILE *inputFile = fopen("input.c", "r");
    if (inputFile == NULL) {
        printf("Error opening the file\n");
        return 1;
    }

    char tokenBuffer[1000];
    int floatingPointCount = 0;

    while (fscanf(inputFile, "%s", tokenBuffer) == 1) {
        if (checkFloatingPoint(tokenBuffer)) {
            floatingPointCount++;
        }
    }

    fclose(inputFile);

    printf("Number of floating point numbers: %d\n", floatingPointCount);
    return 0;
}
