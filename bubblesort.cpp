#include <iostream>
using namespace std;

void bubble_sort(int vet[], int tam);

int main()
{
    int tam;
    cout << "Digite o tamanho do vetor\n";
    cin >> tam;
    int* vetor = new int [tam];
    cout << "Digite os valores do vetor\n";
    for (int i{0}; i<=tam-1;i+=1)
    {
        int valor;
        cin >> valor;
        vetor[i] = valor;
    }
    cout << "Vamos deixar ordenado!\n";
    bubble_sort(vetor, tam);

    for (int i{0}; i<= tam-1; i+=1)
    {
        cout << vetor[i] << " ";
    }

    delete[] vetor; //liberar a memoria usada
    return 0;
}

void bubble_sort(int vet[],int tam)
{
    bool ordenado{false};
    while (!ordenado)
    {
        ordenado = true;
        for (int j{0}; j< tam-1;j+=1)
        {
            if (vet[j] > vet[j+1])
            {
                swap(vet[j],vet[j+1]);
                ordenado = false;
            } 
        }

    }
    
}