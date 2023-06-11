#!/usr/bin/python3
for i in range(0, 9):
    for i_1 in range((i + 1), 10):
        if i == 8:
            print("{:d}{:d}".format(i, i_1))
            break
        print("{:d}{:d}".format(i, i_1), end=", ")
