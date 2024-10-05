import math

x1 = float(input("Ingrese punto x1: "))
y1 = float(input("Ingrese punto y1: "))
x2 = float(input("Ingrese punto x2: "))
y2 = float(input("Ingrese punto y2: "))

distancia = math.sqrt((x2 - x1)**2 + (y2 - y1)**2)

print(f"La distancia entre el punto ({x1}, {y1}) y ({x2}, {y2}) es: {distancia}")