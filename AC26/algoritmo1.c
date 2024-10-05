INICIO
DVyC
    entero num_de_entradas, contador, numero, mayor
    arreglo numeros
PROCESO
    imprimir "¿Cuántos números deseas ingresar?"
    leer num_de_entradas

    contador = 1
    repetir
        imprimir "dame el numero ", contador
        leer numero
        numeros.agregar(numero)
    mientras(contador <= num_de_entradas)

    mayor = numeros[0]
    contador = 1

    repetir
        si(numeros[contador] > mayor)
            mayor = numeros[contador]
        fin si
    mientras(contador < num_de_entradas)

    imprimir "el numero mayor es: ", mayor