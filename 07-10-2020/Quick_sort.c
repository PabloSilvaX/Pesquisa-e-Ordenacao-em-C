#include<stdio.h>
#include<conio.h>

void quicksort(int vet[], int indice_pivo, int indice_comparador, int *etapa){
    
    int inicio = indice_pivo;
    int fim    = indice_comparador;
    
    int pivo = vet[indice_pivo];
    int comparador = vet[indice_comparador];
        
    while(indice_pivo!=indice_comparador){        
        if (indice_pivo<indice_comparador && pivo<comparador){//O pivo está a esquerda
            indice_comparador--;
            comparador = vet[indice_comparador];        
        }else if (indice_comparador<indice_pivo && comparador<pivo){
            indice_comparador++;
            comparador = vet[indice_comparador];
        }else{
            vet[indice_pivo] = comparador;
            int aux = indice_pivo;//0
            indice_pivo = indice_comparador;//5
            indice_comparador = aux;
            vet[indice_pivo] = pivo;
            
            if(indice_comparador<indice_pivo){//se o comprador estiver do lado esquerdo
                indice_comparador++;
            }else if (indice_comparador>indice_pivo){//se o comprador estiver do lado direito        
                indice_comparador--;
            }
            comparador = vet[indice_comparador];
        }
    }
    
    printf("\n\nResultado da etapa %d\n",(*etapa)++);    
    
    
    int i;    
    for(i=0;i<=9;i++){
        if (indice_pivo==i){
            printf("[%d] ",vet[i]);    
        }else{        
            printf("%d ",vet[i]);
        }
    }
    
    getch();
        
    if (inicio<=indice_pivo-1){    
        quicksort(vet,inicio,indice_pivo-1,etapa);
    }
    
    if (indice_pivo+1<=fim){    
        quicksort(vet,indice_pivo+1,fim,etapa);
    }
    
    
}

main(){
    int vet[10]={3,0,1,8,7,2,5,4,9,6};
    int indice_pivo = 0;
    int indice_comparador = 9;
    int etapa = 1;
    
    quicksort(vet,indice_pivo,indice_comparador,&etapa);
    
    
}
