#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Toldir(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        arr[i] = rand() % 100 - 50;
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void sort2(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i]<arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    srand(time(0));
    int n, i;
    printf("N: ");
    scanf("%d", &n);
    int arr[n];
    Toldir(arr, n);
    FILE *f1 = fopen("musbat.txt", "w+");
    FILE *f2 = fopen("manfiy.txt", "w+");
    FILE *f3 = fopen("juft.txt", "w+");
    FILE *f4 = fopen("toq.txt", "w+");
    if (f1 == NULL || f2 == NULL || f3 == NULL || f4 == NULL) {
        printf("Error.\n");
        exit(1);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            fprintf(f1, "%d ", arr[i]);
        } else {
            fprintf(f2, "%d ", arr[i]);
        }
    }
    fclose(f1);
    f1 = fopen("musbat.txt", "r");
    int mus[n], k=0;
    while (fscanf(f1, "%d", &mus[k])!= EOF) {
        k++;
    }
    fclose(f1);
    sort(mus, k);
    f1 = fopen("musbat.txt", "w");
    for (i = 0; i < k; i++) {
        fprintf(f1, "%d ", mus[i]);
    }
    fclose(f1);
fclose(f2);
    f1 = fopen("manfiy.txt", "r");
    int man[n], l=0;
    while (fscanf(f1, "%d", &man[l])!= EOF) {
        l++;
    }
    fclose(f2);
    sort2(man, l);
    f2 = fopen("manfiy.txt", "w");
    for (i = 0; i < k; i++) {
        fprintf(f2, "%d ", man[i]);
    }
    fclose(f1);
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            fprintf(f3, "%d ", arr[i]);
        } else {
            fprintf(f4, "%d ", arr[i]);
        }
    }
    fclose(f2);
    fclose(f3);
    fclose(f4);s

    return 0;
}

