#include <stdio.h>
#include <notas.h>
#include <string.h>

int main(void){
	int opcao;

	while(1){
		printf("1 - Adicionar nota\n2 - Listar notas\n3 - Sair\n>");
		scanf("%d", &opcao);
		getchar();
		switch(opcao){
			case 1:
				printf("Digite o nome que dará a nota:\n>");
				char nomeNota[20];
				fgets(nomeNota, sizeof(nomeNota), stdin);
				nomeNota[strcspn(nomeNota,"\n")] = '\0';
				adicionarNota(nomeNota);
				break;				
			case 2:
				listaNotas();
			    break;
			case 3:
				return 0;
			       	break;

			default: 
				printf("Opção Inválida\1n");
		}
	}
}
