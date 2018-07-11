#include <iostream>
using namespace std;

void shellSort(int *vet, int n) {
    int i , j , value;
    int gap = 1;
    while(gap < n) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap /= 3;
        for(i = gap; i < n; i++) {
            value = vet[i];
            j = i;
            while (j >= gap && value < vet[j - gap]) {
                vet[j] = vet [j - gap];
                j = j - gap;
            }
            vet [j] = value;
        }
    }
}


int main(void){
srand((unsigned)time(NULL));
    clock_t t_inicial,t_final;
    double tempoGasto;

    //Primeira forma ORDEM ALEATÓRIA
    //------------------------------------------------------------------------------------//


    /*
    //para vetores de 1000 elementos

    int i,vetor[1000];

    for(i=0;i<1000;i++){
        vetor[i] = rand() % 1001;
    }

    t_inicial = clock();
    shellSort(vetor,1000);
    t_final = clock();

    */

    /*

     //para vetores de 5000 elementos
    int i,vetor[5000];

    for(i=0;i<5000;i++){
        vetor[i] = rand() % 5001;
    }
    t_inicial = clock();
    shellSort(vetor,5000);
    t_final = clock();
    */


    /*
    //para vetores de 10.000 elementos
    int i,vetor[10000];

    for(i=0;i<10000;i++){
        vetor[i] = rand() % 10001;
    }
    t_inicial = clock();
    shellSort(vetor,10000);
    t_final = clock();
    */


    /*
    //para vetores de 100.000 elementos
    int i,vetor[100000];

    for(i=0;i<100000;i++){
        vetor[i] = rand() % 100001;
    }
     t_inicial = clock();
    shellSort(vetor,100000);
     t_final = clock();
    */


    /*
    //para vetores de 500.000 elementos
    int i,vetor[500000];

    for(i=0;i<500000;i++){
        vetor[i] = rand() % 500001;
    }
      t_inicial = clock();
    shellSort(vetor,500000);
     t_final = clock();
    */



     //para vetores de 1.000.000 elementos
    int i,vetor[1000000];

    for(i=0;i<1000000;i++){
        vetor[i] = rand() % 1000001;
    }
      t_inicial = clock();
    shellSort(vetor,1000000);
       t_final = clock();

    tempoGasto = ((double)(t_final - t_inicial)) / CLOCKS_PER_SEC;

	cout << "Tempo gasto: " << tempoGasto << "\n";

    return 0;
}
