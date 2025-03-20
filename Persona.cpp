#include <iostream>
#include "Persona.h"

Persona::Persona(int edad){
    this -> edad = edad;
}

void Persona::setEdad(int edad){
    this -> edad = edad;
}

int Persona::getEdad(){
    return edad;
}

Persona::~Persona() {
    std::cout << "Destruyendo una persona xd." << std::endl;
}