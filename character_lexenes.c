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
    printf("Enter a sentence: ");
    fgets(input, MAX_LEN, stdin);

    // Remove newline character if present
    if(input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    tokenize(input);

    return 0;
}

