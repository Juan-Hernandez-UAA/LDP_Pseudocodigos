Pseudocódigo
"Potencia"

INICIO
    DVyC
        entero base = 0, exponente = 0, resultado = 1
    DE
        repetir mientras(base < 1) // uso de mientras para validar
            imprimir "Ingrese la base (entero positivo): "
            leer base
        fin repetir mientras

        repetir mientras(exponente < 1) // uso de mientras para validar
            imprimir "Ingrese el exponente (entero positivo): "
            leer exponente
        fin repetir mientras

    PROCESO
        repetir desde(i = 1, i <= exponente, i = i + 1)
            resultado = resultado * base
        fin repetir desde

        imprimir base, " elevado a ", exponente, " es: ", resultado
FIN