Pseudocódigo
"Calcular sumatoria y promedio de números dados"
INICIO
DVyC
    entero numero, num_de_entradas, suma_entradas, contador
    real promedio
PROCESO
    contador = 1

    imprimir "¿Cuántos números deseas ingresar?"
    leer num_de_entradas
    
    repetir
        imprmir "dame el numero ", contador, ":"
        leer numero
        suma_entradas = suma_entradas + numero

        contador = contador + 1
    mientras(contador <= num_de_entradas)

    promedio = suma_entradas / num_de_entradas
DS
    imprmir "suma de las entradas: ", suma_entradas
    imprmir "promedio: ", promedio
FIN