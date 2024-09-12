N = int(input())
group = N

for _ in range(N):
    word = input() #happy / aba
    for j in range(len(word) - 1):
        if word[j] == word[j + 1]:
            pass
        elif word[j] in word[j + 1: ]:
            group -= 1
            break

print(group)