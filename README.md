# Guess_the_number_Game
A simple number guessing game written in C that uses a random number generation, loops, and conditional statements to demonstrate basic programming.
https://parth-gawade-debug.github.io/Guess_the_number_Game/

## How It Works

The program picks a random number between 0 and 20, and you have **5 chances** to guess it. After each guess, it tells you whether the actual number is higher or lower, so you can narrow it down.

- Guess too high? It'll tell you to go lower.
- Guess too low? It'll tell you to go higher.
- Enter a number outside 0–20? It won't count against your attempts.
- Use all 5 guesses without getting it? It reveals the answer.

---

## How to Compile and Run
```bash
gcc guessing_game.c -o guessing_game
./guessing_game
```

---

## Sample Output
```
Welcome to the Guessing Game!
I have selected a random number between 0 and 20. Can you guess it?
You have 5 guesses left.
Enter your guess: 10
Sorry wrong guess! The number is higher than 10.
You have 4 guesses left.
Enter your guess: 15
Sorry wrong guess! The number is lower than 15.
You have 3 guesses left.
Enter your guess: 12
Congratulations! You guessed the number correctly!
```

---

## Features

- Random number generation using `srand()` seeded with the current time, so you get a different number every run
- Input validation — entering a number outside the 0–20 range won't waste a guess
- Hints after every wrong guess to help you zero in on the answer

---

## Requirements

- A C compiler (GCC recommended)
- Standard C libraries only — no external dependencies
