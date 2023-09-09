#pragma once
#include "Empleado.h"

class EmpleadoPorHora : public Empleado {
 public:
  void setValorHora(float valorHora);
  void setHorasTrabajadas(float horasTrabajadas);
  float getValorHora() const;
  int getHorasTrabajadas() const;
  std::string toString() const;
  float getHonorarios() const;

 private:
  float _valorHora;
  int _horasTrabajadas;
};