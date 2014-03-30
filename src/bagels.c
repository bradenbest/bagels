#include <stdio.h>
#include <stdlib.h>

#include "bagels.h"

void bagels(){

}

/*
import random

INTRO = "Welcome to bagels. I have a 3-digit number in mind. Think you can guess?"

def has_duplicates(arr):
  if arr[0] == arr[1]:
    arr[1] = int(random.random()*10) % 10
    return 1
  elif arr[1] == arr[2]:
    arr[2] = int(random.random()*10) % 10
    return 1
  elif arr[2] == arr[0]:
    arr[0] = int(random.random()*10) % 10
    return 1
  else:
    return 0

def gen_num():
  arr = []
  for i in range(3): 
    n = int(random.random()*10) % 10
    arr.append(n)
  return arr

def guess(nums):
  global GAME_OVER
  inp = str(input("Enter your guess: "))
  nums_user = [int(inp[0]), int(inp[1]), int(inp[2])]
  echo_back = ""
  vic_points = 0
  semi_points = 0
  for i in range(3):
    if nums_user[i] in nums and nums_user[i] == nums[i]:
      echo_back += "fermi "
      vic_points += 1
    elif nums_user[i] in nums:
      echo_back += "pico "
      semi_points += 1

  if vic_points == 0 and semi_points == 0:
    echo_back = "bagels"
  elif vic_points == 3:
    echo_back = ""
    GAME_OVER = 2

  print(echo_back)

def main():
  global GAME_OVER
  GAME_OVER = 0
  nums = gen_num()
  while has_duplicates(nums): 0
  guesses = 10
  print(INTRO)
  while 1:
    guess(nums)
    guesses -= 1
    if guesses == 0:
      GAME_OVER = 1

    if GAME_OVER == 1:
      print("Game Over!\nYou ran out of guesses.\nThe number was %i%i%i" % (nums[0],nums[1],nums[2]))
      break
    elif GAME_OVER == 2:
      print("You Won!")
      break
  if str(input("Play Again? [y/n] ")) == "y":
    main()

main()
*/
