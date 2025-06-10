#include <stdio.h>

    void torre(int i){
        for (i = 1; i <= 5; i ++)
        {
        printf("Torre se movendo para direita\n");
        }
    }
    void bispo(int i){
        while (i <= 4)
        {
            int j;
            while (j <= i){
                printf("bispo se movendo para cima\n");
                j ++;
            }
        
        printf("bispo se movendo para direita\n");
        i ++;
        }
    }
    void cavalo(int i){
        for (int i = 1; i < 2; i++)
            {
                int j;
                for (int j = 0; j < 2; j++)
                {
                    printf("cima \n");
                }
                printf("Direita \n");
            }
        }
    void rainha(int i){
        do{
            printf("Rainha se movendo para direita\n");
            i ++;
        }while(i <= 7);

    }
    int main() {
    //variaveis:
    int opcao, i, j;

    //menu:
    printf("Selecione qual peça deseja mover:\n");
    printf("1-Torre\n2-Bispo\n3-Cavalo\n4-Rainha\n");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
    //movimento torre:
    torre(i);
    break;
    //movimento bispo:
    case 2:
    bispo(i);
    break;
    case 3:
    cavalo(i);
    break;
    case 4:
    rainha(i);
    break;
    default:
    printf("Opção invalida!");
    break;
    }

    return 0;

}