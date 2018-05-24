# -*- coding: utf-8 -*-

s = ("  I am providing the code some experiments data...\n\n  ")
### slice indices
s1 = '\n' + ('**'+ s[:30])*2 + s[-3:] 
### Concatenated with the + operator, and repeated with *

print(s1) #show part of my data *2 ...

print('My string len(s) is: ' + str(len(s)))

ll = list(s)
print(ll)

s2 = ''.join(str(e) for e in ll[10:30]) # List to str.
print('\n',s2)

print('{0}{1}{0}'.format(s1,s2))

from string import Template

st = Template('$what is my $data')

print(st.substitute(what='Jacob', data='name'))

print('\n',st.safe_substitute(what = s))

