#!/usr/bin/python3
str = "Python is an interpreted, interactive, object-oriented programming language that combines remarkable power with very clear syntax"
print(str)

#n = len(str)
c = 0
for e in str:
    print(e, c)
    c += 1

print()
print(str[39:67]+str[107:112]+str[0:6])
