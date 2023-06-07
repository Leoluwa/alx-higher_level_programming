#!/usr/bin/python3

import dis


def showMeByte(name):
    return "hello "+name+" !!!"

dis.dis(showMeByte)
bytecode = dis.code_info(showMeByte)
print(bytecode)

bytecode = dis.Bytecode(showMeByte)
print(bytecode)

for i in bytecode:
    print(i)
