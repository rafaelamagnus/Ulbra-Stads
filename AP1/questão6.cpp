#include<stdio.h>
#include<conio.h>

main(){
	int salario,aumento,novosal,cargo;
	printf("digite o cargo do funcionaro(1,2,3,4, ou 5)");
	scanf("%i",&cargo);
	printf(" \n digite o valor do salario \n ");
	scanf("%i",&salario);
	if(cargo=1){
		printf(" \n o cargo e escriturado \n");
		aumento=salario*50/100;
		printf(" \n o valor do aumento e %i \n",aumento);
		novosal=salario+aumento;
		printf(" \n o novo salario e %i \n",novosal);
	}
	else if(cargo=2){
		printf(" \n o cargo é secretário \n");
		aumento=salario*35/100;
		printf("o valor do aumento e %i",aumento);
		novosal=salario+aumento;
		printf(" \n o novo salario e %i \n ",novosal);
	}
	else if(cargo=3){
		printf(" \n o cargo é caixa \n");
		aumento=salario*20/100;
		printf(" \n o valor do aumento e %i \n ",aumento);
		novosal=salario+aumento;
		printf(" \n o novo salario é %i \n",novosal);
	}
	else if(cargo=4){
		printf(" \n o cargo é gerente \n");
		aumento=salario*10/100;
		printf(" \n o valor do aumento é %i \n ",aumento);
		novosal=salario+aumento;
		printf("o novo salario e %i",novosal);
	}
	else if(cargo=5){
		printf(" \n o cargo é secretário \n");
		aumento=salario*0/100;
		printf(" \n o valor do aumento e %i \n ",aumento);
		novosal=salario+aumento;
		printf(" \n o novo salario e %i \n ",novosal);
	}
	else{
		printf(" \n cargo inexistente \n ");
	}
}
