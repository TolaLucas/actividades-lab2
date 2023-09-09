#include "EmpleadoPorHora.h"

void EmpleadoPorHora::setValorHora(float valorHora) {
  _valorHora = valorHora;
}

void EmpleadoPorHora::setHorasTrabajadas(float horasTrabajadas) {
  _horasTrabajadas = horasTrabajadas;
}

float EmpleadoPorHora::getValorHora() const {
  return _valorHora;
}

int EmpleadoPorHora::getHorasTrabajadas() const {
  return _horasTrabajadas;
}

std::string EmpleadoPorHora::toString() const {
  return Empleado::toString() + "  " + std::to_string(_horasTrabajadas) + "  " +
         std::to_string(_valorHora);
}

float EmpleadoPorHora::getHonorarios() const {
  return _horasTrabajadas * _valorHora;
}