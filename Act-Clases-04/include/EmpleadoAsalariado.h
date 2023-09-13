#pragma once
#include "Empleado.h"

class EmpleadoAsalariado : public Empleado {
 public:
  void setSalarioFijo(float salarioFijo);
  float getHonorarios() const;
  std::string toString() const;

 protected:
  float _salarioFijo;
};