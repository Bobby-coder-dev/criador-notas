#include <stdio.h>
#include <notas.h>
#include <string.h>

void adicionarNota(char *nome){
    char txt[] = ".txt";
    char nomeArquivo[100];

    snprintf(nomeArquivo, sizeof(nomeArquivo), "%s%s", nome, txt);


    FILE *arquivo;

    arquivo = fopen(nomeArquivo, "w+");

    if (arquivo == NULL){
        printf("Não foi possível criar o arquivo"); 
    }

    char texto[200];

    printf("Digite o conteúdo da nota:\n");
    
    fgets(texto, sizeof(texto), stdin);

    texto[strcspn(texto, "\n")] = '\0';

    if(fputs(texto, arquivo)){
        printf("Nota criada!, nome: %s.txt", nome);
    } else {
        printf("Não foi possível criar a nota");
    }

    return;
}
