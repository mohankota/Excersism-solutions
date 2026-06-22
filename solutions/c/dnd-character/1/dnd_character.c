#include "dnd_character.h"
#include <stdlib.h>
#include <math.h>

#define ROWS 6
#define COLS 4
#define UPPER_BOUND 6
#define LOWER_BOUND 1

dnd_character_t character;
int DiceMatrix[ROWS][COLS];

void populateMatrix(int matrix[ROWS][COLS]);
void sortMatrix(int matrix[ROWS][COLS]);

int modifier(int score)
{
	return floor((score - 10)/2.0);
}

void populateMatrix(int matrix[ROWS][COLS])
{
	for(int i = 0; i < ROWS; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			matrix[i][j] = rand() % (UPPER_BOUND - LOWER_BOUND + 1) + LOWER_BOUND;
		}
	}
}

void sortMatrix(int matrix[ROWS][COLS])
{
	int temp;
	
	for(int i = 0; i < ROWS; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			for(int k = j + 1; k < COLS; k++)
			{
				if(matrix[i][j] < matrix[i][k])
				{
					temp = matrix[i][j];
					matrix[i][j] = matrix[i][k];
					matrix[i][k] = temp;
				}
			}
		}
	}
}

dnd_character_t make_dnd_character(void)
{
	
    populateMatrix(DiceMatrix);
    sortMatrix(DiceMatrix);
	
	character.strength = DiceMatrix[0][0] + DiceMatrix[0][1] + DiceMatrix[0][2]; 
	character.dexterity = DiceMatrix[1][0] + DiceMatrix[1][1] + DiceMatrix[1][2];
	character.constitution = DiceMatrix[2][0] + DiceMatrix[2][1] + DiceMatrix[2][2];
	character.intelligence = DiceMatrix[3][0] + DiceMatrix[3][1] + DiceMatrix[3][2];
	character.wisdom = DiceMatrix[4][0] + DiceMatrix[4][1] + DiceMatrix[4][2];
	character.charisma = DiceMatrix[5][0] + DiceMatrix[5][1] + DiceMatrix[5][2];
	character.hitpoints = 10 + modifier(character.constitution);

    return character;
}

int ability(void)
{
    make_dnd_character();
    return character.strength;
}



