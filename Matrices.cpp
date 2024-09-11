#include<iostream>
using namespace std;

int x, y, f, c;
const int MAX = 10;
float m1[MAX][MAX];
float m2[MAX][MAX];
float mf[MAX][MAX];


void pedirdatos(){

    cout<<"Confirme las dimensiones de las matrices: "; cin>>x>>y;

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout<<"Digite los valores de la matriz 1: "<<i+1<<" "<<j+1<<": ";
            cin>>m1[i][j];
        }
        cout<<endl;
    }

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout<<"Digite los valores de la matriz 2: "<<i+1<<" "<<j+1<<": ";
            cin>>m2[i][j];
        }
        cout<<endl;
    }

}

void suma(){
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
        mf[i][j] = m1[i][j] + m2[i][j];
        }
      }
    }

void resta(){
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            mf[i][j] = m1[i][j] - m2[i][j];
        }
    }
}

void pedirdatosmult(){

    cout<<"Digite las dimensiones de la matriz 1:  "; cin>>x>>y;

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout<<"Digite los valores de la matriz 1: "<<i+1<<" "<<j+1<<": ";
            cin>>m1[i][j];
        }
        cout<<endl;
    }

cout<<"Digite las dimensiones de la matriz 2: "; cin>>f>>c;
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            cout<<"Digite los valores de la matriz 2: "<<i+1<<" "<<j+1<<": ";
            cin>>m2[i][j];
        }
        cout<<endl;
    }

}

void multiplicacion(){
   for (int i = 0; i < x; i++) {
        for (int j = 0; j < c; j++) {
            for (int k = 0; k < y; k++) {
                mf[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

void resultadomult(){
 cout << "Matriz resultante:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < c; j++) {
            cout << mf[i][j] << " ";
        }
        cout << endl;
    }
}

void dato1matriz(){
     cout<<"Confirme las dimensiones de la matriz: "; cin>>x>>y;

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout<<"Digite los valores de la matriz 1: "<<i+1<<" "<<j+1<<": ";
            cin>>m1[i][j];
        }
        cout<<endl;
    }
}

void multescalar(){
    int e;
    cout<<"Digite el valor del escalar: "; cin>>e; 
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            mf[i][j] = m1[i][j] * e;
        }
    }

}

void transposicion(){
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            mf[j][i] = m1[i][j];
        }
    }
}

float determinante(){
    return m1[0][0] * m1[1][1] - m1[0][1] * m1[1][0];
}

void inversa(){

    float det = determinante();

    if (det == 0) {
        cout<<"La matriz no tiene inversa (determinante 0)"<<endl;
        }
    
    else{

    float inversoDet = 1.0 / det;
    mf[0][0] = m1[1][1] * inversoDet;
    mf[0][1] = -m1[0][1] * inversoDet;
    mf[1][0] = -m1[1][0] * inversoDet;
    mf[1][1] = m1[0][0] * inversoDet;

  cout<< "Matriz resultante:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << mf[i][j] << " ";
        }
        cout << endl;
    }
}
}

void rstdet(){
    cout<<"El determinante de la matriz digitada es: "<<endl;
    cout<<determinante();
}

void resultado(){
 cout << "Matriz resultante:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << mf[i][j] << " ";
        }
        cout << endl;
    }
}

