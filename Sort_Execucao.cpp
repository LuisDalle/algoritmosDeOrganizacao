#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "sort.cpp"

int main() {
	
	int numeros[100];
	int count=100;
	int op;
	clock_t tempoInicial; 
	clock_t tempoFinal;
	
	// cria o vetor aleatorio de numeros
	srand(time(NULL));
	for (int i=0;i<100;i++) {
		numeros[i] = rand() % 999;
	}
	
	do {
	printf("\n"); 
    printf("||-------------------------------------------------------------------|| \n");
    printf("    Bem Vindo ! Selecione a opcao para organizar a seguinte lista : \n");
    printf("||-------------------------------------------------------------------|| \n");
    
    printf("\n");
    //printa a lista aleatoria
    for (int i=0;i<100;i++) {
    	printf("%3.d ", numeros[i]);
    	if (i==24 || i==49 || i== 74) {
    		printf("\n");
		}
	}
	printf("\n");
	
    printf("\n");
    printf(" | Bubble Sort :      1 | \n");
    printf(" | Insertion Sort :   2 | \n");
    printf(" | Selection Sort :   3 | \n");
    printf(" | Merge Sort :       4 | \n");
    printf(" | Shell Sort :       5 | \n");
    printf(" | Quick Sort :       6 | \n");
    printf(" | Sair :             0 | \n\n");
    printf(" Opcao : ");
    scanf("%d", &op);
    
    switch(op)
	{
     case 0 :
       printf("Programa Finalizado \n");
        break; 
     case 1:
     	
    	tempoInicial = clock();
    	for (int i=0; i<1000;i++) {
    		bubbleSort(numeros);
		}
    	tempoFinal = clock() - tempoInicial;
    	
    	printf("\nLista Organizada\n" );
    	printf("Tempo de execucao: %.0lf Micro Segundos\n", ((double)tempoFinal)/(CLOCKS_PER_SEC/1000));
    	for (int i=0;i<100;i++) { 
	    	printf("%3.d ", numeros[i]);
	    	if (i==24 || i==49 || i== 74) {
	    		printf("\n");
			}
		}
		printf("\n");
		
       break;
     case 2:
     	
    	tempoInicial = clock();
    	for (int i=0; i<1000;i++) {
    		insertionSort(numeros);
		}
		tempoFinal = clock() - tempoInicial;
		       
    	printf("\nLista Organizada\n");
    	printf("Tempo de execucao: %.0lf Micro Segundos\n", ((double)tempoFinal)/(CLOCKS_PER_SEC/1000));
    	for (int i=0;i<100;i++) { 
	    	printf("%3.d ", numeros[i]);
	    	if (i==24 || i==49 || i== 74) {
	    		printf("\n");
			}
		}
		printf("\n");
		
       break;
     case 3:
     	
    	tempoInicial = clock();
        for (int i=0; i<1000;i++) {
    		selectionSort(numeros);
		}
        tempoFinal = clock() - tempoInicial;
        
        printf("\nLista Organizada\n");
        printf("Tempo de execucao: %.0lf Micro Segundos\n", ((double)tempoFinal)/(CLOCKS_PER_SEC/1000));
    	for (int i=0;i<100;i++) { 
	    	printf("%3.d ", numeros[i]);
	    	if (i==24 || i==49 || i== 74) {
	    		printf("\n");
			}
		}
		printf("\n");
        
       break;
     case 4:
     	
		tempoInicial = clock();
		for (int i=0; i<1000;i++) {
    	merge(numeros, count);
    	mergeSort(numeros, count); 	
		}
    	tempoFinal = clock() - tempoInicial;
    	
    	printf("\nLista Organizada\n");
    	printf("Tempo de execucao: %.0lf Micro Segundos\n", ((double)tempoFinal)/(CLOCKS_PER_SEC/1000));
    	for (int i=0;i<100;i++) { 
	    	printf("%3.d ", numeros[i]);
	    	if (i==24 || i==49 || i== 74) {
	    		printf("\n");
			}
		}
		printf("\n");
    	
    	
       break;
     case 5:
     	
    	tempoInicial = clock();
        for (int i=0; i<1000;i++) {
    		shellSort(numeros);
		}
        tempoFinal = clock() - tempoInicial;
        
        printf("\nLista Organizada\n");
        printf("Tempo de execucao: %.0lf Micro Segundos\n", ((double)tempoFinal)/(CLOCKS_PER_SEC/1000));
    	for (int i=0;i<100;i++) { 
	    	printf("%3.d ", numeros[i]);
	    	if (i==24 || i==49 || i== 74) {
	    		printf("\n");
			}
		}
		printf("\n");
        
       break;
     case 6:
     	
    	tempoInicial = clock();
    	for (int i=0; i<1000;i++) {
    		quick(numeros);
		} 
    	tempoFinal = clock() - tempoInicial;
    	
    	printf("\nLista Organizada\n");
    	printf("Tempo de execucao: %.0lf Micro Segundos\n", ((double)tempoFinal)/(CLOCKS_PER_SEC/1000));
    	for (int i=0;i<100;i++) { 
	    	printf("%3.d ", numeros[i]);
	    	if (i==24 || i==49 || i== 74) {
	    		printf("\n");
			}
		}
		printf("\n");
    	
       break;     
     default:
        printf("Opção invalida\n");  
     break;
    }
    
	}
	while(0);
	return 0;
	
	
	
}
