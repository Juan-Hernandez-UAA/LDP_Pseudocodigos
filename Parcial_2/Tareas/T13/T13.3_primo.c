Pseudocódigo
"Encontrar numeros primos"

INICIO
    DVyC
        entero i, numero = 1
        booleano es_primo
        caracter respuesta

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

            imprimir "El número ", numero, es_primo ? " es primo." : " no es primo."

            "Deseas repetir el proceso?"
            leer respuesta
            respuesta = (respuesta == 's' or respuesta == 'S')
        mientras(respuesta)


FIN