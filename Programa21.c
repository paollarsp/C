// Jogo 21 - quem alcançar primeiro 21 pontos, ou ficar mais próximo, ganha, se ultrapassar perde.
//Para construção desse programa foi utilizado apenas if/else e goto para fixação dos comandos

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
#include<windows.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int num_vc1, num_pc1, num_vc2, num_pc2, num_vc3, num_pc3, num_vc4, num_pc4, num_vc5, num_pc5, resultado_vc, resultado_pc;
	int sortear, jogar, rodada, enter;
    
    num_vc1 = 0;
    num_pc1 = 0;
    
    num_vc2 = 0;
    num_pc2 = 0;
    
    num_vc3 = 0;
    num_pc3 = 0;
    
    num_vc4 = 0;
    num_pc4 = 0;
    
    num_vc5 = 0;
    num_pc5 = 0;
    
    srand(time(NULL));
    
    inicio:
    system("cls");
    
    rodada = 1;
    
    printf("Programa 21\n");
    
    num_vc1 = (rand()%10) + 1;
    num_pc1 = (rand()%10) + 1;
    
    num_vc2 = (rand()%10) + 1;
    num_pc2 = (rand()%10) + 1;
    
    resultado_vc = num_vc1 + num_vc2;
    resultado_pc = num_pc1 + num_pc2;
    
    printf("VC = %d + %d = %d\n", num_vc1, num_vc2, resultado_vc);
    printf("PC = X + X = X\n");
    
    pergunta:
    printf("Você gostaria de sortear mais um número?\n");
    printf("Digite (1 - Sim / 2 - Não)\n");
    scanf("%d", &sortear);
    
    if (sortear == 1){
    
    	rodada = 2;
    
    	printf("Programa 21\n");
    	
    	num_vc3 = (rand()%10) + 1;
    	num_pc3 = (rand()%10) + 1;
    	
    	resultado_vc += num_vc3;
    	resultado_pc += num_pc3;
    	
    	if(resultado_vc>21 && resultado_pc>21){
            printf("VC e PC perderam!\nVC e PC maior que 21 pontos!\n");
            goto verificar_ganhador;
        }else if (resultado_pc>21){
	        printf("PC perdeu!\nPC maior que 21 pontos!\n");
	        goto verificar_ganhador;
       	}else if (resultado_vc>21){
	        printf("VC perdeu!\nVC maior que 21 pontos!\n");
	        goto verificar_ganhador;
	    }else if(resultado_vc == 21 || resultado_pc == 21){
	    	printf("VC e/ou PC atingiu 21 pontos!\n");
    		goto verificar_ganhador;
		}
    	
    	printf("VC = %d + %d + %d = %d\n", num_vc1, num_vc2, num_vc3, resultado_vc);
    	printf("PC = X + X + X = X\n");
    	
    	pergunta1:
    	printf("Você gostaria de sortear mais um número?\n");
    	printf("Digite (1 - Sim / 2 - Não)\n");
    	scanf("%d", &sortear);
    	
    	if(sortear == 1){
	    
	    	rodada = 3;
	    
	    	printf("Programa 21\n");
	    	
	    	num_vc4 = (rand()%10) + 1;
	    	num_pc4 = (rand()%10) + 1;
	    	
	    	resultado_vc += num_vc4;
	    	resultado_pc += num_pc4;
	    	
		    if(resultado_vc>21 && resultado_pc>21){
	            printf("VC e PC perderam!\nVC e PC maior que 21 pontos!\n");
	            goto verificar_ganhador;
	        }else if (resultado_pc>21){
		        printf("PC perdeu!\nPC maior que 21 pontos!\n");
		        goto verificar_ganhador;
	        }else if (resultado_vc>21){
		        printf("VC perdeu!\nVC maior que 21 pontos!\n");
		        goto verificar_ganhador;
	        }else if(resultado_vc == 21 || resultado_pc == 21){
	        	printf("VC e/ou PC atingiu 21 pontos!\n");
    			goto verificar_ganhador;
			}
	    	
	    	printf("VC = %d + %d + %d + %d= %d\n", num_vc1, num_vc2, num_vc3, num_vc4, resultado_vc);
	    	printf("PC = X + X + X + X = X\n");
	    	
	    	pergunta2:
	    	printf("Você gostaria de sortear mais um número?\n");
	    	printf("Digite (1 - Sim / 2 - Não)\n");
	    	scanf("%d", &sortear);
	    	
	    	if(sortear == 1){
		    
		    	rodada = 4;
		    
		    	printf("Programa 21\n");
		    	
		    	num_vc5 = (rand()%10) + 1;
		    	num_pc5 = (rand()%10) + 1;
		    	
		    	resultado_vc += num_vc5;
		    	resultado_pc += num_pc5;
		    	
			    if(resultado_vc>21 && resultado_pc>21){
		            printf("VC e PC perderam!\nVC e PC maior que 21 pontos!\n");
		            goto verificar_ganhador;
	        	}else if (resultado_pc>21){
		            printf("PC perdeu!\nPC maior que 21 pontos!\n");
		            goto verificar_ganhador;
	        	}else if (resultado_vc>21){
		            printf("VC perdeu!\nVC maior que 21 pontos!\n");
		            goto verificar_ganhador;
	        	}else if(resultado_vc == 21 || resultado_pc == 21){
	        		printf("VC e/ou PC atingiu 21 pontos!\n");
    				goto verificar_ganhador;
				}
		    	
		    	printf("VC = %d + %d + %d + %d + %d = %d\n", num_vc1, num_vc2, num_vc3, num_vc4, num_vc5, resultado_vc);
		    	printf("PC = X + X + X + X + X = X\n");
		    	
			}
		}
        
    }else if (sortear != 2 && rodada == 1){
        printf("Valor inválido!\n");
        goto pergunta;
    }else if (sortear != 2 && rodada == 2){
        printf("Valor inválido!\n");
        goto pergunta1;
    }else if (sortear != 2 && rodada == 3){
        printf("Valor inválido!\n");
        goto pergunta2;
    }
    
	verificar_ganhador:
	printf("\nVerifique as pontuações!!!\n");
    system("PAUSE");
    printf("\n");
    
	if(rodada == 1){
		printf("Programa 21\n");
    	printf("VC = %d + %d = %d\n", num_vc1, num_vc2, resultado_vc);
    	printf("PC = %d + %d = %d\n", num_pc1, num_pc2, resultado_pc);
	}else if(rodada ==2){
		printf("Programa 21\n");
    	printf("VC = %d + %d + %d = %d\n", num_vc1, num_vc2, num_vc3, resultado_vc);
    	printf("PC = %d + %d + %d = %d\n", num_pc1, num_pc2, num_pc3, resultado_pc);
	}else if (rodada == 3){
		printf("Programa 21\n");
    	printf("VC = %d + %d + %d + %d = %d\n", num_vc1, num_vc2, num_vc3, num_vc4, resultado_vc);
    	printf("PC = %d + %d + %d + %d = %d\n", num_pc1, num_pc2, num_pc3, num_pc4, resultado_pc);
	}else if(rodada == 4){
		printf("Programa 21\n");
    	printf("VC = %d + %d + %d + %d + %d = %d\n", num_vc1, num_vc2, num_vc3, num_vc4, num_vc5, resultado_vc);
    	printf("PC = %d + %d + %d + %d + %d = %d\n", num_pc1, num_pc2, num_pc3, num_pc4, num_pc5, resultado_pc);
	}
    
    if(resultado_vc == resultado_pc){
        printf("EMPATE!!!\n");
        if (resultado_vc == 21){
        	printf("\n Ambos pontuaram 21!");
		}
    }else if(resultado_pc == 21){
		printf("PC ganhou! PC possui a pontuação igual a 21\n");
	}else if(resultado_vc == 21){
		printf("VC ganhou! VC possui a pontuação igual a 21\n");
	}else if (resultado_vc > resultado_pc && resultado_vc < 21 && resultado_pc < 21){
        printf("VC ganhou!!!\n");
        printf("VC pontuou mais que PC\n");
    }else if (resultado_pc > resultado_vc && resultado_pc < 21 && resultado_vc < 21){
        printf("PC ganhou!!!\n");
        printf("PC pontuou mais que VC\n");
    }
    
    pergunta_jogar_novamente:
    printf("Deseja jogar novamente?\n");
    printf("Digite (1 - Sim / 2 - Não)\n");
    scanf("%d", &jogar);
        
    if (jogar == 1){
        goto inicio;
    }else if (jogar != 2){
        printf("Valor inválido!");
        goto pergunta_jogar_novamente;
    }else{
        printf("Obrigada por jogar!");
    }
}
