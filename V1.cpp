#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream archivoE;
    ofstream archivoS;
    string nombreE, nombreS;
   
    char caract;
    string val1, val2;
    
    cout<< "Ingrese el nombre del archivo de entrada, extensión .txt: ";
    cin>>nombreE;
    cout<< "Ingrese el nombre del archivo de salida, extensión .txt: ";
    cin>>nombreS;
    archivoE.open(nombreE);
    archivoS.open(nombreS);
    while(archivoE>>caract)
    {
        
        {
            if(caract =='B')
            { caract='0'; }
            else if(caract=='y')
            { caract='1'; }
            else if(caract=='/')
            { caract='2'; }
            else if(caract=='8')
            { caract='3'; }
            else if(caract=='T')
            { caract='4'; }
            else if(caract=='&')
            { caract='5'; }
            else if(caract=='Q')
            { caract='6'; }
            else if(caract=='E')
            { caract='7'; }
            else if(caract=='P')
            { caract='8'; }
            else if(caract=='F')
            { caract='9'; }
            else if(caract=='C')
            { caract='+'; }
            else if(caract=='c')
            { caract='-'; }
            else if(caract=='#')
            { caract='*'; }
            else if(caract=='@')
            { caract='/'; }
            
            cout<<endl;
        }
        archivoS<< caract ;
    }
    
    archivoE.close();
    archivoS.close();
    return 0;
}
