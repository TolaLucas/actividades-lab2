#pragma once
#include <string>

class Fecha {
 private:
  int _dia, _mes, _anio;
  int _diaSemana;
  void AgregarDia();
  void RestarDia();
  int diasDelMes(int mes, int anio);

 public:
  void setDia(int dia);
  void setMes(int mes);
  void setAnio(int anio);
  int getDia();
  int getMes();
  int getAnio();
  std::string getNombreDia();
  Fecha();
  Fecha(int dia, int mes, int anio);
  void AgregarDias(int dias);
  std::string toString();
};