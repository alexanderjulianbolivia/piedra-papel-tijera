#include <iostream>
#include <cstdlib>
#include <ctime>
#include "jugador.h"


int determinarGanador(const Jugador& j1, const Jugador& j2) {
    int opcJ1 = j1.getOpcion().getOpcion();
    int opcJ2 = j2.getOpcion().getOpcion();

    if (opcJ1 == opcJ2) {
        return 0; 
    }
    else if ((opcJ1 == 1 && opcJ2 == 3) || (opcJ1 == 2 && opcJ2 == 1) || (opcJ1 == 3 && opcJ2 == 2)) {
        return 1; 
    }
    else {
        return 2; 
    }
}

int main() {

    Jugador jugador1, jugador2;

    int numPartidas;
    std::cout << "Ingrese el numero de partidas a jugar: ";
    std::cin >> numPartidas;

    for (int i = 0; i < numPartidas; ++i) {
        std::cout << "\nPartida " << i + 1 << std::endl;

        
        std::cout << "Turno del Jugador 1:\n";
        jugador1.elegirOpcion();
        std::cout << "Jugador 1 elige: " << jugador1.getOpcion().getOpcion() << std::endl;

        std::cout << "Turno del Jugador 2:\n";
        jugador2.elegirOpcion();
        std::cout << "Jugador 2 elige: " << jugador2.getOpcion().getOpcion() << std::endl;

        int resultado = determinarGanador(jugador1, jugador2);
        if (resultado == 0) {
            std::cout << "Empate\n";
        }
        else if (resultado == 1) {
            std::cout << "Jugador 1 gana\n";
            jugador1.setPuntaje(jugador1.getPuntaje() + 1);
        }
        else {
            std::cout << "Jugador 2 gana\n";
            jugador2.setPuntaje(jugador2.getPuntaje() + 1);
        }
    }


    std::cout << "\nPuntajes finales:\n";
    std::cout << "Jugador 1: " << jugador1.getPuntaje() << " puntos\n";
    std::cout << "Jugador 2: " << jugador2.getPuntaje() << " puntos\n";

    return 0;
}
