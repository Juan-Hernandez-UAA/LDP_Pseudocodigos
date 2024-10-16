Pseudocódigo
"Juego de azar: generación de números aleatorios"

INICIO
    DVyCj
        entero saldoCasa, saldoJugador, apuesta, numero1, numero2, numero3
        cadena nombreJugador
        caracter respuesta
    DE
        imprimir "Ingresa el saldo inicial de la casa de apuestas"
        leer saldoCasa
        imprimir "Ingresa el nombre del jugador"
        leer nombreJugador
        imprimir "Ingresa tu saldo inicial"
        leer saldoJugador
    PROCESO
        repetir
            // Validar que el jugador tenga saldo para jugar
            si(saldoJugador == 0)
                imprimir nombreJugador, ", no tienes suficiente dinero para jugar."
                terminar
            fin si

            // Imprimir el saldo del jugador antes de cada apuesta
            imprimir nombreJugador, ", tu saldo actual es: ", saldoJugador

            // Solicitar y validar apuesta
            repetir
                imprimir "¿Cuánto deseas apostar?"
                leer apuesta
                si(apuesta > saldoJugador)
                    imprimir "Saldo insuficiente. Tu saldo es: ", saldoJugador
                fin si
            mientras(apuesta > saldoJugador)

            // Presionar tecla para comenzar el juego
            imprimir "Presiona cualquier tecla para jugar"
            leer respuesta  // Simulación de espera para iniciar el juego

            // Generación de 3 números aleatorios entre 1 y 9
            numero1 = numeroAleatorio(1, 9)
            numero2 = numeroAleatorio(1, 9)
            numero3 = numeroAleatorio(1, 9)

            // Mostrar los números generados
            imprimir "Los números generados son: "numero1, ", "numero2, ", "numero3

            // Verificar si el jugador ganó o perdió
            si(numero1 == numero2 and numero2 == numero3)
                imprimir "¡Felicidades! Ganaste."
                saldoJugador = saldoJugador + apuesta * 3
                saldoCasa = saldoCasa - apuesta * 3
            sino
                imprimir "Lo siento, perdiste."
                saldoJugador = saldoJugador - apuesta
                saldoCasa = saldoCasa + apuesta
            fin si

            // Preguntar si desea continuar jugando
            imprimir "¿Deseas seguir jugando? (s/n)"
            leer respuesta
        mientras(respuesta == 's' o respuesta == 'S')

        // Imprimir saldos finales
        imprimir "Juego terminado. Saldo final de la casa de apuestas: ", saldoCasa
        imprimir nombreJugador, ", tu saldo final es: ", saldoJugador
FIN
