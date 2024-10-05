Pseudocódigo
"Cálculo de serie geométrica"

INICIO
DVyC
    entero n, contador
    real x, suma
PROCESO Y DE
    x = 0
    n = 0
    contador = 1
    suma = 1

    repetir
        imprimir "Dame n"
        leer n
    mientras(n <= 0)

    repetir
        suma = suma + 1 / eleva(x, contador)
        contador = contador + 1
    mientras(contador <= n)

    imprimir "El resultado de la serie es: ", suma
FIN
