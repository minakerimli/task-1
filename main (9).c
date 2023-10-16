
#include <stdio.h>
#include <string.h>

int main() {
    char text[1000];
    char substring[100];
    int i, j;

    printf("Enter the text: ");
    gets(text);

    printf("Enter the substring: ");
    gets(substring);

    int textLength = strlen(text);
    int subLength = strlen(substring);
    int found = 0;

    for (i = 0; i <= textLength - subLength; i++) {
        for (j = 0; substring[j] != '\0'; j++) {
            if (text[i + j] != substring[j]) {
                break;
            }
        }
        if (substring[j] == '\0') {
            printf("Substring found at position %d\n", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Substring not found in the text.\n");
    }

    return 0;
    }
