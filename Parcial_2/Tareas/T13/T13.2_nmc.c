Pseudocódigo
"Numero mas chico"

INICIO
    DVyC
        entero n, numero, numero_mas_chico
    DE
        imprimir "Ingrese la cantidad de números (n): "
        leer n
    PROCESO
        repetir desde(i=0; i<n; i=i+1)
            imprimir "Ingrese un número entero: "
            leer numero

            numero_mas_chico = (i == 0) ? numero : (numero < numero_mas_chico ? numero : numero_mas_chico)
        fin repetir desde

        imprimir "El número más chico es: ", numero_mas_chico
FIN
