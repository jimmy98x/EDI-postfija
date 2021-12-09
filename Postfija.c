#include <stdio.h>
#include <string.h>
#define TAM_PILA 10

typedef struct
{
    char oper[PILA_TAM];
    int tope;

}Pila;


void IPila(Pila *p);
int Apila(Pila *p, char oper);
int Desapila(Pila *p);
void Operacion(char op[20]);
void Postfija(Pila *p, char oper[20], int *i);

int main()
{
    Pila pila;
    int i = 0;
    char operacion[20];

    Operacion(oper);
    Postfija(&pila,oper,&i);
}


void Operacion(char op[20])
{

    printf("Operacion:\n");
    scanf("%s",&op[]);
    op[strlen(op)+1]=' ';
}

void inicializaPila(Pila *p)
{
    p->tope = -1;
}

int apila(Pila *p, char operador)
{
    int Apila = 0;

    if(p->tope < PILA_TAM - 1)
    {
        p->tope++;
        p->oper[p->tope] = oper;

        Apila = 1;
    }
    return Apila;
}

int Desapila(Pila *p)
{
    int Desapilar = 0;

    if(p->tope > -1)
    {
        if (p->oper[p->tope]!='(')
        printf("%s",p->oper[p->tope]);
        p->tope--;
        Desapilar = 1;
    }
    return Desapilar;
}

void Postfija(Pila *p, char oper[20], int *i)
{

    if((oper[i]>=65 && oper[i]<=90) || (oper[i]>=97 && oper[i]<=122))
    {
        printf("%c",oper[i]);
        (i)++;
        Postfija(*p,oper,*i);
    }
    else
        if(oper[i]==' ')
    {
        Apila(*p,oper[*i]);
        (i)++;
        ostfija(*p,oper,*i);
    }
    else
        if(oper[i]=='*' || oper[i]=='/')
    {
        if (p->operadores[p->tope]=='*' || p->operadores[p->tope]=='/')
        {
            desapila(p);
            transformaPostfija(p,operacion,i);
        }
        apila(p,operacion[*i]);
        (*i)++;
        transformaPostfija(p,operacion,i);
    }
    else if (operacion[*i]=='+' || operacion[*i]=='-')
    {
        if(p->oper[p->tope]=='*' || p->oper[p->tope]=='/')
        {
            Desapila(p);
            Postfija(p,operacion,i);
        }
        else
            if(p->oper[p->tope]=='+' || p->operp->tope]=='-')
        {
            Desapila(p);
            Postfija(p,operacion,i);
        }
        Apila(p,oper[i]);
        (i)++;
        Postfija(p,oper,i);
    }
    else
        if(operacion[i]==')')
    {
        do
        {
            Desapila(p);
        }while (p->oper[p->tope]!='(');
        (i)++;
        Postfija(p,oper,i);
    }
    else
        if(oper[i]==' ')
    {
        while(p->tope>0)
            Desapila(p);
    }
}
