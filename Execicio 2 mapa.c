#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int preenche(int matriz[4][6]);

float somaMedia(int matriz[4][6]);

int imprimir(int matriz[4][6]);


int main (){
	setlocale(LC_ALL, "");
	system("cls");
	int matriz[4][6];

	int opcao;
	do{
		system("cls");
		printf("\n\t*********\n");
		printf("\n\t1 - Informe quanto foi vendido na semana e dia:");
		printf("\n\t2 - Exibir as vendas da semana e dia:");
		printf("\n\t3 - Exibir a média total de todas as vendas:");
		printf("\n\t4 - Sair");
		printf("\n\tEscolha uma opção: ");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
				preenche(matriz);
				break;
			case 2:
				imprimir(matriz);

				system("pause");
			case 3:
				somaMedia(matriz);
				system("pause");
			default:
				printf("\n\nSAINDO");
		}
	}
	while(opcao!=4);
	system("pause");
	return 0;
}
int preenche(int matriz[4][6]){
    system("cls");
	int i, j;
	for(i=0; i<4; i++){
        for(j=0; j<6; j++){
			printf(" Quanto foi vendido  na semana :%d  dia: %d : ", i+1, j+1);
        scanf("%d", &matriz[i][j]);
		}
	}
}
int imprimir(int matriz[4][6]){
	system("cls");
    int i, j;
    for(i=0; i<4; i++){
       for(j=0; j<6; j++){
        printf("\t Semana-%d/ Dia-%d = %d", i+1,  j+1, matriz[i][j]);

		}
		printf("\n");
	}
}



float somaMedia(int matriz[4][6]){

	int i,j,k;

	k=0;

	float soma = 0;

	for(i=0; i<4; i++){

		for(j=0; j<6; j++){

			soma = soma + matriz[i][j];

			k++;

		}

	}
system("cls");
	float media = soma/k;
	printf("média das vendas é: %f\n ", media);


	return media;

}
