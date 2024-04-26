import math
def cone_surface_area(radius, height):
    return math.pi * radius * (radius + math.sqrt(height**2 + radius**2))

radius = float(input("Enter the radius of the cone: "))
height = float(input("Enter the height of the cone: "))
print("Surface area of the cone:", cone_surface_area(radius, height))