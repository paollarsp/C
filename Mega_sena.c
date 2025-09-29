// Crie um programa ( MEGA SENA ) em linguagem C que sorteie 6 números com os critérios que:
// - Os números não podem ser iguais entre eles
// - Nenhum dos números podem ser 0
// - Os números a serem sorteados são de 1 a 60 
// - Utilize If apenas

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

main(){
	
	setlocale(LC_ALL,"");
	
	int num1, num2, num3, num4, num5, num6;
	
	srand(time(NULL));
	
	printf("MEGA SENA\n");
	
	num1 = (rand()%60) + 1;
	
	gerar_num_aleatorio2:
	num2 = (rand()%60) + 1;
	
	if (num1 == num2){
		goto gerar_num_aleatorio2;
	}
	
	gerar_num_aleatorio3:
	num3 = (rand()%60) + 1;
	
	if (num1 == num3 || num2 == num3){
		goto gerar_num_aleatorio3;
	}
	
	gerar_num_aleatorio4:
	num4 = (rand()%60) + 1;
	
	if (num1 == num4 || num2 == num4 || num3 == num4){
		goto gerar_num_aleatorio4;
	}
	
	gerar_num_aleatorio5:
	num5 = (rand()%60) + 1;
	
	if (num1 == num5 || num2 == num5 || num3 == num5 || num4 == num5){
		goto gerar_num_aleatorio5;
	}
	
	gerar_num_aleatorio6:
	num6 = (rand()%60) + 1;
	
	if (num1 == num6 || num2 == num6 || num3 == num6 || num4 == num6 || num5 == num6){
		goto gerar_num_aleatorio6;
	}
	
	printf("Números sorteados: %d  %d  %d  %d  %d  %d", num1, num2, num3, num4, num5, num6);
}
