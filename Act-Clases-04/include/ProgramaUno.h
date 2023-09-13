#pragma once

#include "EmpleadoAsalariado.h"
#include "EmpleadoAsociado.h"
#include "EmpleadoPorComision.h"
#include "EmpleadoPorHora.h"

class ProgramaUno {
 public:
  void Ejecutar();
  std::string getTitulo() const;
  void setTitulo(const std::string &titulo);

 private:
  std::string _titulo;
  EmpleadoAsalariado crearEmpleadoAsalariado() const;
  EmpleadoPorHora crearEmpleadoPorHora() const;
  EmpleadoPorComision crearEmpleadoPorComision() const;
  EmpleadoAsociado crearEmpleadoAsociado() const;
};