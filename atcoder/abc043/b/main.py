s = list(input())
result = []
for word in s:
  if word == 'B':
    if result != []:
      result.pop()
  else:
    result.append(word)
print(''.join(result))