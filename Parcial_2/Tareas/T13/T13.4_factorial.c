Pseudocódigo
"Calcular factorial"

INICIO
    DVyC
        entero numero = -1, factorial = 1
    DE
        mientras(numero < 0) // uso de mientras para validar
            imprimir "Ingrese un número mayor o igual a 0: "
            leer numero
        fin mientras

    PROCESO
        repetir desde(i = 1, i <= numero, i = i + 1)
            factorial = factorial * i
        fin repetir desde

        imprimir "El factorial de ", numero, " es: ", factorial
FIN
