#pragma once
#include "opciones.h"
#include <iostream>
#include <cstdlib>

class Jugador {
private:
    int puntaje;
    Opciones opcion;

public:
    Jugador(int p = 0) : puntaje(p) {}

    int getPuntaje() const { return puntaje; }
    void setPuntaje(int p) { puntaje = p; }

    Opciones getOpcion() const { return opcion; }
    void setOpcion(const Opciones& op) { opcion = op; }

    void elegirOpcion() {
        int opcionElegida;
        std::cout << "Elige una opcion:\n1. Piedra\n2. Papel\n3. Tijera\n";
        std::cin >> opcionElegida;

        while (opcionElegida < 1 || opcionElegida > 3) {
            std::cout << "Opción invalida. Elige nuevamente:\n";
            std::cin >> opcionElegida;
        }

        setOpcion(Opciones(opcionElegida));
    }
};

