    Pseudocódigo
    "Sucesion con banderas"

    INICIO
        DVyC
            entero n, valorSerie, suma
            booleano bandera
        DE
            repetir
                imprimir "Introduce un valor para n (n >= 10): "
                leer n
            mientras(n < 10)

        PROCESO
            valorSerie = 2
            bandera = verdadero  // Inicia en verdadero para sumar 3 primero
            mientras (valorSerie <= n)
                imprimir valorSerie
                si (bandera == verdadero)
                    suma = 3
                    bandera = falso
                sino
                    suma = 2
                    bandera = verdadero
                fin si
                valorSerie = valorSerie + suma
        fin mientras
    FIN