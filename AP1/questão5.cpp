#include<conio.h>
#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int i, idade, inf, mir,adult;
	inf=0;
	mir=0;
	adult=0;
	
	for(i=1;i<=10;i++){
		printf("\nInforme a idade do %iº atleta: ",i);
		scanf("%i",&idade);
		
		if(idade>=5 && idade<12){
			inf++;
		}
		if(idade>=12 && idade<18){
			mir++;
		}
		if(idade>18){
			adult++;
		}
	}
	printf("Infantil: %i atletas \nMirim: %i atletas \nAdulto: %i atletas",inf,mir,adult);
}

