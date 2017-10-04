#ifndef GAME_HPP
#define GAME_HPP

#include <string>
#include <fstream>

class othelloGame {
    public:
        bool gameOver = false;

        othelloGame();

        // Initialize board
        void newGame();

        // Load game from file
        void loadGame(std::string fileName);

        // Moke a move
        void move();

        // Update status of the game
        void updateStatus();
};

#endif // GAME_HPP
