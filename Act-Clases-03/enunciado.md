### Ejemplo con Clases #3
#### Resolver utilizando Clases en C++

Hacer un sistema que permita registrar Gastos e Ingresos de manera que se pueda hacer un seguimiento de las finanzas personales.

Los gastos en el sistema deben permitir registrar:
- ID único de transacción (entero)
- Descripción del gasto (texto)
- Fecha del gasto
- ID de Categoría del Gasto (entero)
- ID del Método de pago (entero)
- Establecimiento (texto)
- Importe (float)
- Estado (bool)

En cambio, los ingresos en el sistema deben permitir registrar:
- ID único de transacción (entero)
- Descripción del ingreso (texto)
- Fecha del ingreso
- ID de Categoría del Ingreso (entero)
- Tipo de Ingreso (1 - Regular, 2 - Extraordinario)
- Referencia externa (texto)
- Importe (float)
- Estado (bool)

El prototipo del sistema debe permitir registrar 5 gastos y 5 ingresos. Al finalizar el programa se debe listar:
- Todos los gastos del mes en curso. Listando todos los atributos de los mismos.
- El ingreso más redituable. Listando todos los atributos del mismo.
- El saldo total entre todos los registros. Indicando claramente si el saldo es déficit o superávit.

Analizar la clase Gasto y la clase Ingreso resultantes:
1. ¿Tienen atributos en común?
2. ¿Pueden generalizarse esos atributos en común en una entidad superior o padre?  
3. ¿Cómo se llamaría?
