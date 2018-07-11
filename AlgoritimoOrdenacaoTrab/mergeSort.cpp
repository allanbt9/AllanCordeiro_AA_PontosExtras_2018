#include <iostream>
using namespace std;

void mergee(int *V, int inicio, int meio, int fim){
    int *temp, p1, p2, tamanho, i, j, k;

    int fim1 = 0, fim2 = 0;

    tamanho = fim-inicio+1;
    p1 = inicio;
    p2 = meio+1;

    temp = new int[tamanho];
    if(temp != NULL){
        for(i=0;i<tamanho;i++){
            if(!fim && !fim2){
                if(V[p1] < V[p2])
                    temp[i] = V[p1++];
                else
                    temp[i] = V[p2++];

                if(p1 > meio) fim1=1;
                if(p2 > fim) fim2=1;


            }else{
                if(!fim1)
                    temp[i] = V[p1++];
                else
                    temp[i] = V[p2++];
            }
        }
        for(j=0, k=inicio; j<tamanho; j++,k++){
            V[k] = temp[j];
        }
    }
    delete[] temp;
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        mergee(arr, l, m, r);
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
    mergeSort(vetor,0,999);
    t_final = clock();
    */



    /*
     //para vetores de 5000 elementos
    int i,vetor[5000];

    for(i=0;i<5000;i++){
        vetor[i] = rand() % 5001;
    }
    t_inicial = clock();
    mergeSort(vetor,0,4999);
    t_final = clock();
    */


    /*
    //para vetores de 10.000 elementos
    int i,vetor[10000];

    for(i=0;i<10000;i++){
        vetor[i] = rand() % 10001;
    }
    t_inicial = clock();
   mergeSort(vetor,0,9999);
    t_final = clock();
    */


    /*
    //para vetores de 100.000 elementos
    int i,vetor[100000];

    for(i=0;i<100000;i++){
        vetor[i] = rand() % 100001;
    }
     t_inicial = clock();
     mergeSort(vetor,0,99999);
     t_final = clock();
    */


    /*
    //para vetores de 500.000 elementos
    int i,vetor[500000];

    for(i=0;i<500000;i++){
        vetor[i] = rand() % 500001;
    }
      t_inicial = clock();
      mergeSort(vetor,0,499999);
     t_final = clock();
    */


    /*
     //para vetores de 1.000.000 elementos
    int i,vetor[1000000];

    for(i=0;i<1000000;i++){
        vetor[i] = rand() % 1000001;
    }
    t_inicial = clock();
    mergeSort(vetor,0,999999);
    t_final = clock();
    */


    tempoGasto = ((double)(t_final - t_inicial)) / CLOCKS_PER_SEC;

	cout << "Tempo gasto: " << tempoGasto << "\n";

    return 0;

}
