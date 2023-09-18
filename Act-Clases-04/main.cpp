#include <Empleado.h>

#include <iostream>

#include "ProgramaDos.h"
#include "ProgramaUno.h"

int main() {
  // Empleado emp;

  // emp.setApellido("Monqui");
  // emp.setNombre("Rosquito");
  // emp.setEmail("nonqui@monkeymail.com");
  // emp.setLegajo(12523);

  // std::cout << "\n" << emp.toString() << std::endl;
  // std::cin.get();
  ProgramaUno prog;
  ProgramaDos prog2;
  int opcion;

  std::cout << std::endl;
  std::cout << "Bienvenido al sistema de gestión de empleados" << std::endl;
  std::cout << "-------------------------------------------" << std::endl;
  std::cout << "Por favor elija una opción: " << std::endl;
  std::cout << "1. Cálculo de honorarios de un empleado" << std::endl;
  std::cout << "2. Nómina de empleados empleada por legajo" << std::endl;

  std::cout << "Ingrese una opción: ";
  std::cin >> opcion;

  switch (opcion) {
    case 1:  // PROGRAMA UNO
      prog.setTitulo("Cálculo de honorarios de un empleado");
      prog.Ejecutar();
      break;
    case 2:
      // PROGRAMA DOS
      prog2.setTitulo("Nómina de empleados empleada por legajo");
      prog2.Ejecutar();
      break;
  }

  system("pause");
  return 0;
}