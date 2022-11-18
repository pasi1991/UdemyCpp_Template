#ifndef B8C9E173_217F_4444_9974_0055408EE1B7
#define B8C9E173_217F_4444_9974_0055408EE1B7
#include <iostream>
#include <stdlib.h>

void game();

void printGameState(const std::uint32_t playerPositionX, const std::uint32_t playerPositionY);
bool isFinished(const std::uint32_t playerPosition);
void executeMove(std::uint32_t &playerPosition, const char move);

static constexpr std::uint32_t length = 10;
static constexpr std::uint32_t start = 0;
static constexpr std::uint32_t goal = 9;
char const left = 'a';
char const right = 'd';
char const up = 'w';
char const down = 's';


#endif /* B8C9E173_217F_4444_9974_0055408EE1B7 */
