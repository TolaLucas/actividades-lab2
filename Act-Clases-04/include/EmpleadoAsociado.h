#pragma once
#include "EmpleadoAsalariado.h"

class EmpleadoAsociado : public EmpleadoAsalariado {
 public:
  void setAnioIngreso(int anioIngreso);
  int getAnioIngreso() const;
  float getHonorarios() const;
  std::string toString() const;

 private:
  int _anioIngreso;
  int getAntiguedad() const;
};