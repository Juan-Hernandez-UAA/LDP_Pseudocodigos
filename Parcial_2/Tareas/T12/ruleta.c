Pseudocódigo
"Ruleta"

INICIO
    DVyC
        constante entero MIN_NUMERO = 60
        constante entero MAX_NUMERO = 120
        constante entero MIN_RUEDA = 0
        constante entero MAX_RUEDA = 36

        entero n, i
        entero numero = 0
        entero contador_cero = 0
        entero contador_docena = 0
        entero contador_pares = 0
        entero contador_impares = 0
        entero suma_pares = 0
        entero mayor_numero = -1
        entero promedio_pares

        real porcentaje_pares
        real porcentaje_impares

        booleano deseaContinuar = verdadero
        cadena respuesta
    repetir
        // Generar valor aleatorio de n
        n = aleatorio(MIN_NUMERO; MAX_NUMERO)
        imprimir "Valor de n: ", n

        // Generación de números aleatorios y cálculo de resultados
        i = 1
        repetir
            numero = aleatorio(MIN_RUEDA; MAX_RUEDA)
            imprimir "Número generado: ", numero

            si (numero == 0)
                contador_cero = contador_cero + 1
            sino
                si (numero mod 2 == 0)
                    contador_pares = contador_pares + 1
                    suma_pares = suma_pares + numero
                sino
                    contador_impares = contador_impares + 1
                fin si

                si (numero >= 13 and numero <= 24)
                    contador_docena = contador_docena + 1
                fin si

                si (numero > mayor_numero)
                    mayor_numero = numero
                fin si
            fin si

            i = i + 1
        mientras (i <= n)

        // Cálculos finales
        promedio_pares = (contador_pares > 0) ? (suma_pares / contador_pares) : 0
        porcentaje_pares = (contador_pares * 100 / n)
        porcentaje_impares = (contador_impares * 100 / n)

        // Imprimir resultados
        "Total de impares: ", contador_impares
        "Promedio de pares: ", promedio_pares
        "Cantidad en la 22 docena: ", contador_docena
        "Número más grande: ", mayor_numero
        "Porcentaje de pares: ", porcentaje_pares, "%"
        "Porcentaje de impares: ", porcentaje_impares, "%"
        "Total de ceros: ", contador_cero

        // Preguntar si desea continuar
        imprimir "¿Desea continuar? (s/n)"
        leer respuesta
        deseaContinuar = (respuesta == "s" or respuesta == "S")

    mientras (deseaContinuar)
fin