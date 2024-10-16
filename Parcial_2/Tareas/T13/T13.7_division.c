Pseudocódigo
"Serie Armónica Repetitiva"

INICIO
    DVyC
        entero n, i, k
        real suma = 0
    DE
        imprimir "Ingrese el valor de n: "
        leer n
    PROCESO
        repetir desde(k = 1, k <= n, k = k + 1)
            repetir desde(i = 1, i <= k, i = i + 1)
                suma = suma + (1 / k)
            fin repetir desde
        fin repetir desde

        imprimir "El resultado de la serie es: ", suma
FIN
