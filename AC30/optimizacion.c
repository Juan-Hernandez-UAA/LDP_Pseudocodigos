   
    Pseudocódigo
    "Calculo de nomina y sueldo basado en comisiones"

    INICIO
    DVyC
        cadena nombre_empleado, nombre_mayor
        entero numero_empleados, c_empleados, numero_autos, c_autos
        real nomina, sueldo_base, precio_auto, venta_empleado, mayor, sueldo_empleado

    PROCESO
    sueldo_base = 4500
    nomina = 0
    mayor = sueldo_base
    numero_empleados = 0
    venta_empleado = 0

        mientras (numero_empleados <= 0)
            imprimir "Ingresa el número de empleados (debe ser mayor a 0)"
            leer numero_empleados
        fin mientras

        c_empleados = 1
        mientras (c_empleados <= numero_empleados)
            imprimir "Dame el nombre del empleado no. ", c_empleados
            leer nombre_empleado
            numero_autos = 0

            mientras (numero_autos <= 0)
                imprimir "¿Cuántos autos vendió? (debe ser mayor a 0)"
                leer numero_autos
            fin mientras

            c_autos = 1
            mientras (c_autos <= numero_autos)
                precio_auto = 0

                mientras (precio_auto <= 0)
                    imprimir "Dame el precio del auto ", c_autos, " (debe ser mayor a 0)"
                    leer precio_auto
                fin mientras

                venta_empleado = venta_empleado + precio_auto
                c_autos = c_autos + 1
            fin mientras

            sueldo_empleado = sueldo_base + venta_empleado * 0.02
            imprimir "El sueldo de ", nombre_empleado, " es: ", sueldo_empleado

            si (sueldo_empleado > mayor)
                mayor = sueldo_empleado
                nombre_mayor = nombre_empleado
            fin si

            nomina = nomina + sueldo_empleado
            c_empleados = c_empleados + 1
        fin mientras

        imprimir "El total de la nómina es: ", nomina
        imprimir "El empleado con el sueldo más alto es: ", nombre_mayor, " con un sueldo de: ", mayor
    FIN
