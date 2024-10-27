INICIO
    DVyC
        entero n, t
        caracter respuesta

    repetir
        imprimir "Introduzca el valor de t: "
        leer t
        imprimir "Introduzca el valor de n: "
        leer n

        imprimir "Elevaciones al cuadrado de los números entre ", t, " y ", n, ":"
        repetir desde(t; n)
            imprimir t * t
            t = t + 1
        fin repetir

        imprimir "¿Desea continuar? (s/n): "
        leer respuesta
    mientras(respuesta == 's' or respuesta == 'S')

FIN