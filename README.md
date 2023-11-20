# Piratas_del_Caribe
Ejemplo de programación orientada a objetos basado en "Piratas del Caribe".
**Hecho por Ivan Aguilar.**

_Colaboradores: Joan Aneas (@joananeas)__

## Descripción
Este programa simula la creación y gestión de tripulaciones piratas, oficiales de la marina y sus respectivas naves en un contexto inspirado en la saga cinematográfica "Piratas del Caribe". Utiliza la programación orientada a objetos para representar diferentes personajes y naves con atributos y comportamientos específicos.

## Clases Principales
- `cPersona`: Clase base de la que heredan todos los personajes, contiene el nombre del personaje.
- `cSiervos`: Deriva de `cPersona`, representa a los siervos de la marina con un cargo específico.
- `cPirata`: También hereda de `cPersona`, representa a los piratas y añade un atributo de recompensa por su captura.
- `cPirataMaldito`: Una especialización de `cPersona` que incluye un estado que determina si el pirata tiene apariencia de zombi.
- `cNave`: Una clase genérica que representa una nave y contiene un capitán, un nombre y una tripulación.

## Funcionalidades
- Crear instancias de piratas, siervos y piratas malditos con atributos personalizados.
- Asignar tripulaciones a naves y establecer un capitán para cada una.
- Mostrar los atributos de cada miembro de la tripulación y cambiar el estado de los piratas malditos (apariencia de zombi).

## Uso
1. Instanciar los personajes y tripulaciones.
2. Crear las naves asignando un capitán y una tripulación.
3. Invocar métodos para mostrar y modificar los atributos de los personajes y tripulaciones.

## Ejemplo de Implementación
```cpp
cPirata jack("Jack Sparrow", 100000);
cSiervos comodoro("James Norrington", "Comodoro");
cPirataMaldito barbossa("Hector Barbosa");

cNave<cPirata>Interceptor(jack, "El Interceptor", tripulacion_jack);
cNave<cPirataMaldito>PerlaNegra(barbossa, "La perla negra", tripulacion_barbosa);