void menú(){
    int opcion, dimension, opc2;
    do{
        cout<<endl;
        cout<<"\n\t Operaciones con matrices"<<endl;
        cout<<"\nBienvenido al menú:"<<endl;
        cout<<"Dimensiones : "<<endl;
        cout<<"1. 2x2"<<endl;
        cout<<"2. 3x3 o 4x4"<<endl;
        cout<<"3. Salir del programa"<<endl;
        cout<<"\nSeleccione el tamaño de la matriz: "; cin>>dimension;
        cout<<endl;

        switch(dimension){
            case 1:
        cout<<"Operaciones con matrices 2x2"<<endl;
        cout<<"1. Suma de matrices"<<endl;   
        cout<<"2. Resta de matrices"<<endl;   
        cout<<"3. Multiplicacion de matrices"<<endl;  
        cout<<"4. Multiplicacion de una matriz por un escalar"<<endl;  
        cout<<"5. Transposicion de una matriz"<<endl; 
        cout<<"6. Inversa de una matriz"<<endl;
        cout<<"7. Determinante de una matriz"<<endl; 
        cout<<"\nSeleccione una operacion: "; cin>>opcion;
        cout<<endl;

        switch(opcion){
          case 1:
            cout<<"\n\tSuma de matrices"<<endl;
            cout<<"Esta operacion se puede realizar con matrices cuadradas y con otras dimesiones"<<endl;
            pedirdatos(); 
            suma();
            resultado();
            break;

          case 2:
            cout<<"\n\tResta de matrices"<<endl;
            cout<<"Esta operacion se puede realizar con matrices cuadradas y con otras dimesiones"<<endl;
            pedirdatos();
            resta();
            resultado();
            break;

          case 3:
            cout<<"\n\tMultiplicacion de matrices"<<endl;
            cout<<"Esta operacion se puede realizar con matrices cuadradas y con otras dimesiones"<<endl;
            cout<<"1. Ingresar el tamaño de las matrices"<<endl;
            cout<<"2. Salir"<<endl;
            cout<<"\nElija una opcion: "; cin>>opc2;

            switch (opc2)
            {
            case 1:
                pedirdatosmult();
                multiplicacion();
                resultadomult();
                break;

            case 2:
                cout<<"Saliendo del programa...."<<endl;
                break;
            
            default:
                cout<<"opcion invalida, intente de nuevo"<<endl;
            }
            break;

          case 4:
            cout<<"\n\tMultiplicacion de una matriz por un escalar"<<endl;
            dato1matriz();
            multescalar();
            resultado();
            break;

          case 5:
            cout<<"\n\tTransposicion de una matriz"<<endl;
            dato1matriz();
            transposicion();
            resultado();
            break;

          case 6:
          cout<<"\n\tInversa de una funcion"<<endl;
            dato1matriz();
            inversa();
            break;

            break;

          case 7:
           cout<<"\n\tDeterminante de una matriz"<<endl;
            dato1matriz();
            determinante();
            rstdet();
            break;

          default:
            cout<<"opcion invalida, intente de nuevo"<<endl;
        }
        break;

            case 2:
        cout<<"Operaciones con matrices 3x3 o 4x4"<<endl;
        cout<<"1. Suma de matrices"<<endl;   
        cout<<"2. Resta de matrices"<<endl;   
        cout<<"3. Multiplicacion de matrices"<<endl;  
        cout<<"4. Multiplicacion de una matriz por un escalar"<<endl;  
        cout<<"5. Transposicion de una matriz"<<endl;
        cout<<"\nSeleccione una operacion: "; cin>>opcion; 

         switch(opcion){
          case 1:
            cout<<"\n\tSuma de matrices"<<endl;
            cout<<"Esta operacion se puede realizar con matrices cuadradas y con otras dimesiones"<<endl;
            pedirdatos(); 
            suma();
            resultado();
            break;

          case 2:
            cout<<"\n\tResta de matrices"<<endl;
            cout<<"Esta operacion se puede realizar con matrices cuadradas y con otras dimesiones"<<endl;
            pedirdatos();
            resta();
            resultado();
            break;

          case 3:
            cout<<"\n\tMultiplicacion de matrices"<<endl;
            cout<<"Esta operacion se puede realizar con matrices cuadradas y con otras dimesiones"<<endl;
            cout<<"1. Ingresar el tamaño de las matrices"<<endl;
            cout<<"2. Salir"<<endl;
            cout<<"\nElija una opcion: "; cin>>opc2;

            switch (opc2)
            {
            case 1:
                pedirdatosmult();
                multiplicacion();
                resultadomult();
                break;

            case 2:
                cout<<"Saliendo del programa...."<<endl;
                break;
            
            default:
                cout<<"opcion invalida, intente de nuevo"<<endl;
            }
            break;

           case 4:
            cout<<"\n\tMultiplicacion de una matriz por un escalar"<<endl;
            dato1matriz();
            multescalar();
            resultado();
            break;

          case 5:
            cout<<"\n\tTransposicion de una matriz"<<endl;
            dato1matriz();
            transposicion();
            resultado();
            break;

          default:
            cout<<"opcion invalida, intente de nuevo"<<endl;
         }
         break;

          case 3:
            cout<<"Saliendo del programa...."<<endl;
            break;

          default:
            cout<<"opcion invalida, intente de nuevo"<<endl;
        
        }

    }while(dimension != 3);

}

int main(){
    
    menú();
 return 0;
}

