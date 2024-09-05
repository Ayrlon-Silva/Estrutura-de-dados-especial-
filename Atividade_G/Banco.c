#include <stdio.h>
#include <stdlib.h>
#include "Banco.h"
#include <time.h>
#include <wchar.h>

int length(char* string){
    int tam = 0;
    while (string[tam] != '\0'){
        tam++;
    }
    return tam + 1;
}

float get_positive_float(char* label){
    float num;
    printf("%s", label);
    scanf("%f", &num);
    while(num <= 0){
        printf("\nErro! Por favor digite um valor positivo.\n");
        printf("%s", label);
        scanf("%f", &num);
    }
    return num;
}

int comparar_strings(char* str1, char* str2, int tam){
    int diferentes = 0;
    for(int i = 0; i < tam; i++){
        if(str1[i] != str2[i]){
            diferentes++;
        }
    }
    if(diferentes > 0){ //sao diferentes
        return 1;
    }
    else{
        return 0; //sao iguais
    }
}

void enterTocontinue(){
    char enter [2];
    fflush(stdin);
    printf("\nPress Enter to continue ... ");
    scanf("%[^\n]", enter);
    system("cls");
}

void PrintMenu(){
    char menu[] = "\n========== Banco R1 ========== \n\n(1) - Abrir Conta. \n(2) Acessar Conta. \n\n(0) - Sair. \n\n>> ";
    printf("%s", menu);
}

Conta abrir_conta(){
    Conta NovaConta;

    printf("\n===== [ NOVA CONTA ] ===== ");
    printf("\n\n> Numero da Conta (xxx-x): ");
    scanf(" %120[^\n]", NovaConta.numero);

    printf("\n> Nome do Titular: ");
    scanf(" %120[^\n]", NovaConta.Titular_Conta.Nome);
    printf("\n> CPF (xxxxxxxxx-xx): ");
    scanf(" %120[^\n]", NovaConta.Titular_Conta.CPF);
    printf("\n> Idade: ");
    scanf("%d", &NovaConta.Titular_Conta.idade);
    printf("\n> Renda: ");
    scanf("%f", &NovaConta.Titular_Conta.Renda);
    printf("\n\n=== Endereço do Titular ===");
    printf("\n> Logradouro: ");
    scanf(" %120[^\n]", NovaConta.Titular_Conta.Endereco_Titular.Logradouro);
    printf("\n> CEP: ");
    scanf("%d", &NovaConta.Titular_Conta.Endereco_Titular.CEP);
    NovaConta.qtdTransacoes = 0;

    printf("\n\n> Saldo Inicial: ");
    scanf("%f", &NovaConta.saldo);

    enterTocontinue();

    return NovaConta;
}

void Acessar_conta(Conta * Contas, int qtdContas){
    //PEDINDO ACESSO
    char ContaAlvo[6];
    printf("\n============== ACESSAR CONTA =================\n");
    printf("\nDigite o numero da Conta que Deseja Acessar : ");
    scanf(" %120[^\n]", ContaAlvo);
    
    int indexConta;
    int acesso = 1;
    while(acesso != 0){

    for(int i = 0; i < qtdContas; i++){
        if(comparar_strings(Contas[i].numero, ContaAlvo, 6) == 0){
            enterTocontinue();
            printf("\n\n[--------- Conta : %s ---------]", Contas[i].numero);
            printf("\n> Titular : %s ", Contas[i].Titular_Conta.Nome);
            printf("\n> Saldo : %.2f R$.", Contas[i].saldo);
            printf("\n[--------------------------------]");
            indexConta = i;
            acesso = 0;
        }
    }
    if(acesso == 0) break;
    printf("\nERROR !! nenhuma conta com esse numero foi encontrada.\n");
    printf("\n============== ACESSAR CONTA =================\n");
    printf("\nDigite o numero da Conta que Deseja Acessar : ");
    scanf(" %120[^\n]", ContaAlvo);
    }

    //OPCOES DA CONTA

    char menu_conta[] = "\n\n 1 - Consultar Chave pix. \n 2 - Depositar Valor. \n 3 - Sacar Valor. \n 4 - Realizar PIX. \n 5 - Extrato Bancario. \n\n 0 - Sair. \n\n >> ";

    int opcao;
    printf("%s", menu_conta);
    scanf("%d", &opcao);

    while(opcao != 0){
        if(opcao == 1){
            char* ChavePIX = consultar_chavePIX(Contas[indexConta]);

            printf("\n> Chave PIX : %s <\n", ChavePIX);
            enterTocontinue();
        }
        else if(opcao == 2){
            Depositar_valor(Contas, indexConta);
            enterTocontinue();
        }
        else if(opcao == 3){
            Sacar_valor(&Contas[indexConta]);
            enterTocontinue();
        }
        else if(opcao == 4){
            Realizar_PIX(Contas, indexConta, qtdContas);
        }
        else if(opcao == 5){
            Consultar_Extrato(Contas, indexConta, qtdContas);
        }
        else{
            printf("-> Opção invalida !!");
        }

        printf("\n\n[--------- Conta : %s ---------] \n> Titular : %s \n> Saldo : %.2f R$. \n[--------------------------------]", Contas[indexConta].numero, Contas[indexConta].Titular_Conta.Nome, Contas[indexConta].saldo);
        printf("%s", menu_conta);
        scanf("%d", &opcao);
    }


}

