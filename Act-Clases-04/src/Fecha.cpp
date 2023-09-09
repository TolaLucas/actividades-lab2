#include "Fecha.h"

#include <ctime>
#include <iostream>

// PRIVATE
void Fecha::AgregarDia() {
  if (_dia == diasDelMes(_mes, _anio)) {
    _dia = 1;
    if (_mes == 12) {
      _mes = 1;
      _anio++;
    } else {
      _mes++;
    }
  } else {
    _dia++;
  }
}

void Fecha::RestarDia() {
  if (_dia == 1) {
    if (_mes == 1) {
      _dia = diasDelMes(12, _anio - 1);
      _mes = 12;
      _anio--;
    } else {
      _dia = diasDelMes(_mes - 1, _anio);
      _mes--;
    }
  } else {
    _dia--;
  }
}

int Fecha::diasDelMes(int mes, int anio) {
  int diasMes = 31;
  if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
    diasMes = 30;
  } else if (mes == 2) {
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
      diasMes = 29;
    }
  } else {
    diasMes = 28;
  }

  return diasMes;
}

// PUBLIC
// Setters
void Fecha::setDia(int dia) {
  if (dia > 0 && dia <= 31) {
    _dia = dia;
  } else {
    _dia = 1;
  }
}
void Fecha::setMes(int mes) {
  if (mes > 0 && mes <= 12) {
    _mes = mes;
  } else {
    _mes = 1;
  }
}
void Fecha::setAnio(int anio) {
  if (anio > 1900) {
    _anio = anio;
  } else {
    _anio = 2023;
  }
}

// Getters
int Fecha::getDia() {
  return _dia;
}
int Fecha::getMes() {
  return _mes;
}
int Fecha::getAnio() {
  return _anio;
}

// Constructor por defecto
Fecha::Fecha() {
  // Fecha del sistema - https://en.cppreference.com/w/c/chrono/tm
  time_t t = time(NULL);
  struct tm *f = localtime(&t);
  _dia = f->tm_mday;
  _mes = f->tm_mon + 1;
  _anio = f->tm_year + 1900;
  _diaSemana = f->tm_wday;
}

// Constructor por parametros
Fecha::Fecha(int dia, int mes, int anio) {
  setDia(dia);
  setMes(mes);
  setAnio(anio);
  _diaSemana = -1;
}

void Fecha::AgregarDias(int dias) {
  if (dias > 0) {
    for (int i = 0; i < dias; i++) {
      AgregarDia();
    }

  } else if (dias < 0) {
    for (int i = 0; i > dias; i--) {
      RestarDia();
    }
  }
}

std::string Fecha::toString() {
  // validar si dia y mes es menor a 10
  std::string valorAdevolver;

  if (_dia < 10 && _mes > 9) {
    valorAdevolver = "0" + std::to_string(_dia) + "/" + std::to_string(_mes) + "/" + std::to_string(_anio);

  } else if (_dia > 9 && _mes < 10) {
    valorAdevolver = std::to_string(_dia) + "/" + "0" + std::to_string(_mes) + "/" + std::to_string(_anio);

  } else if (_dia < 9 && _mes < 9) {
    valorAdevolver = "0" + std::to_string(_dia) + "/" + "0" + std::to_string(_mes) + "/" + std::to_string(_anio);

  } else {
    valorAdevolver = std::to_string(_dia) + "/" + std::to_string(_mes) + "/" + std::to_string(_anio);
  }

  return valorAdevolver;
}

std::string Fecha::getNombreDia() {
  std::string nombre[7] = {"Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
  if (_diaSemana >= 0 && _diaSemana <= 6) {
    return nombre[_diaSemana];
  }
  return "";
}
