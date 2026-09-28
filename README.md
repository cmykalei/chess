# Chess
A chess game implementation in C++.

## Project 🌳
```
.
├── board
│   ├── board.cpp
│   ├── board.h
│   ├── piece.cpp
│   ├── piece.h
│   ├── pos.cpp
│   ├── pos.h
│   ├── square.cpp
│   └── square.h
├── fen.cpp
├── fen.h
├── main.cpp
├── move.cpp
└── move.h
```

### Usage
Compile from the project root:
```bash
g++ -o chess main.cpp board/*.cpp fen.cpp move.cpp
```

## Commands
1. To compile the program use `g++ -o chess main.cpp board/*.cpp fen.cpp move.cpp`.
2. To run the program use `./chess`.
