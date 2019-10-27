
# coding: utf-8

# In[ ]:


text = input()
count = int(input())
d = {}
for i in range(count):
    key  = input()
    s = list(key)
    s.sort()
    s = tuple(s)
    l = tuple([key[0], key[-1]])
    tup = (s, l)
    d.update({tup : key})
text = text.replace('.', '')
sl = text.split(' ')
cc = 0
for i in range(len(sl)):
    t = tuple([sl[i][0], sl[i][-1]])
    ss = list(sl[i])
    ss.sort()
    ss = tuple(ss)
    b = (ss, t)
    if(b in d.keys()):
        sl[i] = d[b]
    else:
        cc = -1
        break
if cc == 0:
    print(sl)
    text = " ".join(sl)
    text += "."
    print(text)
else:
    print("No solution")

