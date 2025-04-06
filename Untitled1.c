#include<stdio.h>

#define usp 1
#define zlyh 0

char nahodna_permutacia_abecedy(char *str, char l){
	if(l<1 || l>26){
		return zlyh;
	}
	
	
	
	return usp;
}

int main() {
	char vys[27];
	char d=7;
	
	if(nahodna_permutacia_abecedy(vys, d) == usp){
		printf("Nachodna permutacia prvych %d znakov: %s \n", d,vys);
	}
	else{
		printf("Chyba: nespravna dlzka", d,vys);
	}
	
	return 0;
}