#include <conio.h>
#include<stdio.h>

main(){
	int n1,n2,n3,media=0,exame=0;
	printf("digite a primeira nota ");
	scanf("%i",&n1);
	printf("digite a segunda nota");
	scanf("%i",&n2);
	printf("digite a terceira nota");
	scanf("%i",&n3);
	media=(n1+n2+n3)/3;
	if(media>=0 && media<3){
		printf("REPROVADO");
	}
	if(media>=3 && media<7){
		printf("exame \n");
		exame=12-media;
		printf("deve tirar %i",exame,"para ser reprovado");
	}
	if(media>=7 && media<=10){
		printf("APROVADO");
	}
}
