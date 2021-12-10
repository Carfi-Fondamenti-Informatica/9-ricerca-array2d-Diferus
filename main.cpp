#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int pos=0;
    char lista_nomi [10][20], nome [1][20];
    for (int i = 0; i < 10; i++) {
        cin >> lista_nomi[i];
    }
        cin >> nome[0];

       if (ricerca_nome(lista_nomi, nome, pos)){
        cout << pos << endl;
    } else{
    cout << "non presente" <<endl;
       }
       return 0;
}
