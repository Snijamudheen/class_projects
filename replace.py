#A small python program to replace the vowels of a string with *.

def replace(st):
        str = ''
        for ch in st:
            if ch in 'aeiouAEIOU':
                str += '*'
            else:
                str += ch
        return str

string = input("Enter a String: ")
answer = replace(string)
print("The original String is: ", string)
print("The modified String is: ", answer)
