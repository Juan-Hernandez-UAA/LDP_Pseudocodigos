INICIO
    DVyC
        constante real IMPUESTO_10 = 0.10
        constante real IMPUESTO_12 = 0.12
        constante entero LIMITE_IMPUESTO1 = 2000
        constante entero LIMITE_IMPUESTO2 = 4000
        entero horas_trabajadas
        real pago_por_hora
        real sueldo_bruto
        real sueldo_neto
        real impuesto
        entero n
    DE
        imprimir "Cuantos empleados?"
        leer n
        repetir desde(1; n)
            imprimir "Empleado ", i
            imprimir "Horas trabajadas: "
            leer horas_trabajadas
            imprimir "Pago por hora: "
            leer pago_por_hora

            si(horas_trabajadas <= 35)
                sueldo_bruto = horas_trabajadas * pago_por_hora
            sino si(horas_trabajadas > 35 y horas_trabajadas <= 40)
                sueldo_bruto = horas_trabajadas * (pago_por_hora * 2)
            sino
                sueldo_bruto = horas_trabajadas * (pago_por_hora * 3)
            fin si

            si(sueldo_bruto < LIMITE_IMPUESTO1)
                impuesto = 0
            sino si(sueldo_bruto >= LIMITE_IMPUESTO1 y sueldo_bruto <= LIMITE_IMPUESTO2)
                impuesto = sueldo_bruto * IMPUESTO_10
            sino
                impuesto = sueldo_bruto * IMPUESTO_12
            fin si

            sueldo_neto = sueldo_bruto - impuesto

            imprimir "Sueldo bruto: ", sueldo_bruto
            imprimir "Impuesto: ", impuesto
            imprimir "Sueldo neto: ", sueldo_neto
        fin repetir desde
FIN
