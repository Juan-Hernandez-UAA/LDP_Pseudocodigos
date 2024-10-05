Pseudocódigo
"Número mayor de un conjunto"

INICIO
    DVyC
        real num_1, num_2, num_3, num_mayor
    DE
        imprimir "Dame el número 1"
        leer num_1
        imprimir "Dame el número 2"
        leer num_2
        imprimir "Dame el número 3"
        leer num_3

    PROCESO Y DS
        si(num_1 <> num_2 and num_1 <> num_3 and num_2 <> num_3)
            si(num_1 > num_2 and num_1 > num_3)
                num_mayor = num_1
            sino si(num_2 > num_1 and num_2 > num_3)
                num_mayor = num_2
            sino
                num_mayor = num_3
            fin si

            imprimir "El número mayor es: ", num_mayor
        sino
            imprimir    
        fin si
FIN