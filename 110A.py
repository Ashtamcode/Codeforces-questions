num = int(input())

for i in str(num):
    if i == '4' or i == '7':
        continue
    else:
        print("NO")
        break
else:
    print("YES")