# -*- coding: utf-8 -*-
# 
class Cperson:
    def __init__(self):
        self.name = ""
        ##self.school = school
        ##self.child = child

class Cschool:
    def __init__(self):
        self.name = ""
        ##self.person = person

if __name__ == "__main__":
    p1 = Cperson()
    p2 = Cperson()
    s1 = Cschool()
    s2 = Cschool()

    p1.name = "Parent "
    p1.child = p2
    p1.school = s1

    p2.name = "Child "
    ##p2.child = NULL
    p2.school = s2

    s1.name = "ABC University "
    s1.person = p1

    s2.name = "DEF College"
    s2.person = p2
    
    print("P1 --> P2 --> School: " + p1.name+p1.child.name+p1.child.school.name)
