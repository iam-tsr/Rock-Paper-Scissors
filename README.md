# Rock Paper Scissors

A C-based Rock-Paper-Scissors game for testing decision-making skills and providing entertainment. Players face off against the computer by choosing rock, paper, or scissors.

## How to Use

1. **Compile the Code**
   - Use a C compiler (e.g., GCC) to compile the code. For example, using GCC:
     ```
     gcc atm_project.c -o atm_project
     ```
2. **Run the Program**
   - Execute the compiled program:
     ```
     ./RockPaperScissors.c
     ```
3. **Options**
   - Once the program starts, you'll be presented with the following options:
     - Press '1' for 'Rock'
     - Press '2' for 'Paper'
     - Press '3' for 'Scissors'
4. **Play your Turn**
   - Select an option by entering the corresponding number and follow the prompts. After input, the program will save your turn and show what computer choose plus show result in the end.
5. **Continue or Exit**
   - You'll be asked if you have any other queries. Enter 'Y' to continue or 'N' to exit.
6. **Note**
   - The program will ensure that in player's turn give input 1, 2, or 3 only, it will display ERROR message and ask input again.
## Code Overview
The code defines various functions for players compete against the computer by choosing rock, paper, or scissors, testing their decision-making skills and providing entertainment.
### Main Function
- The main function initializes a function (`random`).
- It generates a random number which will be taken as computer turn.
- Within the loop, the user is prompted to choose an option.
- Based on the chosen option, the corresponding function is called.
- In the end it shows a result and what option choosed by both computer and player.
- The user is then asked if they have any other queries. If they choose to continue, the loop repeats. If they choose to exit, the program terminates.
### Note
- The code assumes that the user interacts with the program through a console or terminal.
