`Pseudocodigo "Selector de funciones"
`Inicio
DVC
    Real valor, numero, resultado
DE
    imprimir "dame un valor"
    leer valor
    imprimir
    "
        selecciona la operacion:
        (1): Multiplicacion
        (2): Exponenciación
        (3): División
    "
    leer numero

Proceso
    numero >= 1 and numero <=3
        si (numero == 1)
            resultado = 100 * valor
        sino si (numero == 2)
            resultado = 100 ** valor   # Exponenciación
        sino si (numero == 3)
            si (valor != 0)
                resultado = 100 / valor
            sino
                imprimir "Error: división por cero"
                retornar 0
            fin si
        fin si
        imprimir "el resultado es: ", resultado
    sino
        imprimir "0"
    fin si
Fin