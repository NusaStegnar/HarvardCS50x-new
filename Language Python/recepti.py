import csv

with open("recepti.csv", "r") as file:
    reader = csv.reader(file)
    for row in reader:
        print(row[1])