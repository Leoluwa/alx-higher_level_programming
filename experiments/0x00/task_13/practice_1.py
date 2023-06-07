#!/usr/bin/python3

import dis


def MyByte(e, l):
    add = e + l
    sub = e - l
    power = e**l
    s_add = str(add)
    s_sub = str(sub)
    s_power = str(power)
    return s_add+" "+"~"+" "+s_sub+" "+"~"+" "+s_power

dis.dis(MyByte)
bytecode = dis.code_info(MyByte)
print(bytecode)

bytecode = dis.Bytecode(MyByte)
print(bytecode)

for i in bytecode:
    print(i)
