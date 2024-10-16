Pseudocódigo
"Si múltiple con aerolíneas"
INICIO
DVyC
    caracter pais
    cadena nombre_pais
    entero num_boletos, total

    constante entero costo_E = 1000, costo_I = 1350, costo_M = 300, costo_J = 2000
DE
    imprimir "A qué país quieres viajar?"
    imprimir "(E) Estados unidos"
    imprimir "(I) Islandia"
    imprimir "(M) México"
    imprimir "(J) Japón"
    leer pais

    imprimir "¿Cuántos boletos?"
    leer num_boletos

PROCESO
    si (num_boletos <= 0)
        imprimir "la cantidad de boletos debe de ser mayor a 0"
m    fin si

    si (pais)
        caso 'E':
            nombre_pais = "Estados unidos"
            total = num_boletos * costo_E
            romper
        caso 'I':
            nombre_pais = "Islandia"
            total = num_boletos * costo_I
            romper
        caso 'M':
            nombre_pais = "México"
            total = num_boletos * costo_M
            romper
        caso 'J':
            nombre_pais = "Japón"
            total = num_boletos * costo_J
            romper
    sino
        default:
            imprimir "País no valido"
            total = 0
            romper  
    fin si

    si (total <> 0)
        imprimir "El total de ", num_boletos, " boletos a ", nombre_pais, ", es de: $", total
    fin si
FIN