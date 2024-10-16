Pseudocódigo
"Encontrar el número mayor"
INICIO
DVyC
    entero num_de_entradas, contador, numero, mayor
PROCESO
    imprimir "¿Cuántos números deseas ingresar?"
    leer num_de_entradas

    mayor = 0 // inconsistencia, los números dados pueden ser menores
    contador = 1

    repetir
        imprimir "dame el numero ", contador
        leer numero
        
        si(numero > mayor)
            mayor = numero
        fin si

        contador = contador + 1
    mientras(contador <= num_de_entradas)
DS
    imprimir "el número mayor ingresado es: ", mayor
FIN