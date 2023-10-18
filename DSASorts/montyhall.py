import random
n_tries = 100000
stay = [] 
switch =[]
for _ in range (n_tries):
    doors = ["car","goat","goat"] 
    random.shuffle(doors)

    p = random.randint(0,2) 
    stay_result = doors.pop(p) 
    doors.remove("goat") 
    switch_result = doors[0] 
    stay.append(stay_result) 
    switch.append(switch_result)

hits = stay.count("car")/n_tries 
miss = switch.count("car")/n_tries
print("The proportion of success by keeping the door same: ",hits)
print("The proportion of success by changing the door: ",miss)
