import math
def sector_area(radius, angle):
    return 0.5 * radius**2 * angle

radius = float(input("Enter the radius of the circle: "))
angle = float(input("Enter the angle (in degrees) of the sector: "))
angle_radians = math.radians(angle)  # Convert angle to radians
print("Area of the sector:", sector_area(radius, angle_radians))