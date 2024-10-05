Pseudocódigo
"Tipo de triángulo"
INICIO
DVyC
    real lado_1, lado_2, lado_3
    cadena tipo_triangulo

DE
    imprimir "dame el lado 1"
    leer lado_1
    imprimir "dame el lado 2"
    leer lado_2
    imprimir "dame el lado 3"
    leer lado_3

PROCESO
    si no(lado_1 > 0 and lado_2 > 0 and lado_3 > 0)
        imprimir "todos los lados deben de ser mayores a 0"
        retornar // termina la ejecución del código
    
    si (lado_1 == lado_2 and lado_2 == lado_3)
        tipo_triangulo = "equilátero"
    sino si (lado_1 <> lado_2 and lado_1 <> lado_3 and lado_2 <> lado_3)
        tipo_triangulo = "escaleno"
    sino
        tipo_triangulo = "isósceles"
    fin si

DS
    imprimir "El triángulo es ", tipo_triangulo
FIN
