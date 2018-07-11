#include <iostream>
using namespace std;


void insertionSort(int *V,int n){
    int i,j,aux;

    for(i=1;i<n;i++){
        aux = V[i];
        for(j=i;(j>0) && (aux < V[j - 1]); j--){
            V[j] = V[j - 1];
        }
        V[j] = aux;

    }
}

int main(void){
    srand((unsigned)time(NULL));
    clock_t t_inicial,t_final;
    double tempoGasto;

    //Primeira forma ORDEM ALEATÓRIA
    //------------------------------------------------------------------------------------//



    //para vetores de 1000 elementos
    /*
    int i,vetor[1000];

    for(i=0;i<1000;i++){
        vetor[i] = rand() % 1001;
    }

    t_inicial = clock();
    insertionSort(vetor,1000);
    t_final = clock();
    */


    /*

     //para vetores de 5000 elementos
    int i,vetor[5000];

    for(i=0;i<5000;i++){
        vetor[i] = rand() % 5001;
    }
    t_inicial = clock();
    insertionSort(vetor,5000);
    t_final = clock();
    */


    /*
    //para vetores de 10.000 elementos
    int i,vetor[10000];

    for(i=0;i<10000;i++){
        vetor[i] = rand() % 10001;
    }
    t_inicial = clock();
    insertionSort(vetor,10000);
    t_final = clock();
    */


    /*
    //para vetores de 100.000 elementos
    int i,vetor[100000];

    for(i=0;i<100000;i++){
        vetor[i] = rand() % 100001;
    }
     t_inicial = clock();
    insertionSort(vetor,100000);
     t_final = clock();
    */


    /*
    //para vetores de 500.000 elementos
    int i,vetor[500000];

    for(i=0;i<500000;i++){
        vetor[i] = rand() % 500001;
    }
      t_inicial = clock();
    insertionSort(vetor,500000);
     t_final = clock();
    */



     //para vetores de 1.000.000 elementos
    int i,vetor[1000000];

    for(i=0;i<1000000;i++){
        vetor[i] = rand() % 1000001;
    }
    t_inicial = clock();
    insertionSort(vetor,1000000);
    t_final = clock();

    tempoGasto = ((double)(t_final - t_inicial)) / CLOCKS_PER_SEC;

	cout << "Tempo gasto: " << tempoGasto << "\n";

    return 0;

}
