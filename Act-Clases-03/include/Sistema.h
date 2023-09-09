#pragma once;
#include "Gasto.h"
#include "Ingreso.h"

class Sistema {
 public:  // interfaz: parte publica del objeto
  void cargarTransacciones();
  void mostrarGastos();
  void mostrarMayorIngreso();
  void mostrarSaldoFinal();
  Gasto cargarGasto();

 private:
  Gasto _gastos[5];
  Ingreso _ingresos[5];
};