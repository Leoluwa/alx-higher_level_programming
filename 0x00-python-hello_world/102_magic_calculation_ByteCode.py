#!/usr/bin/python3

import dis

def magic_calculation(a, b):
    return (98 + a**b)

dis.dis(magic_calculation)
byteCode = dis.code_info(magic_calculation)
print(byteCode)

byteCode = dis.Bytecode(magic_calculation)
print(byteCode)

for e in byteCode:
    print(e)
