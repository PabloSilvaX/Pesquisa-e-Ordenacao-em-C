#include<stdio.h>
#include<stdlib.h>
struct aluno{
  double ra;
  char nome[20];
  struct aluno *anterior;
};
struct aluno *atual = NULL;

void cadastrar(){
     printf("#### Cadastro ####\n\n");
     struct aluno *anterior = atual;
     atual = (struct aluno *) malloc(sizeof(struct aluno));
     atual->anterior = anterior; 
     printf("Digite o RA..: ");
     scanf("%lf",&atual->ra); 
     printf("Digite o NOME: ");
     fflush(stdin);
     gets(atual->nome); 
     printf("\nDados cadastrador com sucesso!");
}

void consultar(){
     printf("#### Consulta ####\n\n");
     printf("Digite o RA..: ");
     double ra;
     scanf("%lf",&ra);
     struct aluno *atual_aux = atual;
     while(atual_aux!=NULL){
        if (atual_aux->ra==ra){
          printf("\nRA   = %.0lf",atual_aux->ra);                    
          printf("\nNOME = %s",atual_aux->nome);
          break;
        }
        atual_aux = atual_aux->anterior;
     }
     if (atual_aux==NULL){
        printf("\nNenhum registro foi encontrado!");
     }
}

void listar_todos(){
     printf("#### Exibindo todos os registros ####\n\n");
     struct aluno *atual_aux = atual;
     if (atual_aux==NULL){
        printf("\nNenhum registro foi encontrado!");
     }else{
         while(atual_aux!=NULL){
            printf("RA   = %.0lf",atual_aux->ra);                    
            printf("\nNOME = %s",atual_aux->nome);
            atual_aux = atual_aux->anterior;
            printf("\n----------------\n");
         }
     }
}


void buscar(){
     printf("#### Consulta ####\n\n");
     printf("Digite o RA..: ");
     double ra;
     scanf("%lf",&ra);
     struct aluno *atual_aux = atual;
     while(atual_aux!=NULL){
        if (atual_aux->ra==ra){
          printf("\nRA   = %.0lf",atual_aux->ra);                    
          printf("\nNOME = %s",atual_aux->nome);
          break;
        }
        atual_aux = atual_aux->anterior;
     }
     if (atual_aux==NULL){
        printf("\nNenhum registro foi encontrado!");
     }
}


void alterar(){
     printf("#### Alterar ####\n\n");
     printf("Digite o RA..: ");
     double ra;
     scanf("%lf",&ra);
     struct aluno *atual_aux = atual;
     while(atual_aux!=NULL){
        if (atual_aux->ra==ra){
          printf("\nDados atuais:\n");
          printf("RA   = %.0lf\n",atual_aux->ra);
          printf("NOME = %s\n\n",atual_aux->nome);                     
          printf("Digite os novos dados:\n");                     
          printf("RA   = ");                    
          scanf("%lf",&atual_aux->ra);
          printf("NOME = ");
          fflush(stdin);
          gets(atual_aux->nome);
          break;
        }
        atual_aux = atual_aux->anterior;
     }
     if (atual_aux==NULL){
        printf("\nNenhum registro foi encontrado!");
     }
}

void excluir(){
     printf("#### Excluir ####\n\n");
     printf("Digite o RA..: ");
     double ra;
     scanf("%lf",&ra);
     struct aluno *atual_aux = atual;
     struct aluno *proximo   = atual;
     while(atual_aux!=NULL){
        if (atual_aux->ra==ra){
          printf("\nDeseja realmente excluir o registro abaixo?\n\n");
          printf("RA   = %.0lf\n",atual_aux->ra);
          printf("NOME = %s\n\n",atual_aux->nome);
          printf("Resposta (s/n): ");
          fflush(stdin);
          if (getchar()=='s'){
              if (atual_aux == atual){
                  atual = atual->anterior;
                  free(atual_aux);
              }else{               
                  proximo->anterior = atual_aux->anterior;
                  free(atual_aux);                     
                  
              }
              printf("Registro excluido com sucesso!");                        
          }else{
              printf("Nenhum registro foi excluido!");                        
          }
          return;
        }
        proximo = atual_aux;
        atual_aux = atual_aux->anterior;
     }
     if (atual_aux==NULL){
        printf("\nNenhum registro foi encontrado!");
     }
}

main(){
     int opcao;
     for(;;){
         system("cls");
         printf("#### SISTEMA DE GERENCIAMENTO DE ALUNOS ####\n\n");
         printf("1 - Cadastrar\n");
         printf("2 - Consultar\n");
         printf("3 - Alterar\n");
         printf("4 - Excluir\n");
         printf("5 - Listar todos\n");
         printf("6 - Sair\n");
		 printf("7 - Buscar por nome\n");
         printf("\nDigite a opcao desejada: ");
         scanf("%d",&opcao);
         system("cls");
         if (opcao==1){
            cadastrar();
         }else if (opcao==2){
            consultar();
         }else if (opcao==3){
            alterar();
         }else if (opcao==4){
            excluir();
         }else if (opcao==5){
            listar_todos();
         }else if (opcao==6){
            printf("Saindo...");
            getch();
            break;
         }else if (opcao==7){
         	buscar();
		 }
         getch();
     }
}

