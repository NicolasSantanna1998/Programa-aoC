//SISTEMA DE BIBLIOTECA 









#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// contantes globais
#define MAX_LIVROS 50
#define TAM_STRING 100

//definiçao de estrtura(struct)
struct Livro {
    char nome [TAM_STRING];
    char autor [TAM_STRING];
    char editora [TAM_STRING];
    int edicao;
};

//funçao para limpar o buffer de entrada
void limparbufferEntrada() {
    int c;
    while ((c = getchar())!= '\n' && c != EOF);
}

// funçao principal (main)
int main(){
    struct Livro biblioteca[MAX_LIVROS];
    int totallivros = 0;
    int opcao;

    // laço principal do menu
    do {

        //exibe o menu de opçoes.
        printf("========================\n");
        printf("    BIBLIOTECA - PARTE 1\n");
        printf("========================\n");
        printf("1 - Cadastrar novo livro\n");
        printf("2 - listar todos os livros\n");
        printf("0 - Sair\n");
        printf("-----------------------------\n");
        printf("Escolha uma opcao: ");

        // Lê a opçao do usuario
        scanf("%d", &opcao);
        limparbufferEntrada(); // limpa o '\n' deixado pelo scanf.

        //--- processamento da Opçao---
        switch (opcao){
        case 1: //Cadastro livro
            printf("--- Cadastro de Novo livro:\n\n");

            if (totallivros < MAX_LIVROS) {
                printf("Digite o nome do livro: ");
                fgets(biblioteca[totallivros].nome, TAM_STRING, stdin);

                printf("Digite o auotr:");
                fgets(biblioteca[totallivros].autor, TAM_STRING, stdin);

                printf("Digite a editora: ");
                fgets(biblioteca[totallivros].editora, TAM_STRING, stdin);

                biblioteca[totallivros].nome[strcspn(biblioteca[totallivros].nome, "\n")] = '\0';
                biblioteca[totallivros].nome[strcspn(biblioteca[totallivros].autor, "\n")] = '\1';
                biblioteca[totallivros].nome[strcspn(biblioteca[totallivros].editora, "\n")] ='\2';

                printf("Digite a ediçao:");
                scanf("%d", &biblioteca[totallivros].edicao);
                limparbufferEntrada();

                totallivros++;


                printf("\nLivro cadastrado com sucesso!\n");
            }else{
                printf("Biblioteca cheia! nao possivel cadastrar mais livros.\n");
            }

            printf("\nPressione enter para continuar...");
            getchar();// Pausa para o usuario ler a mensagem antes de voltar ao menu.
            break;

            case 2: //Listagem de livros
                printf("---Lista de livros cadastrados--- \n\n");

                if (totallivros == 0){
                    printf("---Nenhum livro cadastrado ainda---\n\n");
                }else {
                    for (int i = 0; i < totallivros; i++){
                      printf("------------------");
                      printf("LIVRO %d\n", i + 1);
                      printf("nome: %s\n", biblioteca[i].nome);
                      printf("Autor: %s\n", biblioteca[i].autor);
                      printf("Editora: %s\n",biblioteca[i].editora);
                      printf("Ediçao: %d\n",biblioteca[i].edicao);
                    }
                    printf("--------------------------------------\n");
                }

                //a pausa é crucial para que o usuario veja a lista antes
                //do proximo loop limpar a tela.
                printf("\npressione Enter para continuar...");
                getchar();
                break;

                case 0: //sair
                    printf("\nSaindo do sistema...\n");
                    break;

                default: //Opçao invalida
                   printf("\nOpçao inavalida! tente novamente.\n");
                   printf("\nPressione enter para continuar...\n");
                   getchar();
                   break;
        } 

    } while (opcao !=0);

    return 0; //fim do programa.
}
