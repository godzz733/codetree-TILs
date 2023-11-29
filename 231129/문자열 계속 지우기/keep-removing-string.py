a = input()
b = input()
for i in range(100):
    if len(a) < len(b): break
    for j in range(len(a)-len(b)+1):
        if a[j:j+len(b)] == b:
            a = a[:j] + a[j+len(b):]
            break
if a == b: a=""
print(a)