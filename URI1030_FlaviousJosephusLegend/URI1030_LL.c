#include <stdio.h>
#include <time.h>
//int vivo(int pessoas[], unsigned int quantidade, unsigned int passo){
void vivo(int* pessoas, unsigned int* quantidade, unsigned int* passo){
    
}


int main(){
    clock_t start, end, total;
    start = clock();
    unsigned short int NC, i, j;
    unsigned int n, k;
    int pessoas[10000];

    scanf("%hu", &NC);

    for(i = 0; i < NC; i++){
        scanf("%u %u", &n, &k);

        for(j = 0; j < n; j++){
            pessoas[j] = j + 1;
        }

        vivo(pessoas, n, k);
    }
    end = clock();
    total = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Total time: %lf", total);
}