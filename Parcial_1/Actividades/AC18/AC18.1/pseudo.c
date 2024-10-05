Pseudocodigo "Números iguales y mayores"
Inicio
DVC
    Entero numero1, numero2
DE
    imprimir "Dame el primer número"
    leer numero1
    imprimir "Dame el segundo número"
    leer numero2

Proceso
    si (numero1 == numero2)
        imprimir "Los números son iguales"
    sino
        si (numero1 > numero2)
            imprimir "El número 1: (", numero1, ") es mayor que el numero 2: (", numero2, ")"
        sino
            imprimir "El número 2: (", numero2, ") es mayor que el numero 1: (", numero1, ")"
        fin si
    fin si
Fin
