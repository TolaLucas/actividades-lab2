#include "Sistema.h"

#include <iostream>
#include <string>

#include "Gasto.h"

void Sistema::cargarTransacciones() {
  for (int i = 0; i < 5; i++) {
    _gastos[i] = cargarGasto();
    // _gastos[i].cargar();
  }
}

void Sistema::mostrarGastos() {
  for (int i = 0; i < 5; i++) {
    std::cout << _gastos[i].toString() << std::endl;
  }
}

void Sistema::mostrarMayorIngreso() {
}

void Sistema::mostrarSaldoFinal() {
}

Gasto Sistema::cargarGasto() {
  int idTransaccion, dia, mes, anio, idCategoria, idMetodoPago;
  std::string descripcion, establecimiento;
  float importe;
  bool estado;

  std::cout << "Ingrese ID de transaccion: ";
  std::cin >> idTransaccion;

  std::cout << "Ingrese descripcion: ";
  std::cin.ignore();
  std::getline(std::cin, descripcion);

  std::cout << "Ingrese Fecha del gasto: ";
  std::cin >> dia;
  std::cin >> mes;
  std::cin >> anio;

  std::cout << "Ingrese categoria: ";
  std::cin >> idCategoria;

  std::cout << "Ingrese forma de pago: ";
  std::cin >> idMetodoPago;

  std::cout << "Ingrese establecimiento: ";
  std::cin.ignore();
  std::getline(std::cin, establecimiento);

  std::cout << "Ingrese importe: ";
  std::cin >> importe;

  estado = true;

  return Gasto(idTransaccion, descripcion, Fecha(dia, mes, anio), idCategoria,
               idMetodoPago, establecimiento, importe, estado);
}