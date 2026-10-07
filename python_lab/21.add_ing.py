#program  21
#Add 'ing' at the end of the given string and if it already ends with 'ing' add 'ly'

def add_ing(word: str) -> str:
    if word.endswith("ing"):
        return word + "ly"
    return word + "ing"

word = input("Enter a word: ")

print(add_ing(word))