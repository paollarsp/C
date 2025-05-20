/*

PROJETO : Cadastradora de Livros

OBJETIVO: Escrever um algoritmo que cadastre livros de uma estante

*/

#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

#include <unistd.h> //essa biblioteca é para programa linux (sleep)

#define MAX 100

struct livro {

int id;

char titulo[100];

char autor[100];

int ano;

int paginas;

char genero[50];

};

void imprime_menu() {

printf("Escolha uma opção:\n");

printf("1 - Cadastrar Livro\n");

printf("2 - Listar Livros\n");

printf("3 - Buscar Livro\n");

printf("4 - Excluir Livro\n");

printf("5 - Sair\n");

}

int main() {

setlocale(LC_ALL,"");

int menu, opcao, quant_livros, i,a,b, encontrado, confirmacao;

char nomedolivro[100];

struct livro livros[MAX];

menu=1;

quant_livros = 0;

while(menu==1)

{

imprime_menu();

scanf("%d", &opcao);

while(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5 && opcao !=

6)

{

imprime_menu();

printf("Opção Inválida, digite novamente!");

scanf("%d", &opcao);

}

switch(opcao)

{

case 1:

if(quant_livros < MAX) {

printf("Cadastro de Livro #%d\n", quant_livros + 1);

printf("Identificador:");

scanf("%d", &livros[quant_livros].id);

printf("Titulo:");

getchar();

scanf("%[^\n]",&livros[quant_livros].titulo);

printf("Autor:");

getchar();

scanf("%[^\n]",&livros[quant_livros].autor);

printf("Ano:");

scanf("%d", &livros[quant_livros].ano);

printf("Páginas:");

scanf("%d", &livros[quant_livros].paginas);

printf("Gênero:");

getchar();

scanf("%[^\n]",&livros[quant_livros].genero);

printf("Livro cadastrado com sucesso!\n");

(quant_livros)++;

sleep(2);

system("clear");

} else {

printf("Máximo de livros armazenados!\n");

sleep(2);

system("clear");

}

  break;

case 2:

if (quant_livros == 0) {

printf("Nenhum livro cadastrado.\n");

sleep(2);

} else{

for(i=0; i<quant_livros; i++){

printf("\nLivro %d:\n", i + 1);

printf("Identificador: %d\n", livros[i].id);

printf("Título: %s\n", livros[i].titulo);

printf("Autor: %s\n", livros[i].autor);

printf("Ano: %d\n", livros[i].ano);

printf("Páginas: %d\n", livros[i].paginas);

printf("Gênero: %s\n\n", livros[i].genero);

}

}

break;

case 3:

if(quant_livros>0){

printf("Insira o nome do livro\n");

getchar();

scanf("%[^\n]", &nomedolivro);

for(a=0; a<quant_livros; a++){

if(strcmp(nomedolivro,livros[a].titulo) == 0) //verifica se existe um livro com o mesmo

nome cadastrado

{

printf("Livro %d:\n", a + 1);

printf("Identificador: %d\n", livros[a].id);

printf("Título: %s\n", livros[a].titulo);

printf("Autor: %s\n", livros[a].autor);

printf("Ano: %d\n", livros[a].ano);

printf("Páginas: %d\n", livros[a].paginas);

printf("Gênero: %s\n", livros[a].genero);

}

}

} else{

printf("Não há livros cadastrados\n");

sleep(2);

system("clear");

}

break;


case 4:

if(quant_livros>0){

printf("Insira o número do livro");

scanf("%d",&encontrado);

encontrado =- 1;

printf("Livro encontrado: %s (ID: %d)\n", livros[encontrado].titulo, livros[encontrado].id);

printf("Tem certeza de que deseja excluir este livro? (1 - Sim, 0 - Não): ");

scanf("%d", &confirmacao);

while(confirmacao != 1 && confirmacao !=0){

printf("Número inválido! Insira novamente:\n");

scanf("%d", &confirmacao);

}

if (confirmacao == 1) {

for (int b = encontrado; b < quant_livros - 1; b++) { //Deslocar os livros para cobrir o

espaço do livro excluído

livros[b] = livros[i + 1];

}

(quant_livros)--;

printf("Livro excluído com sucesso.\n");

sleep(2);

system("clear");

} else {

printf("Exclusão cancelada.\n");

sleep(2);

system("clear");

}

}else{

printf("Não há livros cadastrados\n");

sleep(2);

system("clear");

}

break;

case 5:

printf("Saindo do programa...");

sleep(2);

system("clear");

return 0;

break;

}
}
}
