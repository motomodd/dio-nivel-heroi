#include <iostream>
using namespace std;

int main() {

    int xp;
    string heroi;
    string rank = "noob";

    while (heroi.empty()) {
        cout << "Nome do herói: ";
        getline(cin, heroi);

        if (heroi.empty()) {
            cout << "ERRO! Insira o nome do herói!" << endl;
        }
    }

    cout << heroi << ", quantos XP você acumulou? ";
    cin >> xp;

    if (xp < 1000) rank = "ferro";
    else if (xp >= 1001 && xp <= 2000) rank = "bronze";
    else if (xp >= 2001 && xp <= 5000) rank = "prata";
    else if (xp >= 5001 && xp <= 6000) {
        rank = "falha ao obter rank!";
        cout << "professor da DIO não definiu rank neste range" << endl;
    }
    else if (xp >= 6001 && xp <= 7000) rank = "ouro";
    else if (xp >= 7001 && xp <= 8000) rank = "platina";
    else if (xp >= 8001 && xp <= 9000) rank = "ascendente";
    else if (xp >= 9001 && xp <= 10000) rank = "imortal";
    else if (xp >= 10001) rank = "radiante";

    cout << "O herói de nome " << heroi << " está no nível de " << rank << "!" << endl;

}
