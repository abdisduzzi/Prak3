import math

a = int(input("Nilai A = "))
b = int(input("Nilai B = "))
p = (b * b) - (a * a)
c = math.sqrt(p)
k = a + b + c
l = 0.5 * c * a
print("Alas     =", round(c), "cm")
print("Tinggi   =", a,"cm")
print("Keliling =", round(k), "cm")
print("Luas     =", round(l), "cm^2")