//FUNCOES

void Depositar_valor(Conta *Contas, int index){
    time_t agora;
    time(&agora);
    struct tm *info_tempo;
    info_tempo = localtime(&agora);

    float quantia_deposito;
    printf("\n===[ DEPOSITO ]===");
    quantia_deposito = get_positive_float("\n> Quantia do depósito : ");
    //printf("\n> Quantia do depósito : ");
    //scanf("%f", &quantia_deposito); 
    int i_transacao = Contas[index].qtdTransacoes;

    Contas[index].saldo += quantia_deposito;
    printf("\n\n- Deposito realizado no valor de : %.2f R$ ", quantia_deposito);

    Contas[index].Historico_Transacoes[i_transacao].Valor = quantia_deposito;
    Contas[index].Historico_Transacoes[i_transacao].Destino = Contas[index].Titular_Conta;
    Contas[index].Historico_Transacoes[i_transacao].data_atual.dia = info_tempo->tm_mday;
    Contas[index].Historico_Transacoes[i_transacao].data_atual.mes = info_tempo->tm_mon + 1;
    Contas[index].Historico_Transacoes[i_transacao].data_atual.ano = info_tempo->tm_year + 1900;
    Contas[index].Historico_Transacoes[i_transacao].tipo = 1; //1 - Credito, 2 - debito.

    Contas[index].qtdTransacoes++;
}

void Sacar_valor(Conta *Conta){
    time_t agora;
    time(&agora);
    struct tm *info_tempo;
    info_tempo = localtime(&agora);

    float quantia_saque;
    printf("\n===[ SAQUE ]===");
    quantia_saque = get_positive_float("\n> Quantia do saque : ");
    //printf("\n> Quantia do saque : ");
    //scanf("%f", &quantia_saque);

    int i_transacao = Conta->qtdTransacoes;

    if(Conta->saldo - quantia_saque < 0){
        printf("\nERROR ! Saldo insuficiente para um saque desse valor.");
    }
    else{
        Conta->saldo -= quantia_saque;
        printf("\n\n- Deposito realizado no valor de : %.2f R$ ", quantia_saque);

        Conta->Historico_Transacoes[i_transacao].Valor = quantia_saque;
        Conta->Historico_Transacoes[i_transacao].Destino = Conta->Titular_Conta;
        Conta->Historico_Transacoes[i_transacao].data_atual.dia = info_tempo->tm_mday;
        Conta->Historico_Transacoes[i_transacao].data_atual.mes = info_tempo->tm_mon + 1;
        Conta->Historico_Transacoes[i_transacao].data_atual.ano = info_tempo->tm_year + 1900;
        Conta->Historico_Transacoes[i_transacao].tipo = 2; //1 - Credito, 2 - debito.

        Conta->qtdTransacoes++;
    }
}

void Consultar_saldo(Conta *Conta){
    float saldoAtual = Conta->saldo;
    printf("\n> SALDO : %.2f R$",saldoAtual);
}

char* consultar_chavePIX(Conta Conta){
    char* chave = Conta.Titular_Conta.CPF;

    return chave;
}

