#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *f1 = fopen("txt3.doc", "w");
    if (f1 == NULL) {
        perror("Error");
        return 1;
    }
    char matn[100] = "Salom aziz o'quvchilar, eng dono dasturchilar";
    fprintf(f1, "%s", matn);
    fclose(f1);
    f1 = fopen("txt3.doc", "r");
    char s[100] = "";
    while (fscanf(f1, "%s", s) != EOF) {
        if (strlen(s)<5) {
            printf("\t%s", s);s
        }
    }
    fclose(f1);
    return 0;
}

