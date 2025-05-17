
/*
OBJETIVO: Escrever um algoritmo que simule o jogo da velha
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprime_menu(){
//menu do jogo
system("clear");
printf("JOGO DA VELHA\n");
printf("1 - JOGAR\n");
printf("2 - SAIR\n");
}

void imprime_tabuleiro(char casas2[3][3], char jogador2){
//tabuleiro do jogo
system("clear");
printf(" 0 1 2\n");
printf("0 %c | %c | %c\n", casas2[0][0], casas2[0][1], casas2[0][2]);
printf(" ----------------------\n");
printf("1 %c | %c | %c\n", casas2[1][0], casas2[1][1], casas2[1][2]);
printf(" ----------------------\n");
printf("2 %c | %c | %c\n", casas2[2][0], casas2[2][1], casas2[2][2]);
printf("JOGADOR %c\n", jogador2);
}
int main() {
 setlocale(LC_ALL,"");
    
    int menu, l, c, jogadas, ganhou;
    char casas[3][3], jogador;
    
    //imprimir o menu do jogo
    imprime_menu();
    scanf("%d",&menu);
    
    //caso número escolhido não faça parte do menu
    while(menu != 1 && menu != 2)
    {
    imprime_menu();
    printf("Opcão Inválida, insira novamente um valor!\n");
    scanf("%d", &menu);
    }
    
    //jogo
    while(menu == 1)
    {
    
    jogadas = 1;
    ganhou = 0;
    
    //para deixar todas as partes da matriz vazias
    for(l=0; l<3; l++){
        for(c=0; c<3; c++){
            casas[l][c] = ' ';
    }
    }
    
    //determinar quantas partidas tem o jogo todo
    while(jogadas<=9)
    {
    //determinar quando os jogadores jogam
        if(jogadas%2 == 0)
        {
            jogador = 'X'; 
        } else{
            jogador = 'O';
        }    
        
    imprime_tabuleiro(casas, jogador);
    
    //escolhendo a casa
    printf("Escolha qual linha (0-2) deseja selecionar:");
    scanf("%d",&l);
    printf("Escolha qual coluna (0-2) deseja selecionar:");
    scanf("%d",&c);
    
    // caso a pessoa escolha outra opção de linha
    while (l>2 || l<0)
    { 
    printf("Valor da linha inválido! Coloque novamente.\n");
    printf("Escolha qual linha (0-2) deseja selecionar:");
    scanf("%d",&l);
    }
    
    // caso a pessoa escolha outra opção de coluna
    while (c<0 || c>2)
    { 
    printf("Valor da coluna inválido! Coloque novamente.\n");
    printf("Escolha qual coluna (0-2) deseja selecionar:");
    scanf("%d",&c);
    }
    
    //caso a pessoa escolha uma casa que já foi selecionada
    while(casas[l][c] == 'X' || casas[l][c] == 'O')
    {
    printf("Casa já selecionada, escolha novamente! \n");
    printf("Escolha qual linha (0-2) deseja selecionar:");
    scanf("%d",&l);
    printf("Escolha qual coluna (0-2) deseja selecionar:");
    scanf("%d",&c);
    }
    
    casas[l][c] = jogador;
    
    imprime_tabuleiro(casas, jogador);
    
    //quando ganha na 1ª linha com X
    if(casas[0][0] == 'X' && casas[0][1] == 'X' && casas[0][2] == 'X')
    {
    printf("O jogador %c ganhou!\n", jogador);
    jogadas =10;
    ganhou=1;
    }
    //quando ganha na 2ª linha com X
    if(casas[1][0] == 'X' && casas[1][1] == 'X' && casas[1][2] == 'X')
    {
    printf("O jogador %c ganhou!\n", jogador);
    jogadas =10;
    ganhou=1;
    }
    //quando ganha na 3ª linha com X
    if(casas[2][0] == 'X' && casas[2][1] == 'X' && casas[2][2] == 'X')
    {
    printf("O jogador %c ganhou!\n", jogador);
    jogadas =10;
    ganhou=1;
    }
    
    //quando ganha na 1ª linha com O
    if(casas[0][0] == 'O' && casas[0][1] == 'O' && casas[0][2] == 'O')
    {
    printf("O jogador %c ganhou!\n", jogador);
    jogadas =10;
    ganhou=1;
    }
    //quando ganha na 2ª linha com O
    if(casas[1][0] == 'O' && casas[1][1] == 'O' && casas[1][2] == 'O')
    {
    printf("O jogador %c ganhou!\n", jogador);
    jogadas =10;
    ganhou=1;
    }
    //quando ganha na 3ª linha com O
    if(casas[2][0] == 'O' && casas[2][1] == 'O' && casas[2][2] == 'O')
    {
    printf("O jogador %c ganhou!\n", jogador);
    jogadas =10;
    ganhou=1;
    }
    
    //quando ganha na 1ª coluna com X
    if(casas[0][0] == 'X' && casas[1][0] == 'X' && casas[2][0] == 'X')
    {
    printf("O jogador %c ganhou!\n", jogador);
    jogadas =10;
    ganhou=1;
    }
    //quando ganha na 2ª coluna com X
    if(casas[0][1] == 'X' && casas[1][1] == 'X' && casas[2][1] == 'X')
    {
    printf("O jogador %c ganhou!\n", jogador);
    jogadas =10;
    ganhou=1;
    }
    //quando ganha na 3ª coluna com X
    if(casas[0][2] == 'X' && casas[1][2] == 'X' && casas[2][2] == 'X')
    {
    printf("O jogador %c ganhou!\n", jogador);
    jogadas =10;
    ganhou=1;
    }
    
    
    //quando ganha na 1ª coluna com O
    if(casas[0][0] == 'O' && casas[1][0] == 'O' && casas[2][0] == 'O')
    {
    printf("O jogador %c ganhou!\n", jogador);
    jogadas =10;
    ganhou=1;
    }
    //quando ganha na 2ª coluna com O
    if(casas[0][1] == 'O' && casas[1][1] == 'O' && casas[2][1] == 'O')
    {
    printf("O jogador %c ganhou!\n", jogador);
    jogadas =10;
    ganhou=1;
    }
    //quando ganha na 3ª coluna com O
    if(casas[0][2] == 'O' && casas[1][2] == 'O' && casas[2][2] == 'O')
    {
    printf("O jogador %c ganhou!\n", jogador);
    jogadas =10;
    ganhou=1;
    }
    
    //ganhar nas diagonais com O
    if(casas[0][0] == 'O' && casas[1][1] == 'O' && casas[2][2] == 'O')
    {
    printf("O jogador %c ganhou!\n", jogador);
    jogadas =10;
    ganhou=1;
    }
    if(casas[0][2] == 'O' && casas[1][1] == 'O' && casas[2][0] == 'O')
    {
    printf("O jogador %c ganhou!\n", jogador);
    jogadas =10;
    ganhou=1;
    }
    
    //ganhar nas diagonais com X
    if(casas[0][0] == 'X' && casas[1][1] == 'X' && casas[2][2] == 'X')
    {
    printf("O jogador %c ganhou!\n", jogador);
    jogadas =10;
    ganhou=1;
    }
    if(casas[0][2] == 'X' && casas[1][1] == 'X' && casas[2][0] == 'X')
    {
    printf("O jogador %c ganhou!\n", jogador);
    jogadas =10;
    ganhou=1;
    }
    
    jogadas++;
    
    }
    
    // caso dê "Velha"
    if(jogadas==10 && ganhou!=1){
    printf("VELHA! Ninguém venceu.\n");
    }
    //para jogar novamente 
    printf("Quer jogar novamente?\n");
    printf("1 - Sim\n");
    printf("2 - Não\n");
    scanf("%d",&menu);
    
    }
    //sair do jogo
    while(menu == 2)
    {
    return 0;
    }
}
