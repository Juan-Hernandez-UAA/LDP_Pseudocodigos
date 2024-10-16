Pseudocódigo
"Restaurante"

INICIO
    DVyC:
        constante entero PRECIO_CONTINENTAL = 110
        constante entero PRECIO_MEDITERRANEO = 150
        entero n_continentales = 0
        entero n_mediterraneos = 0
        entero IGP_continentales = 0
        entero IGP_mediterraneos = 0
        entero total = 0
        entero PT_continentales, PT_mediterraneos
        caracter opcion

    PROCESO:
        repetir
            imprimir "¿Cuántos platillos de tipo continental se consumieron?"
            leer PT_continentales
            imprimir "¿Cuántos platillos de tipo mediterráneo se consumieron?"
            leer PT_mediterraneos

            n_continentales = n_continentales + PT_continentales
            n_mediterraneos = n_mediterraneos + PT_mediterraneos

            IGP_continentales = IGP_continentales + (PT_continentales * PRECIO_CONTINENTAL)
            IGP_mediterraneos = IGP_mediterraneos + (PT_mediterraneos * PRECIO_MEDITERRANEO)

            imprimir "¿Desea capturar otra nota? (s/n)"
            leer opcion
        mientras(opcion == "s" or opcion == "S")

        total = IGP_continentales + IGP_mediterraneos

        si(n_continentales > n_mediterraneos)
            imprimir "El platillo más consumido fue: Continental"
        sino si(n_mediterraneos > n_continentales)
            imprimir "El platillo más consumido fue: Mediterráneo"
        sino
            imprimir "Ambos platillos se consumieron en la misma cantidad"

        imprimir "Total de platillos de tipo continental: ", n_continentales
        imprimir "Total de ingresos por continentales: $", IGP_continentales
        imprimir "Total de platillos de tipo mediterráneo: ", n_mediterraneos
        imprimir "Total de ingresos por mediterráneos: $", IGP_mediterraneos
        imprimir "Total de ingresos del restaurante: $", total
FIN
