Pseudocódigo
"Tablas de multiplicar"

INICIO
    DVyC
        cadena nombre
        entero num1, num2, respuesta, intento = 1
        entero respuesta_correcta
        caracter continuar
    DE y PROCESO
        imprimir "¡Hola! ¿Cómo te llamas?"
        leer nombre
        imprimir "Genial ", nombre, ", Vamos a practicar las tablas de multiplicar"
        repetir
            intento = 1
            num1 = aleatorio(1, 10)
            num2 = aleatorio(1, 10)
            respuesta_correcta = num1 * num2
            imprimir "¿Cuánto es ", num1, ' x ', num2, '?'
            repetir
                leer respuesta
                si(respuesta == respuesta_correcta)
                    imprimir 'Felicidades, ', nombre
                    romper
                sino si(intento < 3)
                    imprimir "Te equivocaste, vuelve a intentar"
                sino
                    imprimir "Tienes que estudiar más"
                    imprimir "La respuesta correcta es: ", respuesta_correcta
                fin si
                intento = intento + 1
            mientras(intento <= 3)
            imprimir "¿Quieres seguir practicando? (s/n)"
            leer continuar
        mientras(continuar == 's' or continuar == 'S')
FIN