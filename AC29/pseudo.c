Pseudocódigo
"Imprimir promedio de n números generados aleatoriamente"

INICIO
DVyC
    entero n, contador, suma, num_random
    real promedio
PROCESO
    suma = 0
    contador = 1
    n = 0

    mientras (n <= 0) // Valida que el número sea positivo
        imprimir "Ingrese el valor de n (debe ser mayor a 0)"
        leer n
    fin mientras

    mientras (contador <= n)
        num_random = generarAleatorio(1, 100) // Generar número aleatorio entre 1 y 100
        imprimir "número ", contador, ": " num_random
        suma = suma + num_random
        contador = contador + 1
    fin mientras

    promedio = suma / n
    imprimir "El promedio es: ", promedio
FIN
