#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define usp 1
#define zlyh 0

void vymena(char *a,char *b){
	char c=*a;
	*a=*b;
	*b=c;
}

char nahodna_permutacia_abecedy(char *str, char l){
	if(l<1 || l>26){
		return zlyh;
	}
	
	char abc[27];
	
	for(int i=0; i<26; i++){
		abc[i]='a'+i;
	}
	
	for(int p=0; p<l; p++){
		int q=rand()%(p+1);
		vymena(&abc[p],&abc[q]);
	}
	
	strncpy(str,abc,l);
	
	return usp;
}

int main() {
	char vys[27];
	char d=7;
	
	srand(time(NULL));
	
	if(nahodna_permutacia_abecedy(vys, d)==usp){
		printf("Nachodna permutacia prvych %d znakov: %s \n", d,vys);
	}
	else{
		printf("Chyba: nespravna dlzka");
	}
	
	return 0;
}