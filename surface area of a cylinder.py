import math
def cylinder_surface_area(radius, height):
    return 2 * math.pi * radius * (radius + height)

radius = float(input("Enter the radius of the cylinder: "))
height = float(input("Enter the height of the cylinder: "))
print("Surface area of the cylinder:", cylinder_surface_area(radius, height))