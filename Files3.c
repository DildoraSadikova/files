#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *f;
    int n, i, sum = 0;
    printf("\tN: ");
    scanf("%d", &n);
    f = fopen("new.txt", "w");
    if (f == NULL) {
        printf("Fayl topilmadi\n");
        exit(1);
    }
    if (n%2==0){
        fprintf(f, "1dan %d gacha bo'lgan sonlar yig'indisi:\n", n);
        sum = 0;
        for (i = 1; i <= n; i++) {
            fprintf(f, "%d", i);
            if (i < n) {
                fprintf(f, "+");
            }
            sum += i;
        }
        fprintf(f, "=%d\n", sum);
    } else {
        fprintf(f, "\t%ddan 1gacha bo'lgan sonlar yig'indisi:\n", n);
        sum = 0;
        for (i = n; i >= 1; i--) {
            fprintf(f, "%d", i);
            if (i > 1) {
                fprintf(f, "+");
            }
            sum += i;
        }
        fprintf(f, "=%d\n", sum);
    }
    fclose(f); 
    if (n % 2 == 0) {
        printf("\t1dan %d gacha bo'lgan sonlar yig'indisi:\n", n);
        sum = 0;
        for (i = 1; i <= n; i++) {
            printf("%d", i);
            if (i < n) {
                printf("+");
            }
            sum += i;
        }
        printf("=%d\n", sum);
    } else {
        printf("\t%ddan 1gacha bo'lgan sonlar yig'indisi:\n", n);
        sum = 0;
        for (i = n; i >= 1; i--) {
            printf("%d", i);
            if (i > 1) {
                printf("+");
            }
            sum += i;
        }
        printf("=%d\n", sum);
    }
    return 0;
}

