INICIO
    DVyC
        constante entero capacidad_estadio = 3000
        entero boletos_A, boletos_B, boletos_C, boletos_por_vender
        entero boletos_vendidos_A = 0, boletos_vendidos_B = 0, boletos_vendidos_C = 0, boletos_totales_vendidos = 0
        entero total_ventas = 0
        real precio_A = 200.0, precio_B = 350.0, precio_C = 450.0, total_a_pagar
    PROCESO
        repetir
            imprimir "Ingrese la cantidad de boletos de localidad A:"
            leer boletos_A
            imprimir "Ingrese la cantidad de boletos de localidad B:"
            leer boletos_B
            imprimir "Ingrese la cantidad de boletos de localidad C:"
            leer boletos_C

            boletos_por_vender = boletos_A + boletos_B + boletos_C

            si(boletos_totales_vendidos + boletos_por_vender <= capacidad_estadio)
                // parentesis para mejorar la claridad
                total_a_pagar = (boletos_A * precio_A) + (boletos_B * precio_B) + (boletos_C * precio_C)
                total_ventas = total_ventas + total_a_pagar
                boletos_vendidos_A = boletos_vendidos_A + boletos_A
                boletos_vendidos_B = boletos_vendidos_B + boletos_B
                boletos_vendidos_C = boletos_vendidos_C + boletos_C
                boletos_totales_vendidos = boletos_totales_vendidos + boletos_por_vender

                imprimir "Total a pagar por el aficionado: ", total_a_pagar
            sino
                imprimir "No se pueden vender más boletos, se ha alcanzado la capacidad máxima del estadio."
            fin si

        mientras(boletos_totales_vendidos < capacidad_estadio)

        imprimir "Total de ventas del estadio: ", total_ventas
        imprimir "Porcentaje de localidades vendidas: ", (boletos_totales_vendidos * 100) / capacidad_estadio, "%"
        imprimir "Total de boletos vendidos de localidad A: ", boletos_vendidos_A
        imprimir "Total de boletos vendidos de localidad B: ", boletos_vendidos_B
        imprimir "Total de boletos vendidos de localidad C: ", boletos_vendidos_C
FIN
