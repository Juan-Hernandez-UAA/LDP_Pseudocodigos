Pseudocódigo
"Elevar n números al cuadrado"

INICIO
DVyC
    entero n = 0, i
    caracter respuesta
PROCESO y DE
    repetir
        repetir
            imprimir "Dame la cantidad de numeros a elevar desde el 1 (mayor a 0):"
            leer n
        mientras(n <= 0)

        repetir desde(i = 1, i <= n, i = i + 1)
            imprimir i, " → ", eleva(i, 2)
        fin repetir desde

        imprimir "¿Deseas repetir el proceso? (s/n)"
        leer respuesta
    mientras(respuesta == 's' or respuesta == 'S')
FIN