#include <iostream>
#include <string>
#include <locale>
using namespace std;

const string PALAVRA_SECRETA = "MELANCIA";

bool letra_existe(char chute) {    
    for(char letra : PALAVRA_SECRETA) {
        if(chute == letra) {
            return true;
        }
    }
    return false;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    cout << PALAVRA_SECRETA << endl;

    bool nao_acertou = true;
    bool nao_enforcou = true;

    while(nao_acertou && nao_enforcou) {
        char chute;
        cin >> chute;

        if(letra_existe(chute)) {
            cout << "Voc� acertou! Seu chute est� na palavra." << endl;            
        }
        else {
            cout << "Voc� errou! Seu chute n�o est� na palavra." << endl;
        }
    }
}