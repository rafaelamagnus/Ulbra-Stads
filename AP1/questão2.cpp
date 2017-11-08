#include<conio.h>
#include<stdio.h>

main(){
    float cgu, g1,g2,media=0,mediaturma,somamedia=0,somasubstituicao=0,soma=0;
    int contador=0;
	do{
		printf("digite o CGU");
	scanf("%d",&cgu);
    if(cgu!=0){
	printf("\n digite a nota do G1");
	scanf("%f",&g1);
	printf(" \n digite a nota do G2");
	scanf("%f",&g2);
	printf("\n %f",g1);
	printf(" \n %f",g2);
	media=(g1+g2*2)/3;
	soma=soma+media;
	contador++;
	if(media>=7){
		printf(" \n aprovado \n");
		printf("%f",media);
		somamedia++;
	}
	if(media<7){
		printf(" \n substituicao \n");
		printf("%f",media);
		somasubstituicao++;
	}
}
	}while(cgu!=0);
	printf(" \n foram lidos %i \n" ,contador);
	printf("\n %f",soma);
	mediaturma=soma/contador;
	printf("\n a media das notas da turma e %f",mediaturma);
}


	
	
