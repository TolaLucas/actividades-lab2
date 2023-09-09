#pragma once
#include <string>

class Empleado {
 public:
  void setApellido(const std::string &apellido);
  void setNombre(const std::string &nombre);
  void setEmail(const std::string &email);
  void setLegajo(int legajo);
  std::string getApellido() const;
  std::string getNombre() const;
  std::string getEmail() const;
  int getLegajo() const;
  std::string toString() const;

 protected:
  std::string _apellido;
  std::string _nombre;
  std::string _email;
  int _legajo;
};