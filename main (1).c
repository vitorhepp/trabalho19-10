#include <stdio.h>
int main() {
  int jogad, comp, resp;
  do{
  printf("JOGO JOKENPO");
  printf("\n Escolha sua jogada:\n 1-Pedra \n 2-Papel \n 3-Tesoura \n 4-Lagarto \n 5-Spock \n");
  scanf(" %d", &jogad);
      while ((jogad!=1) && (jogad!=2) && (jogad!=3) && (jogad!=4) && (jogad!=5)){
      printf ("Número invalido, digite novamente \n");
        scanf("%d", &jogad);
      }
  switch(jogad){
		case 1:
			printf("Jogador escolheu PEDRA\n");
		break;
    
		case 2:
			printf("\n Jogador escolheu PAPEL\n");
		break;
		
		case 3:
			printf("\n Jogador escolheu TESOURA\n");
		break;
    
    case 4:
      printf ("\n Jogador escolheu LAGARTO\n ");
    break;
    
    case 5:
      printf ("\n Jogador escolheu SPOCK\n ");
    break;
	}
	srand(time(NULL));
	comp=("%d",rand()%5 + 1);
	switch(comp){
		case 1:
			printf("Computador escolheu PEDRA\n");
		break;
		
		case 2:
			printf("Computador escolheu PAPEL\n");
		break;
		
		case 3:
			printf("Computador escolheu TESOURA\n");
		break;		
    
    case 4:
      printf ("\n Computador escolheu LAGARTO\n ");
    break;
    
    case 5:
      printf ("\n Computador escolheu SPOCK\n ");
    break;
	}
	if(jogad==comp)
	{
		printf("EMPATE\n");
	}
	else if ((jogad==1 && comp==3) ||(jogad==1 && comp==4) || (jogad==4 && comp==5) || (jogad==2 && comp==1) ||(jogad==5 && comp==3) ||(jogad==3 && comp==4) || (jogad==4 && comp==2) || (jogad==2 && comp==5) ||(jogad==5 && comp==1) || (jogad==3 && comp==2))
	{
		printf("JOGADOR VENCEU\n");
	}
	else
	{
		printf("COMPUTADOR VENCEU\n");
	}
    printf("\n Deseja jogar novamente?\n 1-Sim \n 2-Não \n");
    scanf("%d", &resp);
        while ((resp!=1) && (resp!=2)){
    printf ("Opção invalida, digite novamente \n");
      scanf("%d", &resp);
        }
    }while(resp==1);
}
