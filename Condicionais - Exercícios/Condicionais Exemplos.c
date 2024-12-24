#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int IdadedeAlguem;
    scanf("%d", &IdadedeAlguem);
    printf("Idade: %d", IdadedeAlguem);

    if(IdadedeAlguem > 17){
        printf("Fulano e maior de idade!");
    }

    return 0;
}