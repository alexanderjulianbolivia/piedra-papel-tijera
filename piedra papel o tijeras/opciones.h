#pragma once
class Opciones {
private:
    int opcion;

public:
    Opciones(int op = 0) : opcion(op) {}

    int getOpcion() const {
        return opcion;
    }

    void setOpcion(int op) {
        opcion = op;
    }
};

