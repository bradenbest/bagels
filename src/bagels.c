#include <stdio.h>
#include <stdlib.h>

#include "input.h"
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
  short int i;
  for(i = 0; i < 3; i++){
    nums[i] = rand() % 10;
  }
  while(has_duplicates(nums));
}

static void guess(player *p, int *nums){
  short int i;
  short int points[2] = {0,0};
  char user_guess[3] = {0,0,0};
  printf("Enter your guess: ");
  get_num_input(user_guess);
  for(i = 0; i < 3; i++){
    if(user_guess[i] == nums[i]){
      points[0] ++;
      printf("fermi ");
    }else if(user_guess[i] == nums[0] || user_guess[i] == nums[1] || user_guess[i] == nums[2]){
      points[1] ++;
      printf("pico ");
    }
  }
  if(!points[0] && !points[1]){
    printf("bagels");
  }else if(points[0] == 3){
    printf("\r\033[K");
    p->game_over = 2;
  }
  printf("\n");
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
      printf("Game Over!\nYou ran out of guesses.\nThe numbers were %i,%i,%i\n", nums[0], nums[1], nums[2]);
      p->losses += 1;
      break;
    }
    if(p->game_over == 2){
      printf("You Won!\n");
      p->wins += 1;
      break;
    }
  }
  printf("Wins:\t%i\nLosses:\t%i\n", p->wins, p->losses);
}

