Pseudocódigo
"Transformacion de fecha a formato textual"

INICIO
    DVyC
        entero dia, mes, anio
        cadena _mes
        caracter respuesta
    DE
    PROCESO
        repetir
            mes = 0, anio = 0
            repetir
                imprimir "Ingresa un anio entre 1700 y 2010"
                leer anio
            mientras(anio < 1700 or anio > 2010)

            repetir
                imprimir "Ingresa un mes entre 1 y 12" 
                leer mes
            mientras(mes < 1 or mes > 12)

            imprimir "Introduce el día"
            leer dia

            si(mes == 2)
                si((anio mod 4 == 0 and anio mod 100 <> 0) o (anio mod 400 == 0))
                    si(dia < 1 o dia > 29)
                        imprimir "Día inválido para febrero en año bisiesto"
                        terminar
                    fin si
                sino si(dia < 1 o dia > 28)
                    imprimir "Día inválido para febrero en año no bisiesto"
                    terminar
                fin si
            sino si(mes == 4 o mes == 6 o mes == 9 o mes == 11)
                si(dia < 1 o dia > 30)
                    imprimir "Día inválido para este mes"
                    terminar
                fin si
            sino si(dia < 1 o dia > 31)
                imprimir "Día inválido para este mes"
                terminar
            fin si

            si(mes)
                caso 1: _mes = "enero"
                    romper
                caso 2: _mes = "febrero"
                    romper
                caso 3: _mes = "marzo"
                    romper
                caso 4: _mes = "abril"
                    romper
                caso 5: _mes = "mayo"
                    romper
                caso 6: _mes = "junio"
                    romper
                caso 7: _mes = "julio"
                    romper
                caso 8: _mes = "agosto"
                    romper
                caso 9: _mes = "septiembre"
                    romper
                caso 10: _mes = "octubre"
                    romper
                caso 11: _mes = "noviembre"
                    romper
                caso 12: _mes = "diciembre"
                    romper
            sino
                default: imprimir "hubo un error en el mes"
                romper
            fin si

            si(mes >= 1 and mes <= 12)
                imprimir "la fecha convertida es: ", dia, " de ", _mes, " del ", anio
            fin si

            imprimir "deseas capturar otra fecha? s/n"
            leer respuesta
        mientras(respuesta == 's' or respuesta == "S")
FIN