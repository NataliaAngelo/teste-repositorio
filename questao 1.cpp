#include<stdio.h>

int main(){
	//declaraçaõ de variáveis
	int numero, total;//numero= numero que o usuario vai digitar, total= total da soma de todos os números inseridos pelo usuario
	char  opcao;//opcao= s ou n, opção que o usuario tem de digitar mais um numero ou nao 
	
	do{
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	printf("Quer fornecer outro numero? ");
	scanf(" %c", &opcao);
	total += numero;
	}
	
	while(opcao == 's');
		printf("A soma dos numeros e %d", total);
	
	system("pause");
}
