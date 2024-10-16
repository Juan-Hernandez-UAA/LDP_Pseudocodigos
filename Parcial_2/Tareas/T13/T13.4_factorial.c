Pseudocódigo
"Calcular factorial"

INICIO
    DVyC
        entero numero, factorial = 1
        caracter respuesta

    PROCESO Y DE
        repetir
            numero = -1
            
            mientras(numero < 0) // uso de mientras para validar
                imprimir "Ingrese un número mayor o igual a 0: "
                leer numero
            fin mientras

            repetir desde(i = 1, i <= numero, i = i + 1)
                factorial = factorial * i
            fin repetir desde

            imprimir "El factorial de ", numero, " es: ", factorial

            "Deseas repetir el proceso?"
            leer respuesta
            respuesta = (respuesta == 's' or respuesta == 'S')
        mientras(respuesta)
FIN
