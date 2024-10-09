Pseudocódigo
"Generacion de numeros aleatorios - Repetir desde"

INICIO
DVyC
    entero i, n, numero_aleatorio, acumulador
    caracter respuesta
PROCESO Y DE
    repetir
        imprimir "dame la cantidad de numeros a generar"
        leer n

        repetir desde(i=1, i<=n, i=i+1)
            numero_aleatorio = aleatorio(1, 250)
            imprimir "numero generado: ", numero_aleatorio
            
            si(numero_aleatorio mod 3 == 0 and numero_aleatorio <=125)
                acumulador = acumulador + numero_aleatorio
            fin si
        fin repetir desde
        
        imprimir "Sumatoria de numeros generados"

        imprimir "deseas continuar con el proceso? s/n"
        leer respuesta
    mientras(respuesta == 's' or respuesta == 's')
FIN
