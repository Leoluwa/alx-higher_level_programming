#!/usr/bin/python3


def uppercase(str):
    length = len(str)
    for i in range(0, length):
        char = ord(str[i])
        if (char > 96) and (char < 123):
            print(chr(char - 32), end='')
        else:
            print(chr(char), end='')
    print()


uppercase("10 Eri Ogo")
