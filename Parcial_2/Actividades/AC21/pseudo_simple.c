Pseudocódigo 1 (usando condiciones simples)
"suma de números"
INICIO
DVyC
    entero numero_1, numero_2, numero_3
DE
    imprimir "dame el número 1"
    leer numero_1
    imprimir "dame el número 2"
    leer numero_2
    imprimir "dame el número 3"
    leer numero_3

PROCESO Y DS
    si (numero_1 + numero_2 == numero_3)
        imprimir "La suma de ", numero_1, " + ", numero_2, " es equivalente al tercer número"
    sino si (numero_1 + numero_3 == numero_2)
        imprimir "La suma de ", numero_1, " + ", numero_3, " es equivalente al segundo número"
    sino si (numero_2 + numero_3 == numero_1)
        imprimir "La suma de ", numero_2, " + ", numero_3, " es equivalente al primer número"
    sino
        imprimir "Ninguna de las sumas de las parejas es igual al número restante."
    fin si
FIN