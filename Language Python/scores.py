scores = []
for i in range(3):
    score = input("Score: ")
    scores.append(score)
    """or"""
    scores += [score]

average = sum(scores) / len(scores)
print(f"Average: {average}")
