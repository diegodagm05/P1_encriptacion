#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream archivoE;
    ofstream archivoS;
    string nombreE, nombreS;
    
    string linea1;
    string code;
    
    cout<< "Ingrese el nombre del archivo de entrada, extensión .txt: ";
    cin>>nombreE;
    cout<< "Ingrese el nombre del archivo de salida, extensión .txt: ";
    cin>>nombreS;
    
    archivoE.open(nombreE);
    archivoS.open(nombreS);
    
    getline(archivoE, linea1);
    
    for(int i=0; i<linea1.length(); i+=2)
    {
        code[i/2] = linea1[i];
        cout<<code[i/2];
    }
    
    archivoE.close();
    archivoS.close();
    return 0;
}
