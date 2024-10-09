INICIO
    DVyC
        entero dia, mes, anio
    DE
    PROCESO
        imprimir "Introduce el día"
        leer dia
        imprimir dia
        imprimir "Introduce el mes"
        leer mes
        imprimir mes
        imprimir "Introduce el año"
        leer anio

        si(anio < 1700 o anio > 2010)
            imprimir "Año inválido"
            terminar
        fin si

        si(mes < 1 o mes > 12)
            imprimir "Mes inválido"
            terminar
        fin si

        si(mes == 2)
            si((anio mod 4 == 0 and anio mod 100 <> 0) o (anio mod 400 == 0))
                si(dia < 1 o dia > 29)
                    imprimir "Día inválido para febrero en año bisiesto"
                    terminar
                fin si
            sino
                si(dia < 1 o dia > 28)
                    imprimir "Día inválido para febrero en año no bisiesto"
                    terminar
                fin si
            fin si
        sino si(mes == 4 o mes == 6 o mes == 9 o mes == 11)
            si(dia < 1 o dia > 30)
                imprimir "Día inválido para este mes"
                terminar
            fin si
        sino
            si(dia < 1 o dia > 31)
                imprimir "Día inválido para este mes"
                terminar
            fin si
        fin si

        si(mes)
            caso 1:
                imprimir dia, " de enero de ", anio
            caso 2:
                imprimir dia, " de febrero de ", anio
            caso 3:
                imprimir dia, " de marzo de ", anio
            caso 4:
                imprimir dia, " de abril de ", anio
            caso 5:
                imprimir dia, " de mayo de ", anio
            caso 6:
                imprimir dia, " de junio de ", anio
            caso 7:
                imprimir dia, " de julio de ", anio
            caso 8:
                imprimir dia, " de agosto de ", anio
            caso 9:
                imprimir dia, " de septiembre de ", anio
            caso 10:
                imprimir dia, " de octubre de ", anio
            caso 11:
                imprimir dia, " de noviembre de ", anio
            caso 12:
                imprimir dia, " de diciembre de ", anio
        fin si
    FIN
