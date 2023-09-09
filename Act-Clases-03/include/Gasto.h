#pragma once
#include "Fecha.h"

class Gasto {
 public:
  private:
  int _idTransaccion;
  std::string _descripcion;
  Fecha _fecha;
  int _idCategoria;
  int _idMetodoPago;
  std::string _establecimiento;
  float _monto;
  bool _estado;
};