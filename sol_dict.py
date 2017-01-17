def get_distinct_chars(string):
    dictionary = {}
    for char in string:
        if (char in dictionary):
            pass
        else:
            dictionary[char] = True
    return dictionary

chars = get_distinct_chars("HelloWorld")
print chars
#> {'e': True, 'd': True, 'H': True, 'l': True, 'o': True, 'r': True, 'W': True}
print chars.keys()
#> ['e', 'd', 'H', 'l', 'o', 'r', 'W']

#當然這裡的if-else判斷式是多餘的, 直接dictionary[char] = True就好
