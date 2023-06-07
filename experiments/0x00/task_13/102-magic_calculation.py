#!/usr/bin/python3

import dis


def magic_calculation(a, b):
    return (98 + a**b)

dis.dis(magic_calculation)
bytecode = dis.code_info(magic_calculation)
print(bytecode)

bytecode = dis.Bytecode(magic_calculation)
print(bytecode)

for i in bytecode:
    print(i)
