#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	FILE *f=fopen("C:\\Users\\Dildora\\Documents\\Fayllar1\\f1.txt", "w");
	fprintf(f, "Sadikova Dildora Xorazm Bootcamp Foundation XN1");
	if(f==NULL){
		printf("\tFayl topilmadi");
		exit(1);
	}
	fclose(f);
	fopen("f1.txt", "r");
	char matn[100]="";
	while(!feof(f)){
	fscanf(f, "%s", matn);
	printf("%s\n", matn);
	}

fclose(f);
	return 0;
}
