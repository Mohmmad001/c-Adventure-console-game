# C++ Adventure Console Game 🗝️

**A text-based adventure game built in C++!**  

Explore mysterious rooms, collect items, solve puzzles, and face challenges. Every choice matters — strategy is key!

---

## Gameplay Overview

- Explore rooms: **Home, Forest, Lake, Cave, Secret Room, Treasure Room**  
- Collect items: **Torch, Sword, Key, Healing Potion**  
- Gather coins (some rooms only give coins once)  
- Face enemies like **the Goblin** — play smart to win  
- Improve your player attributes: **Health, Strength, Power Attack, Defense**  

> ⚠️ Certain rooms require specific items (like a Torch or Key) to enter safely.

---

## Controls

- Choose actions in rooms: **1, 2, 3, 4**  
- Move between rooms using directions: **N / S / E / W** (enter the first letter)  
- Strategy matters — fight only when ready, collect wisely, and survive!

---

## Player Attributes

| Attribute      | Description |
|----------------|------------|
| Health         | Life points, drops when attacked |
| Strength       | Helps perform physical actions |
| Power Attack   | Damage dealt during combat |
| Defense        | Reduces incoming damage |

---

## Project Structure

main.cpp
player.h/.cpp
player_attribute.h/.cpp
room.h/.cpp
home.h/.cpp
forest.h/.cpp
lake.h/.cpp
cave.h/.cpp
secret_room.h/.cpp
treasure_room.h/.cpp
item.h/.cpp
README.md

yaml
Copy code

---

## How to Run
git clone https://github.com/Mohmmad001/c-Adventure-console-game.git
cd c-Adventure-console-game
g++ -std=c++20 main.cpp *.cpp -o ConsoleQuest

./ConsoleQuest   # Linux / macOS
ConsoleQuest.exe # Windows

Future Improvements
More rooms, puzzles, and enemies
Save/load game functionality
Upgraded combat system with weapons and magic
Dynamic story choices affecting endings

Author
Mohamed Sharif – Computer Science student

Follow my journey in C++ development!
