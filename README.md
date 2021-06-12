# Basic-Battleship-Game
This is a basic battleship game coded in C. It is a game run within the terminal or command prompt.

To run, simply compile "A2_2.c" after unzipping.


How to play:

The function prints out "PLAYER 1", and then asks the user for two inputs:

1. The two coordinates of the first boat to be placed on the grid.

2. The two coordinates of the second boat to be placed on the grid.

[image](https://user-images.githubusercontent.com/69370722/121774152-ffcc0c80-cbd4-11eb-9555-93c0c13047f1.png)

A 0 value encodes a position with water in the grid. To indicate that a position contains part of a boat, the value is set to 1.



The function prints out "PLAYER 2", and then asks the user for one input:

• The coordinate of the location the user wants to target.

Example inputs:

![image](https://user-images.githubusercontent.com/69370722/121774467-ac5abe00-cbd6-11eb-9001-68c611a97626.png)

A 2 value encodes a position that has not been yet targeted (it is then unknown if there is water 
or a boat there). The function then checks if the targeted position is corresponding to water 
(0) or to a boat (1) in the reference grid. 

• If a boat is hit, the function prints "Hit!", updating the targeted position to 1 in the 
playing grid, and decrementing the number of positions left to sink all boats.

• If no boat is hit, the function prints "Missed!" updating the targeted position to 0 in 
the playing grid
