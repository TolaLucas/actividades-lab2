#pragma once
#include "Empleado.h"

class EmpleadoAsalariado : public Empleado {
 public:
  void setHonorarios(float salarioFijo);
  float getSalarioFijo() const;
  std::string toString() const;

 protected:
  float _salarioFijo;
};