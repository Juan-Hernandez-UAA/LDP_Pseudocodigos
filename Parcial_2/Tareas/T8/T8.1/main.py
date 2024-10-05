n = int(input("dame n: "))
x = float(input("dame x: "))

suma = 1
c = 1
while(c <= n):
    suma = suma + 1 / pow(x, c)
    print(f"1 + 1/{x}**{c} = {suma}")

    c += 1