# printf

[Ir a Español](#espa%C3%B1ol) | [Go to English](#english)

# Español

**printf** es un proyecto personal donde implementé mi propia versión de la función estándar `printf` en C. El objetivo es entender en profundidad cómo funciona internamente esta función tan utilizada, gestionando el formateo y la impresión de cadenas, números y otros tipos de datos sin depender de la librería estándar de C.

---

## 📚 Descripción

Este proyecto consiste en la creación de una función `ft_printf` que replica el comportamiento de `printf`, permitiendo imprimir texto formateado en la salida estándar. Se soportan múltiples especificadores de formato, manejo de argumentos variables y conversión de tipos.

### Especificadores soportados

- `%c`: Caracter
- `%s`: Cadena de caracteres
- `%d` o `%i`: Entero decimal con signo
- `%u`: Entero decimal sin signo
- `%x` / `%X`: Hexadecimal (minúscula/mayúscula)
- `%p`: Puntero
- `%%`: Imprime el símbolo `%` literal

---

## 🛠️ Compilación

Asegúrate de tener `make` y un compilador de C instalado.

```bash
git clone https://github.com/Juansito19/printf.git
cd printf
make
```

Esto generará una biblioteca `libftprintf.a` y los archivos objeto correspondientes.

---

## 🚀 Uso

Incluye el archivo de cabecera en tu proyecto y enlaza la biblioteca generada:

```c
#include "ft_printf.h"
```

Compila tu código junto con `libftprintf.a`:

```bash
gcc main.c libftprintf.a -o mi_programa
```

Luego, puedes usar `ft_printf` igual que `printf`:

```c
ft_printf("Hola %s, el número es %d\n", "mundo", 42);
```

---

## 📝 Notas sobre la implementación

- Proyecto desarrollado en C, siguiendo buenas prácticas de manejo de memoria y modularidad.
- Manejo de argumentos variables con `stdarg.h`.
- Gestión propia de conversión y formateo de tipos de datos.
- El código es portable y no depende de funciones prohibidas por las normas de la escuela 42.

---

## 📂 Estructura del proyecto

- `src/`: Archivos fuente del proyecto.
- `includes/`: Archivos de cabecera.
- `Makefile`: Automatiza la compilación.

---

## 🧑‍💻 Autor

- Juan ([@Juansito19](https://github.com/Juansito19))

---

# printf

# English

**printf** is a personal project where I implemented my own version of the standard C `printf` function. The goal is to deeply understand how this widely used function works internally, handling formatting and printing of strings, numbers, and other data types without relying on the C standard library.

---

## 📚 Description

This project consists of creating a `ft_printf` function that replicates the behavior of `printf`, allowing formatted text output to standard output. Multiple format specifiers, variable argument handling, and type conversion are supported.

### Supported specifiers

- `%c`: Character
- `%s`: String
- `%d` or `%i`: Signed decimal integer
- `%u`: Unsigned decimal integer
- `%x` / `%X`: Hexadecimal (lower/upper case)
- `%p`: Pointer
- `%%`: Prints the literal `%` symbol

---

## 🛠️ Compilation

Make sure you have `make` and a C compiler installed.

```bash
git clone https://github.com/Juansito19/printf.git
cd printf
make
```

This will generate a `libftprintf.a` library and the corresponding object files.

---

## 🚀 Usage

Include the header file in your project and link the generated library:

```c
#include "ft_printf.h"
```

Compile your code along with `libftprintf.a`:

```bash
gcc main.c libftprintf.a -o my_program
```

You can then use `ft_printf` just like `printf`:

```c
ft_printf("Hello %s, the number is %d\n", "world", 42);
```

---

## 📝 Implementation notes

- Project developed in C, following good practices in memory management and modularity.
- Handles variable arguments using `stdarg.h`.
- Custom type conversion and formatting management.
- The code is portable and does not depend on functions forbidden by the 42 school standards.

---

## 📂 Project structure

- `src/`: Project source files.
- `includes/`: Header files.
- `Makefile`: Build automation.

---

## 🧑‍💻 Author

- Juan ([@Juansito19](https://github.com/Juansito19))

[ir a arriba | go to top](#printf)
