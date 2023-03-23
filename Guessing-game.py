#guessing game: Guess the secret word. You have three tries.

secret_word = "Apple"
guess = ""
guess_count = 0
guess_limit = 3
out_of_guesses = False

while guess != secret_word.lower() and not(out_of_guesses):
    if guess_count < guess_limit:    
       guess = input("Enter your guess: ")
       guess_count += 1
    else:
       out_of_guesses = True
      
if out_of_guesses:
   print("Out of guess,YOU LOSE!")
else: 
   print("YOU WIN!")
