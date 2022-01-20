#include<stdio.h>
int main(){

    int qnt_pao, qnt_broa;
    float valor_arrecadado, valor_apos_fabri, valor_poupanca, valor_euro;

    printf("Quantos paes foram vendidos?\n");
    scanf("%d", &qnt_pao);
    printf("Quantas broas foram vendidas?\n");
    scanf("%d", &qnt_broa);

    valor_arrecadado = qnt_pao*0.25 + qnt_broa*1.50;
    valor_apos_fabri = valor_arrecadado - valor_arrecadado*0.43;
    valor_poupanca = valor_apos_fabri*0.15;
    valor_euro = (valor_apos_fabri*0.15)/4.60;
    
}