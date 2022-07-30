#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

	void bubbleSort(int numeros[]) {
		int count = 100;
		register int a, b;
		register int t;
		for(a=(count-1); a>0; a--) {
		for(b=0; b<a; b++) {
		if(numeros[b]>numeros[b+1]) {
		t=numeros[b];
		numeros[b]=numeros[b+1];
		numeros[b+1]=t; } } }
	}
	
	void insertionSort(int numeros[]){
		int count = 100;
		register int a, b, t;
		for (a = 1; a < count; ++a) {
		t = numeros[a];
		for (b = a - 1; b >= 0 && t < numeros[b]; b--)
		numeros[b+1] = numeros[b]; numeros[b+1] = t;}
	}
	
	void selectionSort(int numeros[]){
		int count = 100;
		register int a, b, c;
		int exchange, t;
		for (a = 0; a < count-1; ++a) {
		exchange = 0;
		c = a;
		t = numeros[a];
		for (b = a+1; b < count; ++b) {
		if (numeros[b] < t) {
		c = b;
		t = numeros[b];
		exchange = 1; } }
		if (exchange) {
		numeros[c] = numeros[a];
		numeros[a] = t; } }
	}
	
	void merge(int numeros[], int count) {
		
		int meio, i, j, k;
		int* auxiliar;
		auxiliar =(int*) malloc(count * sizeof(int));
		if (auxiliar==NULL){
		return;}
		meio = count/2;
		i = 0; k=0;
		j = meio;
		while (i < meio && j < count) {
		if (numeros[i] <= numeros[j]) {
		auxiliar[k] = numeros[i++];
		}else {auxiliar[k] = numeros[j++];
		} ++k; }
		if (i == meio) {
		while (j < count) {
		auxiliar[k++] = numeros[j++]; }
		}else {
		while (i < meio) {
		auxiliar[k++] = numeros[i++]; } }
		for (i = 0; i < count; ++i) {
		numeros[i] = auxiliar[i]; }
		free(auxiliar);	
	
	}
	
	
	void mergeSort(int numeros[], int count){
		
		int meio;
		if (count > 1) {
		meio = count / 2;
		mergeSort(numeros, meio);
		mergeSort(numeros + meio, count - meio);
		merge(numeros, count); }
	}
	
	
	void shellSort(int numeros[]){
		int count = 100;
		int i , j , value;
		int gap = 1;
		while(gap < count) {
		gap = 3*gap+1; }
		while ( gap > 1) {
		gap /= 3;
		for(i = gap; i < count; i++) {
		value = numeros[i];
		j = i - gap;
		while (j >= 0 && value < numeros[j]) {
		numeros [j + gap] = numeros[j];
		j -= gap; }
		numeros [j + gap] = value; } }
	}
	
	void quick(int numeros[]){
		int count = 100;
		quickSort(numeros, 0, count -1);
	}
	
	void quickSort(int numeros[], int left, int right){
		int count = 100;	
		register int i, j;
		int x, y;
		i = left; j = right;
		x = numeros[ ( left + right ) / 2 ];
		do {
		while ( numeros[ i ] < x && i < right ) i++;
		while ( x < numeros[ j ] && j > left ) j--;
		if ( i <= j ) {
		y = numeros[ i ];
		numeros[ i ] = numeros[ j ];
		numeros[ j ] = y;
		i++ ; j-- ; }
		} while ( i <= j );
		if ( left < j ) quickSort ( numeros, left, j );
		if ( i < right ) quickSort ( numeros, i, right );
	}
	
