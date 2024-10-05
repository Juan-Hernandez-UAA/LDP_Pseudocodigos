Pseudocódigo
"Validación de cajero iterativa"

INICIO
DVyC
    entero monto
    booleano continuar
DE Y PROCESO
    contador = 0

    // ciclo para la correcta captura del monto
    repetir
        continuar = falso
        imprimir "dame el monto a retirar"
        leer monto

        si no(monto mod 50 == 0) // Si el monto es múltiplo de 50, omite la condición
            imprimir "el monto no es múltiplo de 50"
            continuar = verdadero
        fin si

        si no(monto >= 1000)     // Si el monto es mayor o igual a 1000, omite la condición
            imprimir "el monto es menor a $1000"
            continuar = verdadero
        fin si

        si no(monto <= 3000)     // Si el monto es menor o igual que 3000, omite la condición
            imprimir "el monto es mayor a $3000"
            continuar = verdadero
        fin si
    mientras (continuar)

    imprimir "retiro autorizado"
FIN