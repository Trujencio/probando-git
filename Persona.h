#pragma once
#include <iostream>

class Persona
{
private:
    int edad;
public:
    Persona(int edad);
    void setEdad(int edad);
    int getEdad();
    
    ~Persona();
};


