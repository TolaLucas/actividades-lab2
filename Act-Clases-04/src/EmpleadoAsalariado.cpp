#include "EmpleadoAsalariado.h"

void EmpleadoAsalariado::setHonorarios(float salarioFijo) {
  _salarioFijo = salarioFijo;
}

float EmpleadoAsalariado::getSalarioFijo() const {
  return _salarioFijo;
}

std::string EmpleadoAsalariado::toString() const {
  return Empleado::toString() + "  " + std::to_string(_salarioFijo);
}