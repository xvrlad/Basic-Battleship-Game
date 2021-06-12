#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZEGRID 4

void displayGrid(int grid[SIZEGRID][SIZEGRID]);
void initGrid(int grid[SIZEGRID][SIZEGRID]);
void fire(int gridRef[SIZEGRID][SIZEGRID], int gridEvolv[SIZEGRID][SIZEGRID], int* nPosLeft);

int main ()
{
  int gridP1[SIZEGRID][SIZEGRID] ={{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
  int gridP2[SIZEGRID][SIZEGRID] ={{2, 2, 2, 2}, {2, 2, 2, 2}, {2, 2, 2, 2}, {2, 2, 2, 2}};
  int nPos = 4; //Two 2-cell long boats = 4 positions to sink

  displayGrid(gridP1);

  initGrid(gridP1);

  displayGrid(gridP1);

  while(nPos != 0){
    fire(gridP1, gridP2, &nPos);
    displayGrid(gridP2);
  }

  printf("Congratulations, you sank all the ships!\n");


  return 0;
}

// PART1 : Function to display the grid
void displayGrid(int grid[SIZEGRID][SIZEGRID])
{

	// Enter code for function display Grid here
//	printf("%d\n", SIZEGRID);
	for (int row = 0; row < SIZEGRID; row++) {
        for (int column = 0; column < SIZEGRID; column++) {
            printf("%d ", grid[row][column]);
        }
        printf("\n");
	}
	printf("\n");
}

// PART2 : Function to Initialise the grid with Player 1 inputs
void initGrid (int grid[SIZEGRID][SIZEGRID])
{

	// Enter code for function initGrid here
	printf("PLAYER 1\n");
	char boat1_coordinate1[5];
	char boat1_coordinate2[5];
	char boat2_coordinate1[5];
	char boat2_coordinate2[5];
    printf("Enter two valid coordinates of boat 1, separated with a whitespace: ");
    scanf("%s %s", boat1_coordinate1, boat1_coordinate2);
    printf("\n");
    printf("Enter two valid coordinates of boat 2, separated with a whitespace: ");
    scanf("%s %s", boat2_coordinate1, boat2_coordinate2);
    printf("\n");

    grid[boat1_coordinate1[0] - 65][(int)(boat1_coordinate1[1]) - 49] = 1; //using the ascii values of each char
    grid[boat1_coordinate2[0] - 65][(int)(boat1_coordinate2[1]) - 49] = 1;

    grid[boat2_coordinate1[0] - 65][(int)(boat2_coordinate1[1]) - 49] = 1; //using the ascii values of each char
    grid[boat2_coordinate2[0] - 65][(int)(boat2_coordinate2[1]) - 49] = 1;
}

// PART3 : Function to fire to a position inputed by the Player 2 and modify the playing grid as needed
void fire(int gridRef[SIZEGRID][SIZEGRID], int gridEvolv[SIZEGRID][SIZEGRID], int* nPosLeft)
{

	// Enter code for function fire here

    printf("PLAYER 2\n");
    char boat_coordinate[5];
    printf("Enter the coordinate you want to target: ");
    scanf("%s", boat_coordinate);
    printf("\n");

    if (gridRef[boat_coordinate[0] - 65][(int)(boat_coordinate[1]) - 49] == 1) {
        printf("Hit!\n");
        gridEvolv[boat_coordinate[0] - 65][(int)(boat_coordinate[1]) - 49] = 1;
        *nPosLeft = *nPosLeft - 1;
    } else {
        printf("Missed!\n");
        gridEvolv[boat_coordinate[0] - 65][(int)(boat_coordinate[1]) - 49] = 0;
    }
}




