#pragma once
#include "Empleado.h"

class EmpleadoPorComision : public Empleado {
 public:
  void setTotalVendido(float totalVendido);
  void setComision(float comision);
  float getTotalVendido() const;
  float getComision() const;
  float getHonorarios() const;
  std::string toString() const;

 private:
  float _totalVendido;
  float _comision;
};