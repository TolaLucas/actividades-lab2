#include "ProgramaUno.h"

#include <iostream>

std::string ProgramaUno::getTitulo() const {
  return _titulo;
}

void ProgramaUno::setTitulo(const std::string &titulo) {
  _titulo = titulo;
}

EmpleadoAsalariado ProgramaUno::crearEmpleadoAsalariado() const {
  EmpleadoAsalariado aux;
  aux.setLegajo(14233);
  aux.setApellido("Pepinillo");
  aux.setNombre("Luis");
  aux.setEmail("pepiluis@gmail.com");
  aux.setSalarioFijo(354000);
  return aux;
}
EmpleadoPorHora ProgramaUno::crearEmpleadoPorHora() const {
  EmpleadoPorHora aux;
  aux.setLegajo(16342);
  aux.setApellido("Monqui");
  aux.setNombre("Oustin");
  aux.setEmail("ostinmonkey@gmail.com");
  aux.setValorHora(1200);
  aux.setHorasTrabajadas(40);
  return aux;
}
EmpleadoPorComision ProgramaUno::crearEmpleadoPorComision() const {
  EmpleadoPorComision aux;
  aux.setLegajo(10021);
  aux.setApellido("Neguk");
  aux.setNombre("Nehuen");
  aux.setEmail("memo@gmail.com");
  aux.setTotalVendido(233900);
  aux.setComision(25);
  return aux;
}
EmpleadoAsociado ProgramaUno::crearEmpleadoAsociado() const {
  EmpleadoAsociado aux;
  aux.setLegajo(14233);
  aux.setApellido("Loquillo");
  aux.setNombre("Jaimi");
  aux.setEmail("jaimito@gmail.com");
  aux.setSalarioFijo(245000);
  aux.setAnioIngreso(2016);
  return aux;
}

// PROGRAMA UNO
void ProgramaUno::Ejecutar() {
  int tipoEmpleado;
  std::cout << std::endl;
  std::cout << _titulo << std::endl;
  std::cout << "-------------------------------------------" << std::endl;
  std::cout << "Ingresar el tipo de empleado (1-4) ";
  std::cin >> tipoEmpleado;

  std::string datosEmpleado;
  float honorarios;

  /*
  MenuTipoEmpleado menu;
  tipoEmpleado = menu.mostrar();
  */

  switch (tipoEmpleado) {
    case 1: {
      EmpleadoAsalariado e = crearEmpleadoAsalariado();
      datosEmpleado = e.toString();
      honorarios = e.getHonorarios();
    } break;
    case 2: {
      EmpleadoPorHora e = crearEmpleadoPorHora();
      datosEmpleado = e.toString();
      honorarios = e.getHonorarios();
    } break;
    case 3: {
      EmpleadoPorComision e = crearEmpleadoPorComision();
      datosEmpleado = e.toString();
      honorarios = e.getHonorarios();
    } break;
    case 4: {
      EmpleadoAsociado e = crearEmpleadoAsociado();
      datosEmpleado = e.toString();
      honorarios = e.getHonorarios();
    } break;
  }

  std::cout << datosEmpleado << std::endl << honorarios << std::endl;
}