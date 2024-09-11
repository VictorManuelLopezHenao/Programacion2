#include <iostream>
using namespace std;

int main() {
    int num, N;
    int mit1 = 0, mit2 = 0;
    int vec1[30], vec2[30];

    cout << "\tVerificación de boletos" << endl;
    cout << "\nDigite el tamaño del boleto: "; 
    cin >> num;

    
    if (num % 2 == 0) {
        N = num / 2;
        cout << "De esta manera: 1 2 3 4 5..." << endl;
        cout << "Ingrese los dígitos del boleto: ";

        for (int i = 0; i < num; i++) {
            cin >> vec1[i];
            cout << " ";
        }

        
        for (int i = 0; i < N; i++) {
            vec2[i] = vec1[num - i - 1];
        }

        
        for (int i = 0; i < N; i++) {
            mit1 += vec1[i];
        }


        for (int i = 0; i < N; i++) {
            mit2 += vec2[i];
        }

        if (mit1 == mit2) {
            cout<< mit1 << " " << mit2 << endl;
            cout<<"Boleto válido"<< endl;
        } else {
            cout <<"Boleto inválido"<< endl;
        }
    } 
    else {
        cout<<"El tamaño del boleto debe ser par"<< endl;
    }

    return 0;
}
