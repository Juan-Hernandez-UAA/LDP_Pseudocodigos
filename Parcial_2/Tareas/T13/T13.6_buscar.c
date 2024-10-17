Pseudocódigo
"Buscando el número 3"

INICIO
    DVyC
        entero numero, i
        booleano tiene_tres
        cadena articulo
        caracter respuesta

    PROCESO Y DE
        repetir
            tiene_tres = falso
            articulo = ""

            imprimir "Ingrese un número entero: "
            leer numero

            mientras(numero > 0)
                si(numero mod 10 == 3)
                    tiene_tres = verdadero
                    terminar
                fin si
                numero = numero / 10  // Eliminar el último dígito
            fin mientras

            articulo = tiene_tres ? "sí" : "no"
            imprimir "El número ", articulo, " tiene un 3"

            imprimir "Deseas repetir el proceso?"
            leer respuesta
            respuesta = (respuesta == 's' or respuesta == 'S')
        mientras(respuesta)
FIN
