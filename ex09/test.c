#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {  // no strings provided
        return 0;
    }
    int i, j, max_len = 0;
    // concatenate all arguments into a single string
    char str[1000] = "";
    for (i = 1; i < argc; i++) {
        strcat(str, argv[i]);
        if (i != argc - 1) {
            strcat(str, " ");
        }
    }
    // find the length of the longest string
    char *token = strtok(str, " ");
    while (token != NULL) {
        int len = strlen(token);
        if (len > max_len) {
            max_len = len;
        }
        token = strtok(NULL, " ");
    }
    // print the top border of the frame
    for (j = 0; j < max_len + 4; j++) {
        printf("*");
    }
    printf("\n");
    // print the strings in the frame
    token = strtok(str, " ");
    while (token != NULL) {
        printf("* %s", token);
        for (j = strlen(token); j < max_len; j++) {
            printf(" ");
        }
        printf(" *\n");
        token = strtok(NULL, " ");
    }
    // print the bottom border of the frame
    for (j = 0; j < max_len + 4; j++) {
        printf("*");
    }
    printf("\n");
    return 0;
}
