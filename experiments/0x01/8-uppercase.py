#!/usr/bin/python3


def uppercase(str):
    length = len(str)
    for i in range(0, length):
        char = ord(str[i])
        if (char > 96) and (char < 123):
            code = 32
        else:
            code = 0
        print("{:s}".format(chr(char - code)), end='')
    print()


uppercase("10 Eri Ogo")
