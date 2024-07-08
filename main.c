#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "irregularverbs.h"

/*
only works with present tense conjugations,
but this is just a proof of concept so uh
*/

char* endings[] = {
    "o",
    "i",
    "x",
    "ixmo",
    "xte",
    "xno"
};

int main() {
    char verb[20];
    scanf("%20[^\n]", verb);

    for (int i = 0; italianverbs[i].verb != NULL; i++) {
        if (!strcmp(verb, italianverbs[i].verb)) {

            printf("...\n");
            for (int j = 0; j < 6; j++) {
                printf("%s\n", italianverbs[i].conjugations[j]);
            }

            return 0;
        }
    }

    char conj = verb[strlen(verb) - 3];
    char substr[10] = "re";
    char *ret;
    ret = strstr(verb, substr);
    char* root = verb;
    verb[strlen(verb) - 3] = '\0';
    root += (ret - verb - 1);
    int n = sizeof(endings) / sizeof(char*);
    int destArr[n];

    for (int i = 0; i < n; i++) {
        char *mod = strdup(endings[i]);
        char *tmp = mod;

        while (*tmp) {
            if (*tmp == 'x') {
                *tmp = conj;
            }
            tmp++;
        }
            destArr[i] = mod;
    }

    printf("...\n");
    for (int i = 0; i < 6; i++) {
        printf("%s%s\n", verb, destArr[i]);
    }
}
