/*Arturo Rodriguez
Homework 1
Summary: Program simulates game of "Craps"
CS 3035
9/9/22*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
//Function Prototypes
int rollDice();

int main() {
	srand(time(NULL));//Use current time as seed
	//Asign random dice to a variable
	int diceRoll = rollDice();
	//Include switch case statement: win/loss/cont to roll
	switch(diceRoll) {
		//Winning Case
		case 7:
		case 11:
		printf("You rolled a %d\n",diceRoll);
		printf("You Win!!\n");
		break;
		//Losing case
		case 2:
		case 3:
		case 12:
		printf("You rolled a %d\n",diceRoll);
		printf("You lose!!craps!\n");
		break;
		//Continuing Case
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		//Num becomes point, must continute rolling until point is met
		//If roll 7 before point, player loses
		printf("You did not win or lose: The game will continue!");
		printf("Your point has become the number: %d\n", diceRoll);
		printf("You will re-roll until you get your point, if you land a 7, you will lose: \n");
		//apply if else statement to determine if player loses or not
		int pointer = diceRoll;//Assign pointer to dice roll
	
		//int diceRoll = rollDice();
		//If else loops
		while(1) {
		int diceRoll = rollDice();//Assign new random value
			if(diceRoll == 7) {
				printf("OH NO! You rolled a %d! You Lose!\n",diceRoll);
				break;
			}else if(diceRoll == pointer) {
				printf("YAY! You rolled a %d! YOU WIN!\n",diceRoll);
				break;
			}else{
				printf("You will re-roll Again: ");
				printf("%d\n",diceRoll);
				int diceRoll = rollDice();
				}
		}
		
		break;
	}
	return 0;//End main

}

//Function roll dice
//Generates two random numbers between 1 and 6 
int rollDice() {
	//Two random number variables
	int randNum1;
	int randNum2;
	int randSum;
	int random_variable = rand();
	//Assign both random numbers
	randNum1 = (rand() % (6 -1 +1)) + 1;
	//printf("%d\n",randNum1 );
	randNum2 = (rand() % (6 -1 +1)) + 1;
	//printf("%d\n",randNum2 );
	//Assign sum to variable
	randSum = randNum1 + randNum2;


	return randSum;


}