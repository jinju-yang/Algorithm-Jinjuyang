sentence = input()
word = len(sentence.split(" "))
if sentence[0] == " ":
    word = word - 1
if sentence[len(sentence) - 1] == " ":
    word = word - 1

print(word)