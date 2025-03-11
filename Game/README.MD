# Snake Game in C++ - First Class Project

Welcome to the first class of the **Data Structures and Algorithms (DSA)** course! In this class, we will explore some fundamental concepts of programming in C++, such as **variables**, **loops**, and using the **Standard Library**. We will implement a classic **Snake Game** to practice these concepts.

## Introduction

This project is a **Snake Game** written in **C++**. The game involves controlling a snake that moves around the screen, eating food to grow longer while avoiding collisions with itself or the walls. The game demonstrates how to use **variables**, **loops**, and other basic C++ concepts.

In this first class, we will focus on:

- **Variables**: Storing and manipulating data such as position, score, and game state.
- **Loops**: Repeating tasks like moving the snake, drawing the game board, and checking for collisions.
- **Standard Library**: Using libraries like `cstdlib` for random number generation, `unistd.h` for creating delays, and `termios.h` for detecting keyboard inputs.

## Concepts Covered

- **Variables**: We use variables like `x`, `y` to represent the snake's position and `score` to keep track of the score.
- **Loops**: A `while` loop is used to continuously update the game state, and `for` loops help to draw the game grid and handle the snake's body.
- **Functions**: Functions like `setup()`, `draw()`, `input()`, and `logic()` break down the game into manageable parts.
- **Control Structures**: We use `if` and `switch` statements to handle game logic such as movement, collision detection, and scoring.

## How to Play

1. **Start the Game**: After running the program, the game will prompt you to choose a difficulty level:
   - **1** - Easy
   - **2** - Medium
   - **3** - Hard

2. **Control the Snake**: Use the following keys to control the snake:
   - **W**: Move Up
   - **A**: Move Left
   - **S**: Move Down
   - **D**: Move Right
   - **X**: Quit the game

3. **Objective**: The goal of the game is to collect as many fruits (denoted by `*`) as possible. Each time the snake eats a fruit, it grows longer, and you gain 10 points.

4. **Game Over**: The game ends when the snake collides with the walls or itself.

## Code Explanation

### Key Components of the Code

1. **Variables**: 
   - `x`, `y`: Coordinates of the snake's head.
   - `fruitx`, `fruity`: Coordinates of the fruit.
   - `snakeTailX[]`, `snakeTailY[]`: Arrays to store the position of the snake's tail.
   - `score`: The player's score.
   - `key`: Stores the current direction of the snake (1 = Left, 2 = Right, 3 = Up, 4 = Down).
   - `gameover`: A flag that indicates whether the game is over or not.

2. **Loops**: 
   - The **`while`** loop in `main()` continuously updates the game until `gameover` becomes `1`.
   - The **`for`** loop in the `draw()` function is used to print the game grid.

3. **Functions**:
   - `setup()`: Initializes the game settings, including random fruit position and difficulty level.
   - `draw()`: Draws the game board, snake, and fruit.
   - `input()`: Reads user input to change the snake's direction.
   - `logic()`: Updates the snake's position, checks for collisions, and handles scoring.

4. **Libraries**:
   - `cstdlib`: Used for random number generation (for fruit position).
   - `unistd.h`: Used for the `usleep()` function to control the speed of the game.
   - `termios.h` and `fcntl.h`: Used to detect keyboard inputs without waiting for the Enter key.

## Setup and Running the Game

### Prerequisites:
- A C++ compiler (like **g++**) installed on your system.
- A terminal or command-line interface.

### Steps to Run the Game:

1. **Download the Code**: Copy the code from the repository or type it into a file named `snake_game.cpp`.

2. **Compile the Code**:
   Open your terminal and run the following command to compile the code:
   ```bash
   g++ snake_game.cpp -o snake_game
