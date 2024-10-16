Pseudocódigo
"Accidente de transito"

INICIO
    DVyC
        caracter sexo
        caracter continuar
        entero edad
        entero contadorMenores25 = 0
        entero contadorFemeninos = 0
        entero contadorMasculinos18_25 = 0
    DE
    PROCESO
        repetir
            edad = 0
            repetir
                imprimir "Introduce la edad del conductor (debe ser mayor a 0)"
                leer edad
            mientras(edad <= 0)

            si(edad < 25)
                contadorMenores25 = contadorMenores25 + 1
            fin si

            sexo = ''
            repetir
                imprimir "Introduce el sexo del conductor (f o m):"
                leer sexo

                si(sexo <> 'f' or sexo <> 'm')
                    imprimir "el sexo no es valido"
                    terminar
                fin si
                si(sexo == 'f')
                    contadorFemeninos = contadorFemeninos + 1
                    terminar
                fin si
                si(sexo == 'm' and edad >= 18 and edad <= 25)
                    contadorMasculinos18_25 = contadorMasculinos18_25 + 1
                    terminar
                fin si

            mientras no(sexo == 'f' or sexo == 'm')

            imprimir "¿Desea ingresar otro dato? (s/n):"
            leer continuar
        mientras(continuar == 's')

        imprimir "Total de accidentes en conductores menores de 25 años: ", contadorMenores25
        imprimir "Total de accidentes en conductores de sexo femenino: ", contadorFemeninos
        imprimir "Total de accidentes en conductores masculinos con edades entre 18 y 25 años: ", contadorMasculinos18_25
FIN
