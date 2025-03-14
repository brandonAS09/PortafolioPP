+++
date = '2025-02-21T10:20:40-08:00'
draft = false
title = 'Practica 1: Elementos básicos de los lenguajes de programación'
+++
# Biblioteca.c
*El programa que analizaremos es un sistema para una biblioteca programado en **Lenguaje C**,el primer codigo que analizaremos en esta practica sera el de **biblioteca.c** el cual es el programa principal de este sistema de bibliotecas*
## Nombres
*Los nombres se utilizan para identificar variables, funciones, tipos de datos, estructuras, etc. En este código, ejemplos de nombres son **library**, **members**, **book_t**, **genre_t**, **addBook**, **findBookById**, entre otros.*
## Objetos
*Los objetos son instancias de estructuras, como **book_t** y **member_t**. Son contenedores de datos que agrupan atributos relacionados. Por ejemplo, un libro está representado por un objeto de tipo **book_t***.
## Entornos
*Un entorno se refiere al contexto en el que se evalúan las expresiones. En este código, el entorno sería el ámbito en el que las variables están definidas, como las variables globales o las variables locales dentro de cada función.*
## Bloques
*Los bloques se delimitan con **{}**. Cada función está contenida en un bloque de código. Por ejemplo:*
```C
void addBook(book_t **library, int* count) {
    // Bloque de código de la función
}
```
## Alcance
*El alcance se refiere a la visibilidad y duración de las variables. En este caso:*

* *Variables locales como **bookFound** y **memberFound** son visibles solo dentro de la función en la que se definen.*
* *Variables globales como **library** y **members** son accesibles en todo el programa.*
## Administración de memoria
*La administración de memoria está relacionada con la asignación y liberación de memoria. El código usa **malloc** para asignar memoria dinámicamente y **free** para liberar memoria cuando ya no es necesaria.
También se manejan las reasignaciones con *realloc* para ajustar el tamaño de los arreglos, como en el caso de los libros prestados a un miembro.*
## Expresiones
*Las expresiones son combinaciones de valores, variables, operadores y funciones que producen un resultado. Ejemplo de una expresión en el código:*
```C
current->quantity--;
```
## Comandos
*Los comandos en el código incluyen las instrucciones que el programa sigue, como **printf()**, **scanf()**, **malloc()**, **free()**, etc. Estas son las operaciones que ejecutan acciones en el sistema.*
## Secuencia
*La secuencia es la ejecución de instrucciones de manera lineal, una después de otra. En el programa, por ejemplo, las acciones que el usuario selecciona en el menú se ejecutan de manera secuencial según la opción que elija el usuario.*
## Selección
*La selección se refiere a la ejecución de un bloque de código dependiendo de una condición. Ejemplo de selección:*
```C
if(bookFound && memberFound)
{
    // Código si la condición es verdadera
} 
else
{
    // Código si la condición es falsa
}
```
## Recursión
*La recursión ocurre cuando una función se llama a sí misma. En este código, la función *displayBooksRecursive** es recursiva:*
```c
void displayBooksRecursive(book_t *library) {
    if (!library) {
        return;
    }
    // Llamada recursiva
    displayBooksRecursive(library->next);
}

```
## Subprogramas
*Los subprogramas son bloques de código que realizan tareas específicas y se invocan desde otras partes del programa. Las funciones como **addBook()**, **issueBook()**, y **displayBooks()** son ejemplos de subprogramas en el código.*
## Tipos de datos
*Los tipos de datos definen qué tipo de valores pueden almacenar las variables. En el código, se utilizan tipos como **int**, **char[]**, **enum** y **struct**.*
