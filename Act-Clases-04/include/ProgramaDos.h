#pragma once

#include "EmpleadoAsalariado.h"
#include "EmpleadoAsociado.h"
#include "EmpleadoPorComision.h"
#include "EmpleadoPorHora.h"

class ProgramaDos {
 public:
  void Ejecutar();
  void setTitulo(const std::string &titulo);
  std::string getTitulo() const;

 private:
  std::string _titulo;
  EmpleadoAsalariado crearEmpleadoAsalariado() const;
  EmpleadoPorHora crearEmpleadoPorHora() const;
  EmpleadoPorComision crearEmpleadoPorComision() const;
  EmpleadoAsociado crearEmpleadoAsociado() const;
};