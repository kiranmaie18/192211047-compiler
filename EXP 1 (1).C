#include <stdio.h> currentChar) != NULL) {
                operators[oc++] = currentChar;
            }
        }
    }

 printf("Identifiers: ");
    for (int j = 0; j < ic; j++) {
        printf("%c ", identifiers[j])
#include <ctype.h>
#include <string.h>

int main() {
    char b[30], constants[30], operators[30], identifiers[30];
    int ic = 0, cc = 0, oc = 0;

    printf("Enter the string: ");
    scanf("%[^\n]s", b);

    for (int i = 0; i < strlen(b); i++) {
        char currentChar = b[i];

        if (isspace(currentChar)) {
            continue;
        } else if (isalpha(currentChar)) {
            identifiers[ic++] = currentChar;
        } else if (isdigit(currentChar)) {
            int m = currentChar - '0';
            i++;

            while (isdigit(b[i])) {
                m = m * 10 + (b[i] - '0');
                i++;
            }

            i--;
            constants[cc++] = m;
        } else {
            if (strchr("+-*=",;
    }

    printf("\nConstants: ");
    for (int j = 0; j < cc; j++) {
        printf("%d ", constants[j]);
    }

    printf("\nOperators: ");
    for (int j = 0; j < oc; j++) {
        printf("%c ", operators[j]);
    }

    return 0;
}
