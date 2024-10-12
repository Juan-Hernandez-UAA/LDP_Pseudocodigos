Pseudocódigo
"Cálculo de reservación en el hotel Fiesta Inn"

INICIO
    DVyC
        cadena nombre, tipo_turista
        entero tipo_habitacion, dias_reserva, total_personas, personas_extra = 0
        real total_pagar, descuento_dias = 0, cobro_extra = 0, descuento_turista = 0
        constante real PRECIO_HAB1 = 1700, PRECIO_HAB2 = 2100, PRECIO_HAB3 = 2600

    DE y PROCESO
        imprimir "Ingrese el nombre de quien reserva: "
        leer nombre
        
        imprimir "Ingrese el tipo de habitación (1, 2 o 3): "
        leer tipo_habitacion
        
        si(tipo_habitacion < 1 or tipo_habitacion > 3)
            imprimir "No se puede generar la cuenta, error en el tipo de habitación"
            terminar
        fin si
        
        imprimir "Ingrese la cantidad de días a reservar: "
        leer dias_reserva
        
        imprimir "Ingrese el total de personas a quedarse en la habitación: "
        leer total_personas
        
        imprimir "Ingrese el tipo de turista (nacional/internacional): "
        leer tipo_turista

        // Calcular cobro por habitación
        si(tipo_habitacion == 1)
            total_pagar = dias_reserva * PRECIO_HAB1
        sino si(tipo_habitacion == 2)
            total_pagar = dias_reserva * PRECIO_HAB2
        sino
            total_pagar = dias_reserva * PRECIO_HAB3
        fin si

        // Calcular cobro por personas extra
        si(total_personas > 2)
            personas_extra = total_personas - 2
            cobro_extra = personas_extra * 150
        fin si
        
        total_pagar = total_pagar + cobro_extra

        // Descuento por días de hospedaje
        si(dias_reserva > 5)
            si(tipo_habitacion == 1)
                descuento_dias = total_pagar * 0.06
            sino si(tipo_habitacion == 2)
                descuento_dias = total_pagar * 0.10
            sino
                descuento_dias = total_pagar * 0.12
            fin si
        fin si

        total_pagar = total_pagar - descuento_dias

        // Descuento por tipo de turista
        si(tipo_turista == "nacional")
            descuento_turista = 500
        fin si

        total_pagar = total_pagar - descuento_turista

        // Imprimir recibo
        imprimir "Recibo de reservación:"
        imprimir "Nombre: ", nombre
        imprimir "Tipo de habitación: ", tipo_habitacion
        imprimir "Cantidad de días: ", dias_reserva
        imprimir "Total a pagar: $", total_pagar
FIN
