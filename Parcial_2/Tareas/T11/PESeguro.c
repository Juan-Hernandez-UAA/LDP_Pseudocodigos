Pseudocódigo
"Cálculo del seguro de auto y plazo de pago"

INICIO
    DVyC precio_
        cadena nombre, modelo_auto
        entero edad, tiempo_permiso
        real sueldo_mensual, precio_seguro, total_a_pagar, incremento = 0, mensualidad
        entero meses_sin_intereses
        constante real PRECIO_A = 1600, PRECIO_B = 2300, PRECIO_C = 2800

    DE y PROCESO
        imprimir "Ingrese el nombre del empleado: "
        leer nombre

        imprimir "Ingrese el sueldo mensual del empleado: "
        leer sueldo_mensual

        imprimir "Ingrese el modelo del auto (A, B o C): "
        leer modelo_auto

        si(modelo_auto <> 'A' and modelo_auto <> 'B' and modelo_auto <> 'C')
            imprimir "No se puede generar el importe del seguro, error en el modelo del auto"
            terminar
        fin si

        imprimir    
        leer edad

        imprimir "Ingrese el tiempo con permiso de conducir en años:"
        leer tiempo_permiso

        // Asignar precio del seguro según el modelo del auto
        si(modelo_auto == 'A')
            precio_seguro = PRECIO_A
        sino si(modelo_auto == 'B')
            precio_seguro = PRECIO_B
        sino
            precio_seguro = PRECIO_C
        fin si

        // Ajustar el precio del seguro según la edad
        si(edad < 26)
            incremento = precio_seguro * 0.10
        sino si(edad >= 26 and edad <= 30)
            incremento = precio_seguro * 0.04
        sino si(edad > 65)
            incremento = precio_seguro * 0.15
        fin si

        total_a_pagar = precio_seguro + incremento

        // Incrementar tarifa si el permiso de conducir es menor a 2 años
        si(tiempo_permiso < 2)
            total_a_pagar = total_a_pagar + 400
        fin si

        // Asignar plan de meses sin intereses según el sueldo
        si(sueldo_mensual > 18000)
            meses_sin_intereses = 3
        sino
            meses_sin_intereses = 6
        fin si

        mensualidad = total_a_pagar / meses_sin_intereses

        // Imprimir los resultados
        "Recibo del seguro de auto:"
        "Nombre del empleado: ", nombre
        "Modelo del auto: ", modelo_auto
        "Total a pagar por el seguro: $", total_a_pagar
        "Plan a meses sin intereses: ", meses_sin_intereses, " meses"
        "Mensualidad a pagar: $", mensualidad
FIN
