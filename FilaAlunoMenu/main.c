#include "fila.h"

int Menu();
void Coloca();
void Tira();
Aluno a;

int main(){
    init();
    Menu();
}

int Menu()
{
    int resp;
    while(TRUE)
    {
        printf("\n---------------------------------------\n1-Colocar Aluno\n2-Retirar Aluno\n3-Terminar\n---------------------------------------\nDigite:");
        scanf("%i",resp);
        switch(resp)
        {
        case(1):
            Coloca();
            Menu();
        case(2):
            Tira();
            Menu();
        case(3):
            printf("\nLiberar alunos\n");
            finish();
        return 0;
        }
    }
}

void Coloca()
{
    printf("nome? ");
    scanf("%s", a.nome);
    printf("nota? ");
    scanf("%f", &a.nota);
    entra(a);
}

void Tira()
{
    printf("\n fila de alunos\n");
    while(vazia()==FALSE){
        sai(&a);
        printf("%s %f\n", a.nome, a.nota);
    }
}
