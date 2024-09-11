#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *f;
    int son[5];
    int i, sum = 0;
    f = fopen("n.txt", "w");
    if (f == NULL) {
        printf("Fayl topilmadi\n");
        exit(1);
    }
    printf("\t5 ta son: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &son[i]);
        fprintf(f, "%d+", son[i]);
    }
    fclose(f); 
    f = fopen("n.txt", "r+");
    if (f == NULL) {
        printf("Fayl topilmadi\n");
        exit(1);
    }
    printf("\tSiz kiritgan sonlar yig'indisi: \n");
    sum = 0;
    i = 0; 
    while (fscanf(f, "%d", &son[i]) != EOF) {
        printf("%d", son[i]);
        if (i < 4) {
            printf("+");
        }
        sum += son[i];
        i++;
    }printf("=%d\n", sum);
    fprintf(f, "=%d", sum);
    fclose(f); 


    return 0;
}

