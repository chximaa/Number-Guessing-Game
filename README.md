
# 📘 **README — Guess The Number Games (C & C++)**

## 🎮 Overview

This repository contains **two versions** of a “Guess the Number” console game:
one written in **C** and the other in **C++**.

Both programs let the player try to guess a hidden number while receiving hints that guide them.
They are simple, beginner-friendly, and perfect for learning basic programming concepts like:

* loops
* conditions
* input/output
* randomness (C version)
* counters
* replay systems

---

## 📂 Files in the Repository

### **1️⃣ `guess.cpp` (C++ version)**

A fixed-number guessing game where the secret number is **51**.

🟦 **How it works:**

* The game asks the user to guess a number.
* If the guess is too low (between 0–40), the message is:
  **"you're very far away"**
* If the guess is close (between 40–60), the message is:
  **"you're so close"**
* Otherwise:
  **"you're nowhere near the number"**
* The game continues until the user finds **51**.
* The program then prints how many tries the player used.

This version practices beginner logic, ranges, and while loops.

---

### **2️⃣ `guess_game.c` (C version)**

A dynamic version of the game using **random number generation** and **limited tries**.

🟩 **How it works:**

* The program randomly generates a number between **1 and 100**.
* The player has **10 tries** to guess it.
* After each guess, the program prints hints:

  * **"you're too far!"** (guess > number)
  * **"you're too close!"** (guess < number)
* If the player guesses right → they win.
* If they run out of tries → game ends.
* After each game, the user can choose:

  * **1 = play again**
  * **2 = quit**
* The program restarts using a `goto play;` label.

This version practices loops, random numbers, conditions, and simple state management.

---

## ▶️ Running the Programs

### **Compile & Run the C++ Game**

```bash
g++ guess.cpp -o guess
./guess
```

### **Compile & Run the C Game**

```bash
gcc game.c -o game
./game
```

---

## 📚 Concepts Learned from This Repo

* `while` and `do/while` loops
* Conditional logic (`if`, `else if`, `else`)
* Console input/output
* Guessing game logic
* Random numbers with `rand()`
* Try counters
* Replay logic
* Range checking (C++ version)
* Basic game design

---


This project is licensed under the MIT License.




