#include <iostream>
using namespace std;

int particiona(int *V, int inicio,int finall){
    int esq, dir, pivo, aux;

    esq = inicio;
    dir = finall;
    pivo = V[inicio];
    while(esq < dir){
        while(V[esq] <= pivo)
            esq++;
        while(V[dir] > pivo)
            dir--;

        if(esq < dir){
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
        }
    }
    V[inicio] = V[dir];
    V[dir] = pivo;
    return dir;

}

void quickSort(int *V, int inicio, int fim){
    int pivo;

    if(fim > inicio){
        pivo = particiona(V,inicio,fim);
        quickSort(V,inicio,pivo-1);
        quickSort(V,pivo+1,fim);
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
    quickSort(vetor,0,999);
    t_final = clock();

    */


    /*
     //para vetores de 5000 elementos
    int i,vetor[5000];

    for(i=0;i<5000;i++){
        vetor[i] = rand() % 5001;
    }
    t_inicial = clock();
    quickSort(vetor,0,4999);
    t_final = clock();
    */


    /*
    //para vetores de 10.000 elementos
    int i,vetor[10000];

    for(i=0;i<10000;i++){
        vetor[i] = rand() % 10001;
    }
    t_inicial = clock();
   quickSort(vetor,0,9999);
    t_final = clock();
    */


    /*
    //para vetores de 100.000 elementos
    int i,vetor[100000];

    for(i=0;i<100000;i++){
        vetor[i] = rand() % 100001;
    }
     t_inicial = clock();
     quickSort(vetor,0,99999);
     t_final = clock();
    */


    /*
    //para vetores de 500.000 elementos
    int i,vetor[500000];

    for(i=0;i<500000;i++){
        vetor[i] = rand() % 500001;
    }
      t_inicial = clock();
      quickSort(vetor,0,499999);
     t_final = clock();
    */



     //para vetores de 1.000.000 elementos
    int i,vetor[1000000];

    for(i=0;i<1000000;i++){
        vetor[i] = rand() % 1000001;
    }
    t_inicial = clock();
    quickSort(vetor,0,999999);
    t_final = clock();



    tempoGasto = ((double)(t_final - t_inicial)) / CLOCKS_PER_SEC;

	cout << "Tempo gasto: " << tempoGasto << "\n";

    return 0;

}
