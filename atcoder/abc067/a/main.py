a,b = map(int, input().split())
result = a + b
if a % 3 == 0:
  print('Possible')
elif b % 3 == 0:
  print('Possible')
elif (a+b) % 3 == 0:
    print('Possible')
else:
  print('Impossible')
