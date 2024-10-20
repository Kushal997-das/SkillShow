# Define the Car class
class Car:
    def __init__(self, max_speed, speed_unit):
        self.max_speed = max_speed
        self.speed_unit = speed_unit
    
    def __str__(self):
        return f"Car with the maximum speed of {self.max_speed} {self.speed_unit}"

# Define the Boat class
class Boat:
    def __init__(self, max_speed):
        self.max_speed = max_speed
    
    def __str__(self):
        return f"Boat with the maximum speed of {self.max_speed} knots"

# Main function to take input and process the queries
if __name__ == '__main__':
    q = int(input("Enter the number of queries: "))  # Number of queries
    for _ in range(q):
        args = input("Enter the vehicle type and its details: ").split()  # Input query
        vehicle_type, params = args[0], args[1:]
        
        if vehicle_type == "car":
            max_speed, speed_unit = int(params[0]), params[1]
            vehicle = Car(max_speed, speed_unit)
        elif vehicle_type == "boat":
            max_speed = int(params[0])
            vehicle = Boat(max_speed)
        else:
            raise ValueError("Invalid vehicle type")
        
        # Print the string representation of the vehicle
        print(vehicle)



#Input example
#Enter the number of queries: 2
#Enter the vehicle type and its details: car 120 km/h
#Car with the maximum speed of 120 km/h
#Enter the vehicle type and its details: boat 82
#Boat with the maximum speed of 82 knots
