#include "EmpleadoPorComision.h"

void EmpleadoPorComision::setTotalVendido(float totalVendido) {
  _totalVendido = totalVendido;
}

void EmpleadoPorComision::setComision(float comision) {
  _comision = comision;
}

float EmpleadoPorComision::getTotalVendido() const {
  return _totalVendido;
}

float EmpleadoPorComision::getComision() const {
  return _comision;
}

float EmpleadoPorComision::getHonorarios() const {
  return _comision / 100 * _totalVendido;
}

std::string EmpleadoPorComision::toString() const {
  return Empleado::toString() + " " + std::to_string(getHonorarios());
}