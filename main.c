#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char produtos[10][50];
char clientes[10][50];
char vendas[10][50];

int cliente_cout = 0;
int produto_cout = 0;
int vendas_cout = 0;

void insere_cliente (){
    char nome[50];
        printf("Digite o eu nome\n");
        scanf("%s", nome);
        strcpy(clientes[cliente_cout], nome);
        cliente_cout++;
        printf("Clinte %s cadastrado com sucesso\n", clientes[cliente_coute]);
}
void insere_produtos(){
    char pdts[50];
        printf("Digite o nome do produto deseado\n");
        scanf("%s", pdts);
        strcpy(produtos[produto_cout], pdts);
        produto_cout++;
        printf("Produto %s cadastrado com sucesso\n", pdts[produto_cout]);
}
void insere_vendas(){
    char vnd[50];
        printf("Digite a venda feita\n");
        scanf("%s", vnd);
        strcpy(vendas[vendas_cout], vnd);
        vendas_cout++;
        printf("Venda: %s cadatrada com sucesso\n", vnd);
}
void listar_clientes(){
    for(int i = 0; i < 10; i++){
        if(strlen(clientes[i]) > 0 ){
         printf("%s\n", clientes[i]);
        }
    }
}
void listar_vendas(){
   for(int i = 0; i < 10; i++){
        if(strlen(vendas[i]) > 0 ){
         printf("%s\n", vendas[i]);
        }
   }
}
void listar_produtos(){
    for(int i = 0; i < 10; i++){
        if(strlen(produtos[i]) > 0){
         printf("%s\n", produtos[i]);
        }
    }
}
void sair(){
    char sair[50];
        printf("Sair   jwebfyurebf\n");
        scanf("%s", sair);
        printf("Você saiu seu lixo %s\n", sair);
}
void excluir_clietes(){
    char exclts[50];
        printf("Excluir cliente\n");
        scanf("%s", exclts);
        printf("Você escolhiu um cliente %s\n", exclts);
}
int main(){
    int opcao;
    int nome;
    int pdts;
    int pdts_cds;
    int vnd;
    int vnd_cds;

        while (1){
            printf(
            "Escolha uma das opcoes:\n"
            "0 - Sair\n"
            "1 - Nome do cliente\n"
            "2 - Clientes cadatrados\n"
            "3 - Nome do produto\n"
            "4 - Produtos cadatrados\n"
            "5 - inerir vendas\n"
            "6 - Vendas cadatradas\n"
            "7 - Remover Cliente cadatrado\n ");



        scanf("%d", &opcao);
        printf("Você escolheu a opcao: %d\n", opcao);
           if (opcao == 0){
            sair();
        }
        else if (opcao == 1){
            insere_cliente();
        }
        else if (opcao == 2){
            listar_clientes();
        }
        else if (opcao == 3){
            insere_produtos();
        }
        else if (opcao == 4){
            listar_produtos();
        }
        else if (opcao == 5){
            insere_vendas();
        }
        else if (opcao == 6){
            listar_vendas();
        }
        else if (opcao == 7){
            excluir_clietes();

        }
    }
    return 0;
}