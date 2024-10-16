Pseudocódigo
"promedio"

INICIO
    DVyC
        entero n, numero, contador_positivos = 0, contador_negativos = 0, suma_positivos = 0, suma_negativos = 0
        real promedio_positivos, promedio_negativos
    DE
        imprimir "Ingrese la cantidad de números (n): "
        leer n

    PROCESO
        repetir desde(i=0; i<=n; i=i+1)
            imprimir "Ingrese un número entero: "
            leer numero

            si(numero > 0)
                suma_positivos = suma_positivos + numero
                contador_positivos = contador_positivos + 1
            sino si(numero < 0)
                suma_negativos = suma_negativos + numero
                contador_negativos = contador_negativos + 1
            fin si
        fin repetir desde

        si(contador_positivos > 0)
            promedio_positivos = suma_positivos / contador_positivos
            imprimir "El promedio de los números positivos es: ", promedio_positivos
        sino
            imprimir "No se ingresaron números positivos."
        fin si

        si(contador_negativos > 0)
            promedio_negativos = suma_negativos / contador_negativos
            imprimir "El promedio de los números negativos es: ", promedio_negativos
        sino
            imprimir "No se ingresaron números negativos."
        fin si
FIN