#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *f1 = fopen("txt00.doc", "w");
    if (f1 == NULL) {
        perror("Error");
        return 1;
    }
    char matn[100] = "Paxta terimi, poliz ekinlari, payvandchi usta, Xorazm filiali";
    fprintf(f1, "%s", matn);
    fclose(f1);
    f1 = fopen("txt00.doc", "r");
    char s[100] = "";
    while (fscanf(f1, "%s", s) != EOF) {
        if (s[0]=='p'|| s[0]=='P'){
        printf("\t%s", s);
        }
    }
    fclose(f1);
    return 0;
}

