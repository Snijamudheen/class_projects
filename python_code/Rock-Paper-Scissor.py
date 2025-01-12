# Rock-Paper-Scissor Rules: Paper beats Rock, Rock beats Scissors, Scissors beats Paper.

from random import randint 

choice = ["rock","paper","scissor"]

computer = choice[randint(0,2)]

print("welcome to Rock,Paper,Scissor")
player = input("Enter your choice: ").lower()
print("Computer chose: " + computer)

if player == computer:
   print("Draw")
elif player == "rock" and computer == "paper":
   print("computer wins")
elif player == "rock" and computer == "scissor":
   print("player wins")
elif player == "paper" and computer == "rock":
   print("player wins")
elif player == "paper" and computer == "scissor":
   print("computer wins")
elif player == "scissor" and computer == "rock":
   print("computer wins")
elif player == "scissor" and computer == "paper":
   print("player wins")
