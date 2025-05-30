+++
date = '2025-02-21T10:20:50-08:00'
draft = false
title = 'Practica 4'
+++
## Primera Sesion

*Durante la primera sesión descargamos Prolog para poder utilizarlo y vimos acerca de la introduccion al lengaje de programacion **prolog***.

## Segunda Sesion

*Durante la segunda sesion vimos unos programas basicos utilizando prolog para que nos quedara mas claro y lo comprenderiamos de una mejor manera, dare un ejemplo de como es este lenguaje*.

```prolog
% Hechos
padre(juan, maria).
padre(juan, pedro).
padre(carlos, juan).

madre(ana, maria).
madre(ana, pedro).
madre(luisa, juan).

% Reglas
hijo(X, Y) :- padre(Y, X).
hijo(X, Y) :- madre(Y, X).

hermano(X, Y) :- 
    padre(Z, X), padre(Z, Y),
    madre(W, X), madre(W, Y),
    X \= Y.

```

## Tercera sesion

*Prolog se usa principalmente en aplicaciones donde la lógica, las relaciones y la inferencia son fundamentales, Para la tercera sesion vimos ejemplos de aplicacion de prolog, uno de estos seria:*

***Diagnosito Medico Basico***

```prolog
% Hechos: síntomas
sintoma(juan, fiebre).
sintoma(juan, tos).
sintoma(juan, dolor_cabeza).

% Reglas: diagnóstico
tiene_gripe(Persona) :-
    sintoma(Persona, fiebre),
    sintoma(Persona, tos),
    sintoma(Persona, dolor_cabeza).
```
