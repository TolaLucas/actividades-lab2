#include "ProgramaDos.h"

#include <iostream>

void ProgramaDos::Ejecutar() {
  int cantidadEmpleados;
  Empleado *vecEmpleado = nullptr;

  std::cout << "Cuantos empleados desea cargar? (se puede cargar de 1 a 10 "
               "empleados solamente) "
            << std::endl;
  std::cin >> cantidadEmpleados;

  vecEmpleado = new Empleado[cantidadEmpleados];
  if (vecEmpleado == nullptr) {
    std::cout << "No se pudo reservar memoria para el vector de empleados"
              << std::endl;
    return;
  }
  for (int i = 0; i < cantidadEmpleados; i++) {
    int tipoEmpleado;
    std::cout << "Ingrese el tipo de empleado (1-4) ";
    std::cin >> tipoEmpleado;
    switch (tipoEmpleado) {
      case 1:
        vecEmpleado[i] = crearEmpleadoAsalariado();
        break;
      case 2:
        vecEmpleado[i] = crearEmpleadoPorHora();
        break;
      case 3:
        vecEmpleado[i] = crearEmpleadoPorComision();
        break;
      case 4:
        vecEmpleado[i] = crearEmpleadoAsociado();
        break;
      default:
        std::cout << "Tipo de empleado invalido" << std::endl;
        break;
    }
  }
  //  Muestra los datos de los empleados
  // for (int i = 0; i < cantidadEmpleados; i++) {
  //   std::cout << vecEmpleado[i].toString() << std::endl;
  // }

  // ordenar empleados por legajo (ascendente)
  std::cout << std::endl
            << "Ordenando empleados por legajo (ascendente)" << std::endl;
  for (int i = 0; i < cantidadEmpleados - 1; i++) {
    for (int j = i + 1; j < cantidadEmpleados; j++) {
      if (vecEmpleado[i].getLegajo() > vecEmpleado[j].getLegajo()) {
        Empleado aux = vecEmpleado[i];
        vecEmpleado[i] = vecEmpleado[j];
        vecEmpleado[j] = aux;
      }
    }
  }

  // Muestra los datos de los empleados ordenados
  for (int i = 0; i < cantidadEmpleados; i++) {
    std::cout << vecEmpleado[i].toString() << std::endl;
  }

  delete[] vecEmpleado;
}

void ProgramaDos::setTitulo(const std::string &titulo) {
  _titulo = titulo;
}
std::string ProgramaDos::getTitulo() const {
  return _titulo;
}

EmpleadoAsalariado ProgramaDos::crearEmpleadoAsalariado() const {
  EmpleadoAsalariado aux;
  int legajo;
  std::string apellido, nombre, email;

  std::cout << "Ingrese nro de legajo: ";
  std::cin >> legajo;
  aux.setLegajo(legajo);

  std::cout << "Ingrese apellido: ";
  std::cin >> apellido;
  aux.setApellido(apellido);

  std::cout << "Ingrese nombre: ";
  std::cin >> nombre;
  aux.setNombre(nombre);

  std::cout << "Ingrese email: ";
  std::cin >> email;
  aux.setEmail(email);
  return aux;
}
EmpleadoPorHora ProgramaDos::crearEmpleadoPorHora() const {
  EmpleadoPorHora aux;
  int legajo;
  std::string apellido, nombre, email;

  std::cout << "Ingrese nro de legajo: ";
  std::cin >> legajo;
  aux.setLegajo(legajo);

  std::cout << "Ingrese apellido: ";
  std::cin >> apellido;
  aux.setApellido(apellido);

  std::cout << "Ingrese nombre: ";
  std::cin >> nombre;
  aux.setNombre(nombre);

  std::cout << "Ingrese email: ";
  std::cin >> email;
  aux.setEmail(email);
  return aux;
}
EmpleadoPorComision ProgramaDos::crearEmpleadoPorComision() const {
  EmpleadoPorComision aux;
  int legajo;
  std::string apellido, nombre, email;

  std::cout << "Ingrese nro de legajo: ";
  std::cin >> legajo;
  aux.setLegajo(legajo);

  std::cout << "Ingrese apellido: ";
  std::cin >> apellido;
  aux.setApellido(apellido);

  std::cout << "Ingrese nombre: ";
  std::cin >> nombre;
  aux.setNombre(nombre);

  std::cout << "Ingrese email: ";
  std::cin >> email;
  aux.setEmail(email);
  return aux;
}
EmpleadoAsociado ProgramaDos::crearEmpleadoAsociado() const {
  EmpleadoAsociado aux;
  int legajo;
  std::string apellido, nombre, email;

  std::cout << "Ingrese nro de legajo: ";
  std::cin >> legajo;
  aux.setLegajo(legajo);

  std::cout << "Ingrese apellido: ";
  std::cin >> apellido;
  aux.setApellido(apellido);

  std::cout << "Ingrese nombre: ";
  std::cin >> nombre;
  aux.setNombre(nombre);

  std::cout << "Ingrese email: ";
  std::cin >> email;
  aux.setEmail(email);
  return aux;
}