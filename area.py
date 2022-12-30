print("For 2D Shapes:")
print("Use 'r' for rectangle,")
print("Use 'c' for circle,")
print("Use 's' for square")
print("Use 't' for triangle,")
print("Use 'w' for trapezium,")
print("Use 'v' for sector,")
print("Use 'e' for ellipse")

print("\nFor 3D Shapes:")
print("Use 'q' for cube,")
print("Use 'y' for TSA of cylinder")

shape = input("\nEnter shape to find the area: ")

if shape == 'r':
    print("\nCalculating the area of a rectangle\n")
    a = float(input("Enter length of the rectangle: "))
    b = float(input("Enter width of the rectangle: "))
    result = a * b
    print(f"\nArea of the rectangle is: {result} Unit^2")
    

elif shape == 'c':
    print("\nCalculating the area of a circle\n")
    r = float(input("Enter radius of the circle: "))
    result = 3.1415926535 * r * r
    print(f"\nArea of the circle is: {result} Unit^2")

elif shape == 's':
    print("\nCalculating the area of a square\n")
    s = float(input("Enter side of the square: "))
    result = s * s
    print(f"\nArea of the square is: {result} Unit^2")

elif shape == 't':
    print("\nCalculating the area of a triangle\n")
    bt = float(input("Enter base of the triangle: "))
    ht = float(input("Enter height of the triangle: "))
    result = (ht * bt) / 2
    print(f"\nArea of the triangle is: {result} Unit^2")

elif shape == 'w':
    print("\nCalculating the area of a trapezium\n")
    lb = float(input("Enter lower base of the trapezium: "))
    ub = float(input("Enter upper base of the trapezium: "))
    htt = float(input("Enter height of the trapezium: "))
    result = ((lb + ub) / 2) * htt
    print(f"\nArea of the trapezium is: {result} Unit^2")

elif shape == 'v':
    print("\nCalculating the area of a sector\n")
    th = float(input("Enter the angle subtended by the sector: "))
    rs = float(input("Enter the radius of the sector: "))
    result = (th / 360) * 3.1415926535 * rs * rs
    print(f"\nArea of the sector is: {result} Unit^2")

elif shape == 'e':
    print("\nCalculating the area of an ellipse\n")
    ae = float(input("Enter the radius at minor axis: "))
    be = float(input("Enter the radius at major axis: "))
    result = 3.1415926535 * ae * be
    print(f"\nArea of the ellipse is: {result} Unit^2")

elif shape == 'q':
    print("\nCalculating the surface area of a cube\n")
    qb = float(input("Enter the side of the cube: "))
    result = 6 * qb * qb
    print(f"\nSurface area of the cube is: {result} Unit^2")

elif shape == 'y':
    print("\nCalculating the TSA of a cylinder\n")
    r = float(input("Enter the radius of the cylinder: "))
    h = float(input("Enter the height of the cylinder: "))
    result = 2 * 3.1415926535 * r * h + 2 * 3.1415926535 * r * r
    print(f"\nTSA of the cylinder is: {result} Unit^2")

else:
    print("\nInvalid shape!")
