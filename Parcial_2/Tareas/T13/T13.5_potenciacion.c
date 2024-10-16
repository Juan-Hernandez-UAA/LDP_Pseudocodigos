Pseudocódigo
"Potencia"

INICIO
    DVyC
        entero base, exponente, resultado
        caracter respuesta

    PROCESO Y DE
        repetir
            base = 0
            exponente = 0
            resultado = 1

            mientras(base < 1) // uso de mientras para validar
                imprimir "Ingrese la base (entero positivo): "
                leer base
            fin mientras

            mientras(exponente < 1) // uso de mientras para validar
                imprimir "Ingrese el exponente (entero positivo): "
                leer exponente
            fin mientras

            repetir desde(i = 1, i <= exponente, i = i + 1)
                resultado = resultado * base
            fin repetir desde

            imprimir base, " elevado a ", exponente, " es: ", resultado

            "Deseas repetir el proceso?"
            leer respuesta
            respuesta = (respuesta == 's' or respuesta == 'S')
        mientras(respuesta)

FIN