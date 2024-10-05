Pseudocódigo
"Calculo de costo por huesped"
INICIO
DVyC
    cadena nombre
    entero tipo_habitacion, dias, descuento
    real pago_h1, pago_h2 // h1 o h2 significa habitacion 1 o 2
    real costo
DE
    imprimir "dame tu nombre: "
    leer nombre
    imprimir "selecciona tu tipo de habitacion (1 o 2): "
    leer tipo_habitacion
    imprimir "días de hospedaje: "
    leer dias

PROCESO
    pago_h1 = 1300
    pago_h2 = 1600

    si (dias >= 10)
        descuento = 10
    sino si (dias >= 5)
        descuento = 5
    sino
        descuento = 0
    fin si

    si (tipo_habitacion == 1)
        costo = (pago_h1 * dias) - ((pago_h1 * dias) * (descuento / 100))
    sino si (tipo_habitacion == 2)
        costo = (pago_h2 * dias) - ((pago_h2 * dias) * (descuento / 100))
    sino
        imprimir "El tipo de habitación no existe"
        costo = 0
    fin si

    si (costo > 0)
        imprimir "El total a pagar para ", nombre, " es: $", costo
    sino
        imprimir "No se pudo calcular el costo."
    fin si
FIN