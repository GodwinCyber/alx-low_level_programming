#!/usr/bin/python3

def is_palindrome(n):
    return str(n) == str(n)[::-1]

largest_palindrome = 0

for num1 in range(100, 1000):
    for num2 in range(100, 1000):
        product = num1 * num2
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product

with open("102-result", "w") as f:
    f.write(str(largest_palindrome))