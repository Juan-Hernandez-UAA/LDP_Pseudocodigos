Pseudocódigo
"Algoritmo de búsqueda de números perfectos"

INICIO
    DVyC
        entero n_numeros, indice, divisor, acumulador
    DE
    PROCESO
        imprimir "Dame n"
        leer n_numeros

        indice = 1
        mientras (indice <= n_numeros)
            acumulador = 0
            divisor = 1
            mientras (divisor < indice)  // Solo divisores propios
                si (indice mod divisor == 0)
                    acumulador = acumulador + divisor
                fin si
                divisor = divisor + 1
            fin mientras

            si (acumulador == indice)
                imprimir indice, " es un número perfecto"
            fin si

            indice = indice + 1
        fin mientras
FIN
