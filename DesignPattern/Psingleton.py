# -*- coding: utf-8 -*-
# Pending revise...

class Csingle:
    class __Csingle:
        def __init__(self, arg):
            self.var = arg
        def __str__(self):
            return repr(self) + self.var
    instance = None
    def __init__(self, arg):
        if not Csingle.instance:
            Csingle.instance = Csingle.__Csingle(arg)
        else:
            Csingle.instance.var = arg
    def __str__(self):
        return Csingle.instance.__str__()
    def __getattr__(self, name):
        return getattr(self.instance, name)

if __name__ == "__main__":
    s1 = Csingle("s1")
    print(s1)
    s2 = Csingle("s2")
    print(s2)

    print(s1.__class__)

    print(s2.__class__)
