#include <iostream>

using namespace std;
double saldo = 100;
string frase;
void sumar_saldo(double s){
    saldo = saldo + s;

}
void restar_saldo(double t){
    if (saldo>=t){
        saldo = saldo -t;
    }else{
        cout << "Sus fondos son  insuficiente"<<endl;

    }

}
string obtenerTipoCuenta (){
    string frase = "";
    if (saldo <= 100){
        frase = "su saldo te permite ser un cliente tipo D";

    }else{
        if ((saldo >= 101)&&(saldo <= 1000)){
            frase = "su saldo te permite ser un cliente tipo C";
        }else {
            if ((saldo >= 1001)&&(saldo <= 10000)){
                frase = "su saldo te permite ser un cliente tipo B";
            }else{
                frase = "su saldo te permite ser un cliente tipo A";
            }
        }

    }
    return frase;

}
int obtenerEdad (int a ){
    int operacion= 2018-a;
    return operacion;
}

int main()

{
    int opcion = 0,anioNacimiento = 0;
    double ingreseValor = 0;
    cout << "Ejercicio de funciones"<<endl;
    cout << "ingrese el anio de su nacicimiento)"<<endl;
    cin>>anioNacimiento;
    cout << "ingrese un opcion porfavor(opcion 1 sumar- opcion 2 restar)"<<endl;
    cin>>opcion;
    if (opcion == 1){
            cout << "ingrese el numero que desee  sumar "<<endl;
            cin>> ingreseValor;
            sumar_saldo(ingreseValor);
            cout << "El saldo es :"<<saldo << endl;
    }else{
        if (opcion == 2){
            cout << "ingrese el numero que desee  restar "<<endl;
            cin>> ingreseValor;
            restar_saldo(ingreseValor);
            cout <<" El saldo es:" <<saldo << endl;
        }else{
            cout << "Opcion ingresada incorrecta";

        }

    }
    cout << "Hola tu saldo es:" << saldo <<endl << obtenerTipoCuenta() <<endl;
    int edad = obtenerEdad(anioNacimiento);
    cout << "Su edad es:"<<edad<<endl;

    return 0;
}
