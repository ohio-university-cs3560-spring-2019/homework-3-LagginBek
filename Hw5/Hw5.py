import sys
for line in sys.stdin:
    word = line.split()
print("The number of lines in the directory ", end = ' ')
print(word[0])
print("The number of Words in the directory ", end = ' ')
print(word[1])
print("The number of Characters in the directory", end = ' ')
print(word[2])
