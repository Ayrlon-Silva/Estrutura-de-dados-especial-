#include <stdio.h>
#include <stdlib.h>

    struct aluno{
        int Matricula;
        char nome[120];
        int idade;
        float renda;
    };

void prencherDados(struct aluno *novoAluno);
void listarAlunos(struct aluno *alunos, int qtdAlunos);
void editarAluno(struct aluno *alunos, int qtdAlunos);
void removerAluno(struct aluno *alunos, int qtdAlunos);
void buscar_por_matricula(struct aluno *alunos, int alunosCadastrados);
void buscar_por_nome(struct aluno *alunos, int alunosCadastrados);
void enterTocontinue();

int main(){
    system("cls");
    char menu[] = "------ Menu ------ \n 1 - Novo aluno. \n 2 - Listar alunos. \n 3 - Editar aluno.  \n 4 - Remover aluno. \n 5 - Buscar aluno por matricula. \n 6 - Buscar aluno por parte do nome \n\n 0 - Sair. \n >> ";

    struct aluno *alunos;
    alunos = (struct aluno *) malloc(100 * sizeof(struct aluno));

    int alunosCadastrados = 0;
    
    int opcao;
    printf(">>> Alunos Cadrastados : %d <<< \n", alunosCadastrados);
    printf("%s", menu);
    scanf("%d", &opcao);

    while (opcao != 0){
        if(opcao == 1){
            struct aluno novoAluno;
            prencherDados(&novoAluno);
            alunos[alunosCadastrados] = novoAluno;
            alunosCadastrados++;
        }
        else if(opcao == 2){
            listarAlunos(alunos, alunosCadastrados);
        }
        else if(opcao == 3){
            editarAluno(alunos, alunosCadastrados);
        }
        else if(opcao == 4){
            removerAluno(alunos, alunosCadastrados);
            alunosCadastrados--;
        }
        else if(opcao == 5){
            buscar_por_matricula(alunos, alunosCadastrados);
        }
        else if(opcao == 6){
            buscar_por_nome(alunos, alunosCadastrados);
        }

        printf("\n>>> Alunos Cadrastados : %d <<< \n", alunosCadastrados);
        printf("\n%s", menu);
        scanf("%d", &opcao);
    }
    
    return 0;
}

void prencherDados(struct aluno *novoAluno){
    system("cls");
    printf("\n ====>>> NOVO ALUNO <<<==== \n");
    printf("\n> Nome : ");
    scanf(" %120[^\n]", novoAluno->nome);
    
    printf("> Matricula : ");
    scanf("%d", &novoAluno->Matricula);

    printf("> Idade : ");
    scanf("%d", &novoAluno->idade);

    printf("> Renda : ");
    scanf("%f", &novoAluno->renda);

    printf("\n=>> Aluno cadastrado com sucesso !!");
    enterTocontinue();
}

void listarAlunos(struct aluno *alunos, int alunosCadastrados){
    system("cls");
    printf("===================================\n");
    printf("---------> LISTAR ALUNOS <---------\n");

    for(int i = 0; i < alunosCadastrados; i++){
        printf("> %s | COD : %d | Idade: %d | Renda: %.2f R$\n", alunos[i].nome, alunos[i].Matricula, alunos[i].idade, alunos[i].renda);
        printf("-----------------------------------------------------\n");
    }

    enterTocontinue();
}

void editarAluno(struct aluno *alunos, int alunosCadastrados){
    system("cls");
    printf("\n ====>>> EDITAR ALUNO <<<==== \n");
    int cod;
    printf("> Digite a matricula do aluno que deseja editar :");
    scanf("%d", &cod);

    for(int i = 0; i < alunosCadastrados; i++){
        if(alunos[i].Matricula == cod){
            printf("\n> Nome : ");
            scanf(" %120[^\n]", alunos[i].nome);
    
            printf("> Matricula : ");
            scanf("%d", &alunos[i].Matricula);

            printf("> Idade : ");
            scanf("%d", &alunos[i].idade);

            printf("> Renda : ");
            scanf("%f", &alunos[i].renda);

            printf("\n=>> Aluno Editado com sucesso !!");
            enterTocontinue();
        }
    }
}

void removerAluno(struct aluno *alunos, int alunosCadastrados){
    system("cls");
    printf("\n ====>>> REMOVER ALUNO <<<==== \n");

    int cod;
    printf("> Digite a matricula do aluno que deseja remover :");
    scanf("%d", &cod);

    for(int i=0; i < alunosCadastrados;i++){
        if(alunos[i].Matricula == cod){
            for(int j = i; j < alunosCadastrados -1; j++){
                alunos[i] = alunos[i + 1];
            }
        }
    }

    
    printf("\n>>> Aluno Removido <<<\n");
    enterTocontinue();
    
}

void buscar_por_matricula(struct aluno *alunos, int alunosCadastrados){
    system("cls");
    printf("\n ====>>> BUSCAR POR MATRICULA <<<==== \n");
    int cod;
    printf("> Digite a matricula do aluno :");
    scanf("%d", &cod);

    for(int i = 0; i < alunosCadastrados; i++){
        if(alunos[i].Matricula == cod){
            printf("\n> [ Aluno Encontrado ] < \n");
            printf("> %s | COD : %d | Idade: %d | Renda: %.2f R$\n", alunos[i].nome, alunos[i].Matricula, alunos[i].idade, alunos[i].renda);
        }
    }
    enterTocontinue();
}

void buscar_por_nome(struct aluno *alunos, int alunosCadastrados){
    system("cls");
    printf("\n ====>>> BUSCAR POR NOME <<<==== \n");
    char nome[120];

    printf("\n> Digite o nome ou parte dele do aluno : ");
    scanf(" %120[^\n]", nome);

    int tamNome = 0;
    while (nome[tamNome] != '\0'){
        tamNome++;
    }

    for(int i = 0; i < alunosCadastrados; i++){
        int diferentes = 0;
        for(int j = 0; j < tamNome; j++){
            if(nome[j] != alunos[i].nome[j]){
                diferentes++;
            }
        }
        if(diferentes == 0){
        printf("\n>=== [ Aluno Encontrado ] ===< \n");
        printf("\n> %s | COD : %d | Idade: %d | Renda: %.2f R$\n", alunos[i].nome, alunos[i].Matricula, alunos[i].idade, alunos[i].renda);
        }
    }
    enterTocontinue();
}

void enterTocontinue(){
    char enter [2];
    fflush(stdin);
    printf("\nPress Enter to continue ...");
    scanf("%[^\n]", enter);
    system("cls");
}