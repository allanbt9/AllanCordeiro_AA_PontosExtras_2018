#include <iostream>
using namespace std;


void bubbleSort(int *V,int n){
    int i,continua, aux, fim=n;

    do{
        continua = 0;
        for(i=0;i<fim-1;i++){
            if(V[i] > V[i+1]){
                aux = V[i];
                V[i] = V[i+1];
                V[i+1] = aux;
                continua = i;
            }
        }
        fim--;
    }while(continua != 0);
}

int main(void){
    srand((unsigned)time(NULL));
    clock_t t_inicial,t_final;
    double tempoGasto;

    //Primeira forma ORDEM ALEATÓRIA
    //------------------------------------------------------------------------------------//

    /*
    //para vetores de 100 elementos
    int i,vetor[100];

    for(i=0;i<100;i++){
        vetor[i] = rand() % 101;
    }

    t_inicial = clock();
    bubbleSort(vetor,100);
    t_final = clock();
    */


    /*
    //para vetores de 1000 elementos
    int i,vetor[1000];

    for(i=0;i<1000;i++){
        vetor[i] = rand() % 1001;
    }

    t_inicial = clock();
    bubbleSort(vetor,1000);
    t_final = clock();
    */


    /*

     //para vetores de 5000 elementos
    int i,vetor[5000];

    for(i=0;i<5000;i++){
        vetor[i] = rand() % 5001;
    }
    t_inicial = clock();
    bubbleSort(vetor,5000);
    t_final = clock();
    */


    /*
    //para vetores de 10.000 elementos
    int i,vetor[10000];

    for(i=0;i<10000;i++){
        vetor[i] = rand() % 10001;
    }
    t_inicial = clock();
    bubbleSort(vetor,10000);
    t_final = clock();
    */


    /*
    //para vetores de 100.000 elementos
    int i,vetor[100000];

    for(i=0;i<100000;i++){
        vetor[i] = rand() % 100001;
    }
     t_inicial = clock();
    bubbleSort(vetor,100000);
     t_final = clock();
    */


    /*
    //para vetores de 500.000 elementos
    int i,vetor[500000];

    for(i=0;i<500000;i++){
        vetor[i] = rand() % 500001;
    }
      t_inicial = clock();
    bubbleSort(vetor,500000);
     t_final = clock();
    */


    /*
     //para vetores de 1.000.000 elementos
    int i,vetor[1000000];

    for(i=0;i<1000000;i++){
        vetor[i] = rand() % 1000001;
    }
    bubbleSort(vetor,1000000);
    */






    //Segunda forma ORDEM CRESCENTE
    //-------------------------------------------------------------------------------------------------------//

    /*
    //para vetores de 100 elementos
    int i,vetor[100];

    for(i=0;i<100;i++){
        vetor[i] = i;
    }

    t_inicial = clock();
    bubbleSort(vetor,100);
    t_final = clock();
    */


    /*
    //para vetores de 1000 elementos
    int i,vetor[1000];

    for(i=0;i<1000;i++){
        vetor[i] = i;
    }

    t_inicial = clock();
    bubbleSort(vetor,1000);
    t_final = clock();
    */


    /*

     //para vetores de 5000 elementos
    int i,vetor[5000];

    for(i=0;i<5000;i++){
        vetor[i] = i;
    }
    t_inicial = clock();
    bubbleSort(vetor,5000);
    t_final = clock();
    */


    /*
    //para vetores de 10.000 elementos
    int i,vetor[10000];

    for(i=0;i<10000;i++){
        vetor[i] = i;
    }
    t_inicial = clock();
    bubbleSort(vetor,10000);
    t_final = clock();
    */


    /*
    //para vetores de 100.000 elementos
    int i,vetor[100000];

    for(i=0;i<100000;i++){
        vetor[i] = i;
    }
     t_inicial = clock();
    bubbleSort(vetor,100000);
     t_final = clock();
    */


    /*
    //para vetores de 500.000 elementos
    int i,vetor[500000];

    for(i=0;i<500000;i++){
        vetor[i] = i;
    }
      t_inicial = clock();
    bubbleSort(vetor,500000);
     t_final = clock();
    */


    /*
     //para vetores de 1.000.000 elementos
    int i,vetor[1000000];

    for(i=0;i<1000000;i++){
        vetor[i] = rand() % 1000001;
    }
     t_inicial = clock();
    bubbleSort(vetor,1000000);
     t_final = clock();
    */




    tempoGasto = (double(t_final - t_inicial)) / CLOCKS_PER_SEC	;

	cout << "Tempo gasto: " << tempoGasto << "\n";

    return 0;
}

