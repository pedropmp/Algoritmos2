#include <stdio.h>
#include <time.h>
int vivo(int pessoas[10000], unsigned int quantidade, unsigned int passo){
    int i = passo - 1, c, qinicial = quantidade, resultado;
    // loop de mortes
    while(quantidade > 1){
        pessoas[i] = 0;
        quantidade--;
       
        // loop de contagem
         c = 0;
        while(c < passo){
            if(pessoas[i] != 0){
                c++;
                if(c < passo)
                    i++;
            }
            else{
                if(i < qinicial-1)
                    i++;
                else
                    i = 0;
            }
        }

    }
    for(i = 0; i < qinicial; i++){
        if(pessoas[i] != 0){
            resultado = pessoas[i];
            break;
        }
    }
    /*for(i = 0; i < qinicial; i++){
        printf("%d ", pessoas[i]);
    }
    printf("\n");*/
    return resultado;
}

int main(){
    clock_t start, end, total;
    start = clock();
    unsigned short int NC, i;
    unsigned int n, k;
    int pessoas[10000], j;

    scanf("%hu", &NC);

    for(i = 0; i < NC; i++){
        scanf("%u %u", &n, &k);

        for(j = 0; j < n; j++){
            pessoas[j] = j + 1;
        }

        printf("Case %hu: %d\n", i+1, vivo(pessoas, n, k));
    }
    end = clock();
    total = (double)(end - start) / CLOCKS_PER_SEC;
}