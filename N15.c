#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
FILE *f1=fopen("txt.doc", "w");
char matn[100]="Assalomu alaykum. Dasturlash guruhi Xorazm filiali";
fprintf(f1, "%s", matn);
fclose(f1);
char s[100]="";
char enguzun[50]="";
int max=0;
while(fscanf(f1, "%s", s)!=EOF){
    if(strlen(s)>max){
    	max=strlen(s);
    	strcpy(enguzun, s);
	}  	
}
printf("Eng uzun so'z=%s", enguzun);




fclose(f1);
    return 0;
}
