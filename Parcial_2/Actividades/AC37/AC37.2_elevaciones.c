INICIO
    DEF VARIABLAS
        entero n, t
        caracter respuesta

    HACER
        imprimir "Introduzca el valor de t: "
        leer t
        imprimir "Introduzca el valor de n: "
        leer n

        imprimir "Elevaciones al cuadrado de los números entre ", t, " y ", n, ":"
        repetir desde(t; n)
            imprimir t * t
            t = t + 1
        FIN REPETIR

        imprimir "¿Desea continuar? (s/n): "
        leer respuesta
    MIENTRAS(respuesta == 's' or respuesta == 'S')

FIN
