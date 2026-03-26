#include <stdint.h>
#include <stdbool.h>
#define EMPTY 0
#define PLAYER_X 1
#define PLAYER_O 2
#define BOARD_SIZE 9
#define MODE_PVP 0
#define MODE_PV_AI 1

typedef struct {
    int8_t board[BOARD_SIZE];
    int8_t currentPlayer;
    int8_t gameMode; // 0: PvP, 1: PvAI
    int8_t winner;   // 0: None, 1: X, 2: O, 3: Draw
    bool isGameOver;
    } TicTacToeState;
    