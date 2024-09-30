/*L'uso e l'implementazione della funzione bubble sort
è chiaro che questa funzione non restituisce niente  dato che sta manipolando la matrice in se.
E NON UNA COPIA !!!!
*/

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Swap elements if the current element is greater than the next element
            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];  // variabile temporanea 

                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    // si invoca in questo modo passando il nome della matrice e la sua dimensione!!
    // specie che si ha una matrice allocata dinamicamente!
    bubbleSort(matrix, size);

}