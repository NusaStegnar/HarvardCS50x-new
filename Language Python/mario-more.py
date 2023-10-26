n = int(input("Height: "))
while ((n <= 0) or (n > 8)):
    n = int(input("Height: "))
    
for i in range(n):
    for j in range(n - i - 1):
        print(" ", end=" ")
    for j in range(i + 1):
        print("#", end=" ")
    print("\n")
print("")

for i in range(n):
    for j in range(i + 1):
        print("#", end=" ")
    print("\n")
    
