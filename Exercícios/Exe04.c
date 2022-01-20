#include<stdio.h>
int main(){
    
    int idade;

    printf("Coloque a sua idade:\n");
    scanf("%d", &idade);

    if (idade >= 21){
        
        printf("Voce ja e maior de 21 anos");
    }

    else{
        printf("Voce e menor de 21 anos");
    }
}