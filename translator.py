#This is a small secret language developed with python language that converts vowels into the alphabet 'r'.
#For example: apple --> rpplr door --> drrr

def translate(phrase):

    translation = ""
    
    for letter in phrase:
        if letter in "AEIOUaeiou":
           translation = translation + "r"
        else:
           translation = translation + letter
    return translation

print(translate(input("Enter your phrase: ")))
