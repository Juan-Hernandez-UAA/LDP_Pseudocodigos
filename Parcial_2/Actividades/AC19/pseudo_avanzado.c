Pseudocódigo
“Costo para viajes de aerolíneas"
INICIO
DVyC
    caracter pais
    entero num_boletos
    entero total
    constante entero COSTOS[] = {1000, 1350, 300, 2000}
    cadena PAISES[] = {"Estados Unidos", "Islandia", "México", "Japón"}

DE
    imprimir "Elige un país (E/I/M/J):"
    leer pais
    imprimir "¿Cuántos boletos?"
    leer num_boletos

PROCESO
    si (num_boletos <= 0) retornar "Cantidad de boletos inválida."

    entero indice = -1
    si (pais == 'E') indice = 0
    sino si (pais == 'I') indice = 1
    sino si (pais == 'M') indice = 2
    sino si (pais == 'J') indice = 3

    si (indice < 0) retornar "País no válido."

    total = num_boletos * COSTOS[indice]
    imprimir "Total de ", num_boletos, " boletos a ", PAISES[indice], ": $", total
FIN
