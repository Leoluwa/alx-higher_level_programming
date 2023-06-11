#!/usr/bin/python3


def fizzbuzz():
    fiz = "Fizz"
    buz = "Buzz"
    fizbuz = "FizzBuzz"

    for i in range(1, 101):
        m_of_3 = i % 3
        m_of_5 = i % 5

        if ((m_of_3 == 0) and (m_of_5 == 0)):
            print("{:s}".format(fizbuz), end=" ")
        elif (m_of_3 == 0):
            print("{:s}".format(fiz), end=" ")
        elif (m_of_5 == 0):
            print("{:s}".format(buz), end=" ")
        else:
            print(i, end=" ")

fizzbuzz()
