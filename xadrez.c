#include <stdio.h>
int main () {

    //variaveis:
    int torre, opcao, direita, esquerda, cima, baixo, direcao, diagonaldc, diagonalec, diagonaldb, diagonaleb;
    int bispo = 1;
    int rainha = 1;

    //interagindo com o menu:
    printf("Bem vindo ao jogo\n\n");
    printf("1-Iniciar\n2-Regras\n3-Sair\n");
    printf("Selecione a opção desejada:");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            //codigo para torre:
            printf("Pra qual direção voçê deseja que a torre se mova?\n");
            printf("1-Direita\n2-Esquerda\n3-Cima\n4-baixo\n");
            printf("Selecione a opção desejada:");
            scanf("%d", &direcao);
            //codigo para a torre:
            if(direcao == 1)
            {
                printf("Quantas casas voce quer que a torre se mova para direita(max 7 casas)?\n");
                scanf("%d", &direita);
                
                for (torre = 1; torre <= direita; torre ++)
                {
                    printf("Torre se movendo: %d casa para direita\n", torre);
                }
                
            } else if (direcao == 2)
            {
                printf("Quantas casas voce quer que a torre se mova para esquerda(max 7 casas)?\n");
                scanf("%d", &esquerda);

                for (torre = 1; torre <= esquerda; torre ++)
                {
                    printf("Torre se movendo: %d casa para esquerda\n", torre);
                }

            } else if (direcao == 3)
            {
                printf("Quantas casas voce quer que a torre se mova para cima(max 7 casas)?\n");
                scanf("%d", &cima);

                for (torre = 1; torre <= cima; torre ++)
                {
                    printf("Torre se movendo: %d casa para cima\n", torre);
                }
                
            } else if (direcao == 4)
            {
                printf("Quantas casas voce quer que a torre se mova para baixo(max 7 casas)?\n");
                scanf("%d", &baixo);

                for (torre = 1; torre <= baixo; torre ++)
                {
                    printf("Torre se movendo: %d casa para baixo\n", torre);
                }

            } else
            {
                printf("Opção errada, tente novamente!");
            }

            //codigo para o bispo:
            printf("\nPra qual direção voçê deseja que o bispo se mova?\n");
            printf("1-Diagonal direita avançando\n2-Diagonal esquerda avançando\n3-diagonal direita recuando\n4-diagonal esquerda recuando\n");
            printf("Selecione a opção desejada:");
            scanf("%d", &direcao);
            //codigo para o bispo:
            if(direcao == 1)
            {
                printf("Quantas casas voce quer que o bispo se mova para diagonal direita avançando(max 7 casas)?\n");
                scanf("%d", &diagonaldc);
            
                while (bispo <= diagonaldc)
                {
                    printf("bispo se movendo: %d casa para cima\n", bispo);
                    printf("bispo se movendo: %d casa para direita\n", bispo);
                    bispo ++;
                }
                              
            } else if (direcao == 2)
            {
                printf("Quantas casas voce quer que o bispo se mova para diagonal esquerda avançando(max 7 casas)?\n");
                scanf("%d", &diagonalec);

                while (bispo <= diagonalec)
                {
                    printf("bispo se movendo: %d casa para cima\n", bispo);
                    printf("bispo se movendo: %d casa para esquerda\n", bispo);
                    bispo ++;
                }

            } else if (direcao == 3)
            {
                printf("Quantas casas voce quer que o bispo se mova para diagonal direita recuando(max 7 casas)?\n");
                scanf("%d", &diagonaldb);

                while (bispo <= diagonaldb)
                {
                    printf("bispo se movendo: %d casa para baixo\n", bispo);
                    printf("bispo se movendo: %d casa para direita\n", bispo);
                    bispo ++;
                }
                
            } else if (direcao == 4)
            {
                printf("Quantas casas voce quer que o bispo se mova para diagonal esquerda recuando(max 7 casas)?\n");
                scanf("%d", &diagonaleb);

                while (bispo <= diagonaleb)
                {
                    printf("bispo se movendo: %d casa para baixo\n", bispo);
                    printf("bispo se movendo: %d casa para esquerda\n", bispo);
                    bispo ++;
                }

            } else
            {
                printf("Opção errada, tente novamente!");
            }
            
            //codigo para o bispo:
            printf("\nPra qual direção voçê deseja que a rainha se mova?\n");
            printf("1-Direita\n2-Esquerda\n3-Cima\n4-baixo\n");
            printf("5-Diagonal direita avançando\n6-Diagonal esquerda avançando\n7-diagonal direita recuando\n8-diagonal esquerda recuando\n");
            printf("Selecione a opção desejada:");
            scanf("%d", &direcao);
            //codigo para o bispo:
            if(direcao == 1)
            {
                printf("Quantas casas voce quer que a rainha se mova para direita(max 7 casas)?\n");
                scanf("%d", &direita);

                do {
                printf("Rainha se movendo: %d casa para direita\n", rainha);
                rainha++;
                } while (rainha <= direita);
                
            } else if (direcao == 2)
            {
                printf("Quantas casas voce quer que a rainha se mova para esquerda(max 7 casas)?\n");
                scanf("%d", &esquerda);

                do {
                printf("Rainha se movendo: %d casa para esquerda\n", rainha);
                rainha++;
                } while (rainha <= esquerda);

            } else if (direcao == 3)
            {
                printf("Quantas casas voce quer que a rainha se mova para cima(max 7 casas)?\n");
                scanf("%d", &cima);

                do {
                printf("Rainha se movendo: %d casa para cima\n", rainha);
                rainha++;
                } while (rainha <= cima);
                              
            } else if (direcao == 4)
            {
                printf("Quantas casas voce quer que a rainha se mova para baixo(max 7 casas)?\n");
                scanf("%d", &baixo);

                do {
                printf("Rainha se movendo: %d casa para baixo\n", rainha);
                rainha++;
                } while (rainha <= baixo);

            }

            if(direcao == 5)
            {
                printf("Quantas casas voce quer que a rainha se mova para diagonal direita avançando(max 7 casas)?\n");
                scanf("%d", &diagonaldc);

                do {
                printf("rainha se movendo: %d casa para cima\n", rainha);
                printf("Rainha se movendo: %d casa para direita\n", rainha);
                rainha++;
                } while (rainha <= diagonaldc);
                
            } else if (direcao == 6)
            {
                printf("Quantas casas voce quer que a rainha se mova para diagonal esquerda avançando(max 7 casas)?\n");
                scanf("%d", &diagonalec);

                do {
                printf("rainha se movendo: %d casa para cima\n", rainha);
                printf("Rainha se movendo: %d casa para esquerda\n", rainha);
                rainha++;
                } while (rainha <= diagonalec);
            
            } else if (direcao == 7)
            {
                printf("Quantas casas voce quer que a rainha se mova para diagonal direita recuando(max 7 casas)?\n");
                scanf("%d", &diagonaldb);

                do {
                printf("rainha se movendo: %d casa para baixo\n", rainha);
                printf("Rainha se movendo: %d casa para direita\n", rainha);
                rainha++;
                } while (rainha <= diagonaldb);
                
            } else if (direcao == 8)
            {
                printf("Quantas casas voce quer que a rainha se mova para diagonal esquerda recuando(max 7 casas)?\n");
                scanf("%d", &diagonaleb);

                do {
                printf("rainha se movendo: %d casa para baixo\n", rainha);
                printf("Rainha se movendo: %d casa para esquerda\n", rainha);
                rainha++;
                } while (rainha <= diagonaleb);

            } else
            {
                printf("Opção errada, tente novamente!");
            }

        break;

        case 2:
            printf("Regras\n");
            printf("selecione a opção da direção e logo em seguida\nselecione quantas casas a peça ira se mover!");
        break;

        case 3:
            printf("Você saiu do jogo!");
        break;
    
        default:
            printf("Opção errada, tente novamente!");
        break;
    }

    return 0;
}