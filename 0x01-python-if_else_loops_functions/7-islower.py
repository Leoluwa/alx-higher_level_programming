#!/usr/bin/python3

def islower(c):
    status = 0
    for char in range(97, 123):
        if char == ord(c):
            status = 1
        else:
            continue

    if status == 1:
        return True
    else:
        return False
