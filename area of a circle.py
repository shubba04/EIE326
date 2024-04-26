import math

def circle_area(radius):
    return math.pi * radius**2

radius = float(input("Enter the radius of the circle: "))
print("Area of the circle:", circle_area(radius))