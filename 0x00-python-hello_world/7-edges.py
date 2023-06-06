#!/usr/bin/python3
word = "Holberton"
word_first_3 = word[:3]
n, last_2 = len(word), (len(word) - 2)
middle_word, word_last_2 = word[1:(n-1)], word[last_2:]
print(f"First 3 letters: {word_first_3}")
print(f"Last 2 letters: {word_last_2}")
print(f"Middle word: {middle_word}")
