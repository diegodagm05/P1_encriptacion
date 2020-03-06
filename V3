#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream archivoE;
    ofstream archivoS;
    string nombreE, nombreS;
    
    string linea1, code, operaciones;
    
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
    }
    cout<<endl;
    while (getline(archivoE, operaciones))
    { 
        int i=0;
        while(i<operaciones.length())
        {
            if(operaciones[i]==code[0]) { operaciones[i]='0'; }
            else if(operaciones[i]==code[1]) { operaciones[i]='1'; }
            else if(operaciones[i]==code[2]) { operaciones[i]='2'; }
            else if(operaciones[i]==code[3]) { operaciones[i]='3'; }
            else if(operaciones[i]==code[4]) { operaciones[i]='4'; }
            else if(operaciones[i]==code[5]) { operaciones[i]='5'; }
            else if(operaciones[i]==code[6]) { operaciones[i]='6'; }
            else if(operaciones[i]==code[7]) { operaciones[i]='7'; }
            else if(operaciones[i]==code[8]) { operaciones[i]='8'; }
            else if(operaciones[i]==code[9]) { operaciones[i]='9'; }
            else if(operaciones[i]==code[10]) { operaciones[i]='+'; }
            else if(operaciones[i]==code[11]) { operaciones[i]='-'; }
            else if(operaciones[i]==code[12]) { operaciones[i]='*'; }
            else if(operaciones[i]==code[13]) { operaciones[i]='/'; }
            
            archivoS<<operaciones [i];
            i++;
        
        }
        archivoS<<" = "<<endl;
    }
    
    archivoE.close();
    archivoS.close();
    return 0;  
}

