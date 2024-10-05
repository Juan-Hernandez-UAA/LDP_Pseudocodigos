Pseudocódigo
"Calcular sueldo basado en turno y dia"
Inicio
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

PROCESO
    sueldo = 0

    si no(
        dia == "lunes" or
        dia == "martes" or
        dia == "miércoles" or
        dia == "jueves" or
        dia == "viernes" or
        dia == "sábado" or
        dia == "domingo"
    )
        imprimir "El día ingresado no es correcto"

    sino si no(turno == "diurno" or turno == "nocturno")
        imprimir el turno ingresado no es correcto

    sino si(dia == "domingo")
        sueldo = (turno == "diurno") ? (700 * ht) : (1100 * ht)
    sino
        sueldo = (turno == "diurno") ? (500 * ht) : (800 * ht)
    fin si

DS
    imprimir "el sueldo es: ", sueldo
