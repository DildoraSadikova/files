#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1 = fopen("newfile.txt", "w");
    if (f1 == NULL) {
        perror("Error");
        return 1;
    }
    fprintf(f1, "1-qator.\n");
    fprintf(f1, "2-qator.\n");
    fprintf(f1, "3-qator.\n");
    fprintf(f1, "4-qator.\n");
    fclose(f1);
    f1=fopen("newfile.txt", "r");
    char s[100];
    int son = 0;
    while (fgets(s, sizeof(s), f1) != NULL) {
        son++;
    }
    printf("\t%d qator", son);

    fclose(f1);
    return 0;
}

