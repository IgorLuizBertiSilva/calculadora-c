#include <stdio.h>

int calcular(float valores[], char operacao[], int tamOperacoes){
    float resultado;
    int j = 1;

    for (int i = 0; i < tamOperacoes; i++)
    {

        printf("%c\n", operacao[i]);
        if (operacao[i] == '+')
        {
            valores[0] = valores[0] + valores[j];
        }
        else if (operacao[i] == '-')
        {
            valores[0] = valores[0] - valores[j];
        }
        else if (operacao[i] == '*')
        {
            valores[0] = valores[0] * valores[j];
        }
        else if (operacao[i] == '/')
        {
            valores[0] = valores[0] / valores[j];
        }
        else
        {
            printf("Operacao invalida!\n");
            return NULL;
        }
        j++;
    
    }

    return valores[0];
    
}


int calculadora(int tammanhoValores, int tamanhoOperacoes){
    float valores[tammanhoValores];
    char operacao[tamanhoOperacoes];
    float resultado;

    for (int i = 0; i < tammanhoValores; i++)
    {
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &valores[i]);
    }

    for (int i = 0; i < tamanhoOperacoes; i++)
    {
        printf("Digite a operacao %d: ", i+1);
        scanf("%c", &operacao[i]);
        scanf("%c", &operacao[i]);
    }

    resultado = calcular(valores, operacao, tamanhoOperacoes);

    printf("Resultado: %f", resultado);
    
    return 0;
}


int main(){
    
    int tamOperacoes, tamValores;

    printf("Digite o quantidade dos valores: ");
    scanf("%d", &tamValores);

    tamOperacoes = tamValores - 1;

    calculadora(tamValores, tamOperacoes);
    
    return 0;

}