#include "EmpleadoAsalariado.h"

void EmpleadoAsalariado::setSalarioFijo(float salarioFijo) {
  _salarioFijo = salarioFijo;
}

float EmpleadoAsalariado::getHonorarios() const {
  return _salarioFijo;
}

std::string EmpleadoAsalariado::toString() const {
  return Empleado::toString() + "  " + std::to_string(_salarioFijo);
}