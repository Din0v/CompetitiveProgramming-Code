/*CF  problema di geometria di cerchi concentrici si trova qui: 
https://codeforces.com/problemset/problem/157/B
step da fare: 
1. fare il bubble sort della matrice presa in input ed allocata dinamicamente

2. definire una variable chiamata total area che somma o sottrae in base alla posizione del indice (se pari somma se dispare sottre) 

3. stampare la soluzione 

questo esempio è abbastaza particolare per me dato che per la prima volta ho usato le funzioni in maniera modulare per scomporre il problema in sotto problem
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>



void bubbleSort(double arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Swap elements if the current element is greater than the next element
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

double calculateCircleArea(double radius) {
    double area =  3.14159265359* radius * radius; // i tried using M_PI (3.14159265359) but the judge gave me a compilation error .
    
    return area;
}


int main(){
    int size, i;
    scanf("%d", &size);

    double* matrix;
    
    matrix = (double*)malloc(size* sizeof(double));

    for(i=0; i<size; i++){
        scanf("%lf",&matrix[i]);
    }

    bubbleSort(matrix, size);

    double totalarea = 0 ;

    for(i=0; i<size; i++){
        if(i%2==0){
            totalarea = totalarea + calculateCircleArea(matrix[i]);
        }else{
            totalarea = totalarea - calculateCircleArea(matrix[i]);
        }
    }
  
  printf("%lf", abs(totalarea));


}