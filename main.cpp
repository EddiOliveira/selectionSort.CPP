#include <iostream>

using namespace std;


void troca(int *atual, int *menor)
{
    int aux = *atual;
    *atual = *menor;
    *menor = aux;
}


void selectionSort(int arr[], int n)
{
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(arr[j] < arr[i]) troca(&arr[j], &arr[i]);
}


int main(){
    
    int v[] = {40, 10, 11, 1, 22, 3, 8, 14};
    int size = sizeof(v)/sizeof(v[0]);

    cout << "Vetor antes do selectionSort: ";
    for(int i=0; i<size; i++) cout << v[i] << " ";
    
    selectionSort(v, size);

    cout << endl << "Vetor depois do selectionSort: ";
    for(int i=0; i<size; i++) cout << v[i] << " ";

return 0;
}