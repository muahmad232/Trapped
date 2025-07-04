---

## Trapped - A Maze Game of Wits and Speed

**Trapped** is a thrilling maze game built in **C++ using SFML** that tests your logic, timing, and strategy. Navigate through complex mazes with increasing difficulty — or compete with a friend in multiplayer mode. Whether you're solving alone or racing side by side, you’ll need focus and fast reflexes to escape.

---

## 🎮 Game Features

* 🧩 **Three Levels of Difficulty**

  * **Easy**: For beginners learning the ropes
  * **Medium**: A challenge for casual players
  * **Hard**: Only for the maze masters

* 🧑‍🤝‍🧑 **Multiplayer Mode**

  * Two players play **simultaneously**, each on their own instance of the same maze
  * Great for side-by-side competition or co-op strategy

* 📝 **Score Saving and Display**

  * Scores are stored in a **CSV file**
  * Tracks players’ performances across sessions
  * In-game score display feature

* 🖼️ **Built with SFML**

  * Smooth graphics rendering
  * Real-time movement and interaction
  * Easy-to-read and modify game logic

---

## 🛠️ How to Run the Project

### ✅ Recommended Environment

* **Visual Studio** (2019 or newer)
* **SFML 2.5+**

  * Make sure to link all necessary SFML libraries (graphics, window, system, audio, etc.)
  * Set up a **Visual Studio SFML project** template or configure manually

### 📦 Steps to Run

1. **Clone the Repository**

   ```bash
   git clone https://github.com/muahmad232/Trapped.git
   cd trapped-maze-game
   ```

2. **Download & Install SFML**

   * [SFML Download Page](https://www.sfml-dev.org/download.php)
   * Link SFML to your Visual Studio project (include directories, linker settings)

3. **Open the Project**

   * Open the `.sln` file in Visual Studio
   * Make sure SFML is properly linked (see above)

4. **Build & Run**

   * Press `Ctrl + F5` or click **Run ▶️**

---

## 🧠 Gameplay Overview

* Use arrow keys or assigned controls to move through the maze
* Reach the end of the maze to win
* In multiplayer mode, race to finish before your opponent
* Player scores are based on **time taken** or **backtracking** (depending on your implementation)
* At the end of the game, scores are:

  * **Saved in a CSV file**
  * **Displayed in the score window**

---

## ⚙️ Dependencies

* **SFML** (Graphics, Window, System modules)
* **C++17 or above** recommended

---

## 📄 License

MIT License — Free to modify, extend, or include in your own maze adventures!

---
