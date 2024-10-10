Pseudocódigo
"Elevar n numeros al cuadrado"

INICIO
DVyC
    entero n = 0, i = 1,
    caracter respuesta
PROCESO y DE
    repetir
        repetir
            imprimir "dame n"
            leer n
        mientras(n <= 0)
        repetir desde(i = 1, i <= n, i = i + 1)
            imprimir i, " --> ", eleva(i, 2)
        fin repetir desde

        imprimir "deseas tepetir el proceso? s/n"
    mientras(respuesta == 's' or respuesta 'S')
FIN