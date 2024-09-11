#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
int Tub(int a) {
    int i, t = 1;
    if (a <= 1){ t = 0;
    } else{
        for( i = 2; i * i <= a; i++) {
            if (a % i == 0) { t= 0; 
                break;
            }
        }
    }
    return t;
}
int main(){
	srand(time(0));
	int n, i; 
	printf("\tN: "); scanf("%d", &n);
	int arr[n];
	FILE *f1=fopen("tub.txt", "w");
	for (i = 1; i < n; i++) {
        int b= Tub(arr[i]);
        if (b == 1) {
            fprintf(f1, "%d", arr[i]);
        }
    }
    fclose(f1);
return 0;
}
