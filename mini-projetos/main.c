#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char* item;
    float preco;
} Struct;


void imprimirStruct(Struct* matriz, int tam){
	int i;
    for ( i = 0; i < tam; i++) {
        printf("[%i] %s -----------R$ %.2f\n",i, matriz[i].item, matriz[i].preco);
    }
    printf("\n");
}

// Função para ler strings e  limpar o buffer de entrada
void lerString(char *str, size_t tamanho) {
    fflush(stdin); // Limpar o buffer de entrada

    fgets(str, tamanho, stdin); // Ler a string

    // Remover o caractere de nova linha (\n) do final da string, se presente
    size_t tamanhoStr = strlen(str);
    if (tamanhoStr > 0 && str[tamanhoStr - 1] == '\n') {
        str[tamanhoStr - 1] = '\0';
    }
}



void liberaMemoria(Struct* matriz, int tam){
    // Libera a memória alocada
    int i;
    for ( i = 0; i < tam; i++) {
    free(matriz[i].item);
}
free(matriz);
}

int main() {

    char opcao, opcaoPouB;
    int qAdcItem, i, indicePizza = 8, indiceBebidas = 4;
    float precoItem;
    char continua = 's';

    // SEÇÃO DE PIZZAS
    Struct* pizzas = (Struct*) malloc(8 * sizeof(Struct)); // Aloca espaço para 8 pizzas

    

    
    pizzas[0].item = strdup("Pizza de Calabresa");
    pizzas[0].preco = 35.0;
    pizzas[1].item = strdup("Pizza Marguerita");
    pizzas[1].preco = 30.0;
    pizzas[2].item = strdup("Pizza Portuguesa");
    pizzas[2].preco = 35.0;
    pizzas[3].item = strdup("Pizza De Frango Com Catupiry");
    pizzas[3].preco = 38.0;
    pizzas[4].item = strdup("Pizza Mussarela");
    pizzas[4].preco = 25.0;
    pizzas[5].item = strdup("Pizza Napolitana");
    pizzas[5].preco = 40.0;
    pizzas[6].item = strdup("Pizza Quatro Queijos");
    pizzas[6].preco = 37.0;
    pizzas[7].item = strdup("Pizza De Brigadeiro");
    pizzas[7].preco = 28.0;

    

    // SEÇÃO DE BEBIDAS
    Struct* bebidas = (Struct*) malloc(5 * sizeof(Struct));

    
    bebidas[0].item = strdup("Coca Cola");
    bebidas[0].preco = 9.0;
    bebidas[1].item = strdup("Guarana");
    bebidas[1].preco = 9.0;
    bebidas[2].item = strdup("Guarana Jesus");
    bebidas[2].preco = 9.0;
    bebidas[3].item = strdup("Fanta Laranja");
    bebidas[3].preco = 9.0;
    bebidas[4].item = strdup("Agua");
    bebidas[4].preco = 2.50;

    

	do{

	printf("============== PIZZAS ==============\n");	
	// Imprime as pizzas
    imprimirStruct(pizzas, indicePizza);
    printf("============= BEBIDAS =============\n");
    // Imprime Bebidas
    imprimirStruct(bebidas, indiceBebidas);
    
    
    // SEÇÃO DE GERENCIAMENTO DO CARDÁPIO
    printf("---------- GERENCIAMENTO DO CARDAPIO ----------\n");
    printf("Adicionar itens: 'A' \tEditar itens: 'E' \tRemover itens: 'R'\n");

    printf("O que voce deseja: ");
    scanf("%c", &opcao);
    opcao = toupper(opcao);


    fflush(stdin);// Limpa o buffer de memória

    // ESCOLHER ENTRE ADICIONAR, EDITAR OU REMOVER
    char nomeItem[50], opcaoNouP;
    switch (opcao){
        // Falta verificar a biblioteca de maisculas e minusculas
        case 'A':
            printf("\nAdicionar Pizzas: 'P' \tAdicionar Bebidas: 'B' ");

            printf("\nO que voce deseja: ");
            scanf("%c", &opcaoPouB);
            opcaoPouB = toupper(opcaoPouB);

            fflush(stdin);

            // ESCOLHER ENTRE ADICIONAR ITENS EM PIZZAS OU EM BEBIDAS
            switch (opcaoPouB){
                case 'P'://PIZZAS

                    printf("\nQuantos itens voce quer adicionar? ");
                    scanf("%d", &qAdcItem);

                     for(i = 0; i < qAdcItem; i++) {

                        printf("\nDigite o nome do item: ");
                        //Procedimento para ler string
                        lerString(nomeItem, sizeof(nomeItem));

                        printf("Digite o preco do item: ");
                        scanf("%f", &precoItem);
                        // Redimensiona a struct
                        pizzas = (Struct*) realloc(pizzas, (indicePizza + 1) * sizeof(Struct));

                        pizzas[indicePizza].item = strdup(nomeItem);
                        pizzas[indicePizza].preco = precoItem;
                        indicePizza++;
                     }

                     printf("\n");
                     imprimirStruct(pizzas, indicePizza);
                break; //Pizza break

                case 'B'://BEBIDAS

                    printf("Quantos itens voce quer adicionar? ");
                    scanf("%d", &qAdcItem);

                     for(i = 0; i < qAdcItem; i++) {
                        printf("\nDigite o nome do item: ");
                        //Procedimento para ler string
                        lerString(nomeItem, sizeof(nomeItem));

                        printf("Digite o preco do item: ");
                        scanf("%f", &precoItem);

                        // Redimensiona a struct
                        bebidas = (Struct*) realloc(bebidas, (indiceBebidas + 1) * sizeof(Struct));

                        bebidas[indiceBebidas].item = strdup(nomeItem);
                        bebidas[indiceBebidas].preco = precoItem;
                        indiceBebidas++;
                     }

                     printf("\n");
                     imprimirStruct(bebidas, indiceBebidas);
                break; // Bebidas break
            break; // Pizza ou Bebidas break
    
      
            }
            
        break; // Adicionar break    
        case 'E':
            printf("\nEditar Pizzas: 'P' \tEditar Bebidas: 'B' \n");

            printf("O que voce deseja: ");
            scanf("%c", &opcaoPouB);
            opcaoPouB = toupper(opcaoPouB);

            fflush(stdin);

                switch (opcaoPouB){
                    case 'P':
                        printf("\nDigite o nome do item a ser editado: ");
                        lerString(nomeItem, sizeof(nomeItem));
                        printf("\n");

                        printf("Modificar nome do item: 'N'\tModificar preco do item: 'P'");
                        printf("\nO que voce deseja: ");
                        scanf("%c", &opcaoNouP);
                        
                        opcaoNouP = toupper(opcaoNouP);

                        fflush(stdin);

                       switch(opcaoNouP){
                            case 'N':
                                for(i=0; i <= indicePizza; i++){
                                    if(strcasecmp(pizzas[i].item, nomeItem) == 0){
                                       // free(pizzas[i].item);
                                        printf("\nDigite o novo nome para o item %s:", nomeItem);
                                        lerString(nomeItem, sizeof(nomeItem));

                                        pizzas[i].item = strdup(nomeItem);
                                        imprimirStruct(pizzas, indicePizza);
                                    }
                                    else{
                                        //Vazio
                                    }
                                }
                                break; // Nome Pizza Break
                            case 'P':
                                 for(i=0; i <= indicePizza; i++){
                                    if(strcmp(pizzas[i].item, nomeItem) == 0){
                                        printf("\nDigite o novo preco para o item %s: ", nomeItem);
                                        scanf("%f", &precoItem);

                                        pizzas[i].preco = precoItem;
                                        imprimirStruct(pizzas, indicePizza);
                                    }
                                    else{
                                        //Vazio
                                    }
                                }
                                break; //Preco Pizza Break
                        break; // Opcao Nome ou Preco Break
                        }
                    break; //Editar Pizza Break

                    case 'B':
                    	break; //Editar Bebida Break
                } return 0;
		  	 break; ///Editar Break
			}
			
          /*  	
            break; //Editar Pizza ou Bebida
            break; // Seção Editar Break
           */ 
    	printf("Tecle 's' se deseja retornar\n");
    	scanf(" %c",&continua);
    	continua = toupper(continua);
    	fflush(stdin);
  	
	} while (continua == 's' || continua == 'S');
	
	liberaMemoria(pizzas, indicePizza);
    liberaMemoria(bebidas, indiceBebidas);

    

    return 0;


}