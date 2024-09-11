#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
    FILE *f;
    int soz = 0, gap = 0;
    char matn[100];
    f = fopen("text.txt", "w");
    if (f == NULL) {
        printf("Fayl topilmadi\n");
        exit(1);
    }
    fprintf(f, "Assalomu alaykum! Bu fayllar mavzusidan uyga vazifa.");
    fclose(f);
    f = fopen("text.txt", "r");
    if (f == NULL) {
        printf("Fayl topilmadi\n");
        exit(1);
    }
    int i, Word = 0;
    while (fgets(matn, sizeof(matn), f) != NULL) {
    for (i= 0; matn[i]!= '\0'; i++) {
            if (isspace(matn[i])) {
            if (Word) {
            soz++;
        Word = 0; }
} else if (ispunct(matn[i]) && (matn[i] == '.' || matn[i] == '!' || matn[i] == '?')) {
             if (Word) {
             soz++;
    Word = 0; }
        gap++;
            } else {
            Word = 1;
            }
        }
    }printf("\t%d ta so'z, %dta gap bor\n", soz, gap);
    fclose(f);

    return 0;
}

