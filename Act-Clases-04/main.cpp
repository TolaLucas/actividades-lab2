#include <Empleado.h>

#include <iostream>

#include "ProgramaUno.h"

int main() {
  Empleado emp;

  emp.setApellido("Monqui");
  emp.setNombre("Rosquito");
  emp.setEmail("nonqui@monkeymail.com");
  emp.setLegajo(12523);

  std::cout << "\n" << emp.toString() << std::endl;
  std::cin.get();
  return 0;
}