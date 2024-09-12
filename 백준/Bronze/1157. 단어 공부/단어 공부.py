word = list(input().upper())
word_list = list(set(word))
freq  = []

for i in word_list:
    freq.append(word.count(i))

if freq.count(max(freq)) >= 2:
    print("?")

else:
    print(word_list[freq.index(max(freq))])