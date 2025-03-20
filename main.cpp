#include <iostream>
#include "Persona.h"
using namespace std;

int main()
{
    Persona* persona1 = new Persona(21);
    
    cout<< "La edad del señor es: " << persona1 -> getEdad() << endl;
    
    persona1 ->setEdad(69);

    cout<< "La edad del viejo ahora es de: " << persona1 -> getEdad() << endl;

    cout<< "Gracias."<< endl;
    
    delete persona1;
    system("pause");
    return 0;
    
}
