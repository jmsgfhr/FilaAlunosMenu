#include "fila.h"

typedef struct node {
    Aluno a;
    struct node *prox;
}Node;

Node *primeiro,*atual,*ultimo;

int init(){
    primeiro=NULL;
    atual=NULL;
    ultimo=NULL;
}

int finish(){
    while (TRUE){
        if(primeiro==NULL)
            return 0;
        Node *aux;
        aux=primeiro;
        primeiro = primeiro->prox;
        free(aux);
    }
    return 0;
}

int entra(Aluno a){
    Node *n;
    n = (Node *) malloc(sizeof(Node));
    if (n == NULL) return FALSE; // acabou a memoria
    n->a = a;
    n->prox = NULL;
    if (primeiro!=NULL && primeiro->prox==NULL)
        primeiro->prox=n;
    if (primeiro==NULL)
        primeiro=n;
    if (ultimo!=NULL && ultimo->prox==NULL)
        ultimo->prox=n;
    ultimo=n;
    atual=primeiro;
    return TRUE;
}

int sai(Aluno *pa){
    if (atual == NULL)
        return TRUE;
    *pa = atual->a;
    atual = atual->prox;
    return FALSE;
}

int cheia(){
    return FALSE;
}

int vazia(){
    if (atual==NULL)
        return TRUE;
    else
        return FALSE;
}
