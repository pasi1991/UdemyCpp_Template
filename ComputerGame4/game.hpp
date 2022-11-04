#include <iostream>
#include <stdlib.h>

void game();

void printGameState(const std::uint32_t playerPosition);
bool isFinished(const std::uint32_t playerPosition);
void executeMove(std::uint32_t &playerPosition, const char move);

static constexpr std::uint32_t length = 10;
static constexpr std::uint32_t start = 0;
static constexpr std::uint32_t goal = 9;
char const left = 'a';
char const right = 'd';
