#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LEN 100

void tokenize(char input[]) {
    char *token;
    token = strtok(input, " ,.?!");

    while(token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ,.?!");
    }
}

int main() {
    char input[MAX_LEN];
    FILE *file;


    file = fopen("character_lexenes_input.txt", "r");

    while (fgets(input, MAX_LEN, file) != NULL) {
        // Remove newline character if present
        if (input[strlen(input) - 1] == '\n') {
            input[strlen(input) - 1] = '\0';
        }

        tokenize(input);
    }

    // Close the file
    fclose(file);

    return 0;
}
