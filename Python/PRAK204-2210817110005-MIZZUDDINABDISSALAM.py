jrjr   = int(input("Jari-jari = "))
tinggi = int(input("Tinggi    = "))
phi = 3.142857
volume = phi * (jrjr*jrjr) * tinggi
luas   = 2 * phi * jrjr * (jrjr + tinggi)
kllg   = 2 * phi * jrjr
print("Volume   = %.2f "%(volume))
print("Luas     = %.2f "%(luas))
print("Keliling = %.2f "%(kllg))