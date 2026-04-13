/******************************************************************************

Andrea Villalba Mercado
Programación estructurada
26/03/2026

*******************************************************************************/
//QUICKSORT

#include
void quickSort(int arr[], int inicio, int fin) {
int i = inicio, j = fin;
int pivote = arr[(inicio + fin) / 2];
int temp;

while (i <= j) {
while (arr[i] < pivote) i++;
while (arr[j] > pivote) j--;

if (i <= j) {
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
i++;
j--;
}
}

if (inicio < j)
quickSort(arr, inicio, j);
if (i < fin)
quickSort(arr, i, fin);
}

int main() {
int arr[6];

printf("Ingresa 6 numeros:\n");
for (int i = 0; i < 6; i++) {
scanf("%d", &arr[i]);
}

quickSort(arr, 0, 5);

printf("Arreglo ordenado (Quick Sort):\n");
for (int i = 0; i < 6; i++) {
printf("%d ", arr[i]);
}

return 0;
}

//INSERTION SORT

#include
int main() {
int arr[6];

printf("Ingresa 6 numeros:\n");
for (int i = 0; i < 6; i++) {
scanf("%d", &arr[i]);
}

for (int i = 1; i < 6; i++) {
int actual = arr[i];
int j = i - 1;

while (j >= 0 && arr[j] > actual) {
arr[j + 1] = arr[j];
j--;
}

arr[j + 1] = actual;
}

printf("Arreglo ordenado (Insertion Sort):\n");
for (int i = 0; i < 6; i++) {
printf("%d ", arr[i]);
}

return 0;
}