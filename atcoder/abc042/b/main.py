N, L = map(int, input().split())
iroha_list = []
for _ in range(N):
    value = input()
    iroha_list.append(value)
new_list = sorted(iroha_list)
print("".join(new_list))