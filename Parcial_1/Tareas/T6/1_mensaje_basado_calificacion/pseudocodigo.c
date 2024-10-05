Pseudocódigo
"Mensaje condicional basado en calificacion"
INICIO
DVyC
    real calificacion, descuento
DE
    imprimir "Dame la calificacion de un examen: " 
    leer calificacion
PROCESO Y DS
    descuento = 0
    si(calificacion >= 0 and calificacion <=10)
        si(calificacion < 7)
            imprimir "REPROBASTE"
        sino si(calificacion >= 7 and calificacion < 9)
            imprimir "BIEN"
        sino si(calificacion >= 9 and calificacion < 10)
            imprimir "MUY BIEN"
        sino
            descuento = 5
            imprimir "EXCELENTE, se otorga el", descuento, "% de descuento"
        fin si
    sino
        imprimir "La calificación no está en un rango aceptado"
    fin si
FIN