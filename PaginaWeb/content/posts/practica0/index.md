+++
date = '2025-02-21T10:18:36-08:00'
draft = false
title = 'Practica 0: Markdown, Git y Hugo'
+++
<!-- Los comentarios se hacen de esta manera -->
<!-- Encabezados depende el numero de # es el numero de encabezados-->
# Sesión 1:
*Durante la primera sesion de laboratorio de la materia **Paradigmas de la programación** se nos enseño a utilizar **Markdown**, como por ejemplo cual es su uso y cual es su sintaxis, a continuacion se muestra el primer ejemplo que desarrollamos de markdown:*
## Encabezado 1

### Encabezado 2

#### Encabezado 3

##### Encabezado 4

###### Encabezado 5

<!-- como hacer el tipo de letra, ejemplo italicas-->
Este es un texto en *italica* 
<!-- Tambien se puede con guin bajo -->
<!-- como hacer negritas -->
Este es un texto en **Negritas**
<!-- tambien se puede con doble guion bajo -->

<!-- como tachar -->
Este `es un texto` ~~tachado~~
<!-- como hacer listas -->
* Elemento 1
* Elemento 2
* Elemento 3 <!--Para hacer los subtemas es con tab -->
  * Elemento 3.1
  * Elemento 3.2
* Elemento 4
  
<!-- Como hacer listas ordenadas -->
1. Elemento 1
1. Elemento 2
1. Elemento 3
   1. Elemento 3.1
   1. Elemento 3.2
1. Elemento 4

<!-- Enlaces -->
[Texto del enlace](http://www.google.com
"Texto del tooltip")

[UABC](http://www.uabc.mx)

[UABC](http://www.uabc.mx
"Sitio universitario")

<!-- Imagenes -->
![Texto alternativo](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTfGbgpDCSkYlyXges-IjQvvQr7Tp-kD-b1fw&s)

[![Escudo de UABC](./images/UABC.png)](http://www.uabc.mx "Sitio universitario")

<img src="./images/UABC.png" alt="uabc image" width="150" height="auto">

<!-- Bloques de codigo -->
```txt
This is a code blocks
This is the second line of the code block
```

```python
print("Hola mundo!")
```

```javascript
console.log('Hello world!')

console.test = ()
```

```html
<h1>Hola mundo</h1>
```

<!-- como hacer tablas -->
 | Productos | Precio | Cantidad |
 | - | - | - |
 | Laptop | 3.3| 2 |
 | Mouse | 13.3 | 1 |

<!-- Manera limpia -->
| Productos | Precio | Cantidad |
| --------- | ------ | -------- |
| Laptop    | 3.3    | 2        |
| Mouse     | 13.3   | 1        |

<!-- Notas -->
> Esto es una nota

<!-- Tareas -->
* [x] Primera tarea
* [ ] Segunda tarea
* [ ] Tercera tarea
  * [x] Tercera y media
* [ ] Cuarta tarea

<!-- Divisores horizontales -->
***  
<!-- Menciones -->
@brandon :+1: :smile:
***
# Sesión 2:
*Durante la sesión número 2 se nos enseño a utilizar **Git** y **Github** con Git nos da acceso a una terminal mucho mejor en mi opinión que la de **CMD** y con Github aprendimos el concepto de las branches y de como hacer commits para tener un seguimiento sobre nuestos programas*

[![Logo de Github](./images/github.png)](https://github.com "Sitio de github")
***
# Sesión 3
*Durante la sesión 3 combinamos los conocimientos que adquirimos en las 2 anteriores sesiones y combinamos los conocimientos de **Markdown** y **Git** para la generación de páginas estaticas con **Hugo** y **Github Actions**, en esa sesión genramos está página que estas visitando justo en este momento!*
