#include <stdio.h>
#include <stdlib.h>

#include "bagels.h"

static const int DEFAULT_MAX_GUESSES = 10;

static int has_duplicates(int *nums){
  if(nums[0] == nums[1]){
    nums[1] = rand() % 10;
    return 1;
  }else if(nums[1] == nums[2]){
    nums[2] = rand() % 10;
    return 1;
  }else if(nums[2] == nums[0]){
    nums[0] = rand() % 10;
    return 1;
  }else{
    return 0;
  }
}

static void set_num(int *nums){
  int i;
  for(i = 0; i < 3; i++){
    nums[i] = rand() % 10;
  }
  while(has_duplicates(nums));
}

static void guess(player *p, int *nums){
/*
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
  */
}

void bagels(player *p){
  int nums[3] = {0,0,0};
  int guesses = DEFAULT_MAX_GUESSES;
  p->game_over = 0;
  set_num(nums);
  while(1){
    guess(p, nums);
    guesses --;
    if(guesses == 0){
      p->game_over = 1;
    }
    if(p->game_over == 1){
      printf("Game Over!\nYou ran out of guesses.\n The numbers were %i,%i,%i\n", nums[0], nums[1], nums[2]);
      p->losses += 1;
      break;
    }else if(p->game_over == 2){
      printf("You Won!\n");
      p->wins += 1;
      break;
    }
  }
  //Let main ask if play again via input.c
}

