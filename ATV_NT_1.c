#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void inserir(void);
void mostrar(void);
void excluir(void);
int i;
struct registro
{
          char matricula[15];
          char nome[30];
          char disciplina[30];
          char nota[5];
};
          
          struct registro vetor[10];

int num;

int main(void)
{
              for(; ;)
              {
              printf("\t\t\t\tCADASTRO DE ALUNOS\n");
              printf("1-Para adicionar dados\n");
              printf("2-Para mostrar dados\n");
              printf("3-Para excluir dados\n");
              printf("0-  Sair\n");
              scanf("%d",&num);
              switch(num)
              {
              case 1: inserir();
              break;
              case 2: mostrar();
              break;
              case 3: excluir();
              break;
              case 0: exit(0);
              default: puts("TENTE NOVAMENTE");
              }                
               
}
getchar();           
}
                

void inserir (void)
{
                 for(i=0; i<10; i++)
                 {
                 fflush(stdin);
                 printf("\n\n\nEntre com a matricula do aluno: ");
                 gets(vetor[i].matricula);
                 fflush(stdin);
                 printf("Entre com o nome do aluno: ");
                 gets(vetor[i].nome);
                 fflush(stdin);
                 printf("Entre com a disciplina do aluno:");
                 gets(vetor[i].disciplina);
                 fflush(stdin);
                 printf("Entre com a nota do aluno:");
                 gets(vetor[i].nota);
                 fflush(stdin);
                 }
                 
getche();
}
void mostrar(void)
{
int i;
          for(i=0; i<10; i++)
          {
          printf("\n Matricula do aluno: %s",vetor[i].matricula);
          printf("\n Nome do aluno: %s",vetor[i].nome);
          printf("\n Disciplina do aluno: %s",vetor[i].disciplina);
          printf("\n Nota do aluno: %s",vetor[i].nota);
          }
}
void excluir(void)               
{ 
char nome[50];
               printf("Qual o nome do aluno que voce deseja remover?\n");
               gets(nome);
                   for(i=0; i<10; i++)
                   {
                     if ((strcmp(nome,vetor[i].nome))==0)
                        for( ; i<9; i++)
                        {
                        strcpy(vetor[i].matricula,vetor[i+1].matricula);                  
                        strcpy(vetor[i].nome,vetor[i+1].nome);
                        strcpy(vetor[i].disciplina,vetor[i+1].disciplina);
                        strcpy(vetor[i].nota,vetor[i+1].nota);
                        }
                   }            
getche();
}                 
