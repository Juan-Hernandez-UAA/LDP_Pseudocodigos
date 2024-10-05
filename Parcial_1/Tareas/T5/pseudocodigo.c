Pseudocódigo "Calcular sueldo basado en turno y dia"
INICIO
DVyC
    cadena turno, dia
    entero ht, sueldo

DE
    imprimir "Dame el turno trabajado"
    leer turno
    imprimir "Dame el dia de la semana trabajado"
    leer dia
    imprimir "Dame las horas trabajadas"
    leer ht

PROCESO Y DS
    si no((
        dia == "lunes" or
        dia == "martes" or
        dia == "miércoles" or
        dia == "jueves" or
        dia == "viernes" or
        dia == "sábado" or
        dia == "domingo"
    ) and (
        turno == "diurno" or
        turno == "nocturno"
    ))
        imprimir "El día o turno ingresado no son correctos"

    sino
        si (turno == "diurno")
            si (dia == "domingo")
                sueldo = 700 * ht
            sino
                sueldo = 500 * ht
            fin si

        sino si (turno == "nocturno")
            si (dia == "domingo")
                sueldo = 1100 * ht
            sino
                sueldo = 800 * ht
            fin si
        fin si

        imprimir "El sueldo es: ", sueldo
    fin si
FIN