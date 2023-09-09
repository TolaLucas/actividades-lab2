#include <iostream>

#include "Sistema.h"

int main() {
  Sistema sistema;

  sistema.cargarTransacciones();

  sistema.mostrarGastos();        // Punto A
  sistema.mostrarMayorIngreso();  // Punto B
  sistema.mostrarSaldoFinal();    // Punto C

  return 0;
}