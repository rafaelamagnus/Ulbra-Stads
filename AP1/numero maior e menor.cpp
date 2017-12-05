#include<conio.h>
#include<stdio.h>

main(){
	int numero,contador=0,contadorpar=0,maior=0,menor=0;
	do{
		printf("Digite um numero");
		scanf("%i",&numero);
		contador++;
		if(numero%2==0){
			contadorpar++;
		}
		if(maior==0 && menor==0){
			maior=numero;
			menor=numero;
		}
		if(numero > maior){
			maior=numero;
		}
        if(numero < menor){
        	menor=numero;
		}
	}while(contador<5);
	printf("\n O maior numero e %i \n",maior);
	printf("\n O menor numero e %i \n",menor);
	printf("\n Os numeros pares lidos foram %i \n",contadorpar);
}
	
	