void Realizar_PIX(Conta *Contas, int index_ContaOrigem, int qtdContas){
    time_t agora;
    time(&agora);
    struct tm *info_tempo;
    info_tempo = localtime(&agora);

    char chave[13];
    printf("\n===== [ PIX ] =====\n");
    printf("\n> Chave pix do Destinario: ");
    scanf(" %120[^\n]", chave);

    int achou = 1; //não encontrada

    for(int i = 0;i < qtdContas; i++){
        if(comparar_strings(Contas[i].Titular_Conta.CPF, chave, 13) == 0){ //Procura uma chave igual a fornecida
        achou = 0; //encontrada
            if(comparar_strings(Contas[index_ContaOrigem].Titular_Conta.CPF, chave, 13) == 0){ // verifica se a chave destino não é igual a chave de origem.
                printf("\n ERROR !! Não é possivel realizar um pix para sua própia chave.");
                break;
            }
                float valor = get_positive_float("\n Valor : ");
                //printf("\n Valor : ");
                //scanf("%f", &valor);

                if(Contas[index_ContaOrigem].saldo - valor < 0){ // veririfica se o saldo da conta de origem é suficiente. 
                    printf("\n ERROR !! Saldo insuficiente. ");
                    break;
                }
                // Comfirmacao PIX
                    int confirmacao;
                    printf("\n\n========================");
                    printf("\n Transferindo : %.2f R$", valor);
                    printf("\n Para : %s ", Contas[i].Titular_Conta.Nome);
                    printf("\n Chave PIX : %s ", Contas[i].Titular_Conta.CPF);
                    printf("\n Data : %02d/%02d/%04d ", info_tempo->tm_mday, info_tempo->tm_mon + 1, info_tempo->tm_year + 1900);
                    printf("\n=========================");

                    printf("\n\n Digite 1 para confirmar ...");
                    scanf("%d", &confirmacao);

                    int i_transacao_origem = Contas[index_ContaOrigem].qtdTransacoes;
                    int i_transacao_destino = Contas[i].qtdTransacoes;

                    if(confirmacao == 1){
                        Contas[index_ContaOrigem].saldo -= valor; // retira da conta de origem e registra a transação

                        Contas[index_ContaOrigem].Historico_Transacoes[i_transacao_origem].Valor = valor;
                        Contas[index_ContaOrigem].Historico_Transacoes[i_transacao_origem].Destino = Contas[i].Titular_Conta;
                        Contas[index_ContaOrigem].Historico_Transacoes[i_transacao_origem].data_atual.dia = info_tempo->tm_mday;
                        Contas[index_ContaOrigem].Historico_Transacoes[i_transacao_origem].data_atual.mes = info_tempo->tm_mon + 1;
                        Contas[index_ContaOrigem].Historico_Transacoes[i_transacao_origem].data_atual.ano = info_tempo->tm_year + 1900;
                        Contas[index_ContaOrigem].Historico_Transacoes[i_transacao_origem].tipo = 2; //1 - Credito, 2 - debito.

                        Contas[index_ContaOrigem].qtdTransacoes++;

                        Contas[i].saldo += valor; // deposita na conta de destino e registra a transação

                        Contas[i].Historico_Transacoes[i_transacao_destino].Valor = valor;
                        Contas[i].Historico_Transacoes[i_transacao_destino].Destino = Contas[index_ContaOrigem].Titular_Conta;
                        Contas[i].Historico_Transacoes[i_transacao_destino].data_atual.dia = info_tempo->tm_mday;
                        Contas[i].Historico_Transacoes[i_transacao_destino].data_atual.mes = info_tempo->tm_mon + 1;
                        Contas[i].Historico_Transacoes[i_transacao_destino].data_atual.ano = info_tempo->tm_year + 1900;
                        Contas[i].Historico_Transacoes[i_transacao_destino].tipo = 1; //1 - Credito, 2 - debito.

                        Contas[i].qtdTransacoes++;

                        printf("\n > Transferencia PIX realizada com sucesso.");
                    }
                    else{
                        printf("\n > Transferencia PIX não realizada. ");
                        break;
                    }
        }
    }

    if(achou == 1){
        printf("\n ERROR !! Chave PIX invalida ou não encontrada. ");
    }
}

void Consultar_Extrato(Conta * Contas, int indexConta, int qtdContas){
    enterTocontinue();
    int transacoes = Contas[indexConta].qtdTransacoes;

    printf("\n[============ EXTRATO =============]\n");
    
    for(int i = 0; i < transacoes; i++){
        printf("\n- Data : %02d/%02d/%04d ", Contas[indexConta].Historico_Transacoes[i].data_atual.dia, Contas[indexConta].Historico_Transacoes[i].data_atual.mes, Contas[indexConta].Historico_Transacoes[i].data_atual.ano);
        if(Contas[indexConta].Historico_Transacoes[i].tipo == 1){
           printf("\n- Tipo : Crédito "); 
        }else{
        printf("\n- Tipo : Débito ");
        }
        if(comparar_strings(Contas[indexConta].Historico_Transacoes[i].Destino.Nome, Contas[indexConta].Titular_Conta.Nome, length(Contas[indexConta].Historico_Transacoes[i].Destino.Nome)) == 0){
            printf("\n");
        }
        else{
            printf("\n- Para : %s ", Contas[indexConta].Historico_Transacoes[i].Destino.Nome);
        }
        printf("\n- Valor : %.2f R$ ", Contas[indexConta].Historico_Transacoes[i].Valor);
        printf("\n--------------------------------------");
    }
    printf("\n========================================\n");

    enterTocontinue();
}


