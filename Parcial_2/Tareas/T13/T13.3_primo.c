Pseudocódigo
"Encontrar números primos"

INICIO
    DVyC
        entero i, numero = 1
        booleano es_primo
        caracter respuesta
        cadena articulo

    PROCESO Y DE
        repetir
            es_primo = verdadero

            mientras(numero == 1) // uso de mientras para validar
                imprimir "Ingrese un número entero diferente de 1: "
                leer numero
            fin mientras

            repetir desde(i = 2, i < numero, i = i + 1)
                si(numero mod i == 0)
                    es_primo = falso
                    terminar
                fin si
            fin repetir desde

            articulo = es_primo ? " " : " no "
            imprimir "El número ", numero, articulo, "es primo"

            imprimir "Deseas repetir el proceso?"
            leer respuesta
            respuesta = (respuesta == 's' or respuesta == 'S')
        mientras(respuesta)
FIN