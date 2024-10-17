Pseudocódigo
"Número más chico"

INICIO
    DVyC
        entero n, i, numero, numero_mas_chico
        caracter respuesta

    PROCESO Y DE
        repetir
            imprimir "Ingrese la cantidad de números (n): "
            leer n
            numero_mas_chico = 0

            repetir desde(i = 0, i < n, i = i+1)
                imprimir "Ingrese un número entero: "
                leer numero

                numero_mas_chico = (i == 0) ? numero : (numero < numero_mas_chico ? numero : numero_mas_chico)
            fin repetir desde

            imprimir "El número más chico es: ", numero_mas_chico

            imprimir "Deseas repetir el proceso?"
            leer respuesta
            respuesta = (respuesta == 's' or respuesta == 'S')
        mientras(respuesta)
FIN