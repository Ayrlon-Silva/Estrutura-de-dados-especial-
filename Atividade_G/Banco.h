#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <wchar.h>

typedef struct {
    char Logradouro[120];
    int CEP;
} Endereco;

typedef struct {
    char Nome[120];
    char CPF[14];
    int idade;
    float Renda;
    Endereco Endereco_Titular;

} Titular;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    Data data_atual;
    int tipo;
    float Valor;
    Titular Destino;

} Transacao;

typedef struct{
    char numero[7];
    float saldo;
    Titular Titular_Conta;
    Transacao Historico_Transacoes[50];
    int qtdTransacoes;

}Conta;

typedef struct {
    char Nome[50];
    Conta Contas;
    Endereco Endereco_Banco;

} Banco;

void PrintMenu();

Conta abrir_conta();

void Acessar_conta(Conta *Contas, int qtdContas);

void Depositar_valor(Conta *Contas, int index);

void Sacar_valor(Conta *Conta);

void Consultar_saldo(Conta *Conta);

char* consultar_chavePIX(Conta Conta);

void Realizar_PIX(Conta *Contas, int index, int qtdContas);

void Consultar_Extrato(Conta *Contas, int index, int qtdContas);

int length(char* string);

int comparar_strings(char* str1, char* str2, int tam);

void enterTocontinue();

float get_positive_float(char* label);