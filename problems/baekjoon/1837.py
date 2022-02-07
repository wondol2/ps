a, b = input().split()
a = int(a)
b = int(b)
flag = 1
for i in range(2, b):
    if a%i == 0 and flag:
        print(f"BAD {i}")
        flag = 0
if flag:
    print("GOOD")