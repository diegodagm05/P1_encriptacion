//Proyecto1_Programación Orientada a Objetos- Desencriptación de código
//Diego_Guerrero-A01625199
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //Variables para los archivos
    ifstream archivoE;
    ofstream archivoS;
    string nombreE, nombreS;
    //Variables extras para operaciones, valores etc.
    int x, val1, val2, resultado=0;
    string linea1, code, operaciones, val1s, val2s;
    char comparacion[14];
    //Pedir al usuario los nombres de los archivos (E-S)
    cout<< "Ingrese el nombre del archivo de entrada, extensión .txt: ";
    cin>>nombreE;
    cout<< "Ingrese el nombre del archivo de salida, extensión .txt: ";
    cin>>nombreS;
    
    archivoE.open(nombreE.c_str());
    archivoS.open(nombreS.c_str());
    
    getline(archivoE, linea1); //Obtener el código a desencriptar
    for(int i=0; i<linea1.length(); i+=2) //Ciclo para guardar el código en un arreglo
    {
        code[i/2] = linea1[i];
        //cout<<code[i/2]; //Mostrar en consola el código capturado
    }
    //cout<<endl; //activar en caso de mostar código en consola
    while (getline(archivoE, operaciones))
    { 
        int i=0;
        while(i<operaciones.length())
        {   //Asignación de valores al código basado en su posición del arreglo
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
            
            archivoS<<operaciones[i]; //Insertar ops. al archivo
            //cout<<operaciones [i]; //Opción para imprimir en consola
            i++;
        }
        //Buscar un espacio para diferenciar los 2 valores
        x = operaciones.find(' ');
        val1s = operaciones.substr(0,x); //guardar en esta variable el primer valor
        val2s = operaciones.substr(x+2,operaciones.length()); //guardar en esta variable el segundo valor 
        //Cambiar valores de string a int
        val1 = stoi(val1s);
        val2 = stoi(val2s);
        
        //Verificar el operador en base a la posición x para distinguir la operacion a realizar
        if(operaciones[x+1]=='+') {resultado= val1+val2;}
        else if(operaciones[x+1]=='-') {resultado= val1-val2;}
        else if(operaciones[x+1]=='*') {resultado= val1*val2;}
        else if(operaciones[x+1]=='/') {resultado= val1/val2;}
        
        archivoS<<" = "<<resultado<<endl;
        //cout<<" = "<<resultado<<endl; //opcion para mostrar resultado en pantalla
    }
    
    archivoE.close();
    archivoS.close();
    return 0;  
} 
// Si se desea ver en consola el proceso y sus resultados, eliminar el
// comentario antes del cout en las lineas 31,33,55 y 73
