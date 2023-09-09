#include "Empleado.h"

void Empleado::setApellido(const std::string &apellido) {
  _apellido = apellido;
}

void Empleado::setNombre(const std::string &nombre) {
  _nombre = nombre;
}

void Empleado::setEmail(const std::string &email) {
  _email = email;
}

void Empleado::setLegajo(int legajo) {
  _legajo = legajo;
}

std::string Empleado::getApellido() const {
  return _apellido;
}

std::string Empleado::getNombre() const {
  return _nombre;
}

std::string Empleado::getEmail() const {
  return _email;
}

int Empleado::getLegajo() const {
  return _legajo;
}

std::string Empleado::toString() const {
  return _apellido + " " + _nombre + " " + _email + " " +
         std::to_string(_legajo);
}