Pseudocódigo
"Calculo de nomina y sueldo basado en comisiones"

INICIO
DVyC
    cadena nombre_empleado, nombre_mayor
    entero numero_empleados, numero_autos, c_empleados, c_autos
    real nomina, comision, sueldo_base, precio_auto, venta_empleado, sueldo_empleado, mayor

PROCESO
    sueldo_base = 4500
    nomina = 0
    mayor = sueldo_base // valida el caso de que ningun empleado venda autos
    numero_empleados = 0

    // validación del número de empleados
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
        venta_empleado = 0

        // recopila los precios de los autos y los suma
        mientras(c_autos <= numero_autos)
            precio_auto = 0

            mientras(precio_auto <= 0)
                imprimir "Dame el precio del auto ", c_autos, " (debe ser mayor a 0)"
                leer precio_auto
            fin mientras

            venta_empleado = venta_empleado + precio_auto
            c_autos = c_autos + 1
        fin mientras

        comision = venta_empleado * 0.02
        sueldo_empleado = sueldo_base + comision

        imprimir "El sueldo de ", nombre_empleado, " es: ", sueldo_empleado

        // actualizar el empleado con mayor sueldo
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
