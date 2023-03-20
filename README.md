# p4gr01lab0
Tarea grupal de Programacion 4 - FING

Universidad de la República | Facultad de Ingeniería | Instituto de Computación
Programación 4 - 2023
Laboratorio 0 :: Conceptos Básicos en C++

Tras implementar completamente la estructura y comportamiento descritos, es posible crear la
siguiente secuencia ejecutable en un main.
- a) Crear los siguientes objetos de la clase Libro (con el constructor con parámetros):
Nombre = Nacidos de la bruma: El imperio final
AñoComprado = 2022
Estado = Roto
Autor = Brandon Sanderson
Cantpaginas = 688
Programación 4 - 2023Universidad de la República | Facultad de Ingeniería | Instituto de Computación
Programación 4 - 2023Universidad de la República | Facultad de Ingeniería | Instituto de Computación
Nombre = Las Malas
AñoComprado = 2022
Estado = Nuevo
Autor = Camila Sosa Villada
Cantpaginas = 240
Nombre = El cocodrilo al que no le gustaba el agua
AñoComprado = 2016
Estado = Roto
Autor = Gemma Merino
Cantpaginas = 32
- b) Crear los siguientes objetos de la clase JuegoMesa (con el constructor con parámetros):
Nombre = Juego Uno
AñoComprado = 2022
Estado = Roto
EdadRecomendada = 7
CanJugadores = 10
Nombre = Mazo de Cartas
AñoComprado = 2019
Estado = Nuevo
EdadRecomendada = 7
CanJugadores = 4
Nombre = Dados
AñoComprado = 2020
Estado = Roto
EdadRecomendada = 2
CanJugadores = 6
- c) Consultar los objetos creados invocando la operación toString() en cada uno de ellos.
- d) Crear los siguientes objetos de la clase Niño (con el constructor con parámetros):
Nombre = María Laura
Edad = 10
Dirección = Nueva Palmira 1521
Teléfono = 099298190
Nombre = Alex
Edad = 5
Dirección = Humberto Primo 1501
Teléfono = 29094141
Programación 4 - 2023Universidad de la República | Facultad de Ingeniería | Instituto de Computación
- e) Registrar los siguientes préstamos (creando links de la relación en ambas direcciones)
●Niño = María LauraObjeto = Mazo de Cartas
●Niño = María LauraObjeto = Nacidos de la bruma: El imperio final
●Niño = María LauraObjeto = Dados
●Niño = AlexObjeto = Juego Uno
●Niño = AlexObjeto = El cocodrilo al que no le gustaba el agua
- f) Consultar los préstamos invocando la operación listarObjetosPrestados() para
cada uno de los niños.
- g) Consultar los objetos rotos recorriendo el conjunto de objetos de la clase Objeto y
generando elementos del datatype DTObjetoRoto para cada objeto roto. Es decir, si se
encuentra un objeto cuyo valor del atributo Estado es igual a Roto, se construye un
datavalue del datatype DTObjetoRoto con el nombre del objeto. Además, si el objeto está
asociado a un niño (o sea, que está prestado), el campo Prestado del datavalue se pone en
true (false en caso contrario) y se recupera el nombre del objeto niño vinculado que se
almacena en el campo NombreNiño del datavalue.
- h) Eliminar un objeto de la clase Objeto. Para ello es necesario, no solo invocar al destructor
del objeto, sino también eliminar todos los links de la relación que vinculen a ese objeto con
un niño. Por ejemplo, si se elimina el objeto Objeto = Juego Uno, al consultar los objetos
prestados de Alex, el objeto no debe aparecer. Tampoco debe aparecer si se consulta
nuevamente la lista de objetos rotos.

Se pide:
1. Implementar todas las clases (incluyendo sus atributos, pseudo-atributos, constructores,
destructores, getters y setters), enumerados y datatypes que aparecen en el diagrama.
2. Sobrecargar el operador de inserción de flujo (<<) en un objeto de tipo std::ostream.
Este operador debe permitir “imprimir” todos los datos del datatype DTObjetosRotos,
siguiendo un formato similar al siguiente:
NombreObjeto, Prestado SI/NO, NombreNiño (si Prestado SI)
Por ejemplo: Mazo de Cartas, Prestado SI, María Laura
Las Malas, Prestado NO
3. Implementar la operación toString() en las clases Objeto, Libro y JuegoMesa.
4. Implementar la operación listarObjetosPrestados() en la clase Niño.
Programación 4 - 2023Universidad de la República | Facultad de Ingeniería | Instituto de Computación
5. Implementar un método main que defina un conjunto de Objeto y un conjunto de Niño y
que realice la secuencia ejecutable definida previamente, en donde las actividades de consulta
de la secuencia (c, f, g y h) deben tener salida a consola, incluidas las posteriores a la
eliminación de un objeto. 
