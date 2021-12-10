#include "lib.h"
#include <cstring>

bool ricerca_nome (char lista_nomi[10][20],char nome[1][20], int &pos){
    for (int i = 0; i < 10; i++){
        if(strcmp(lista_nomi[i], nome[0])==0){
        pos=i;
        return true;
        }
    }
    return false;
}
