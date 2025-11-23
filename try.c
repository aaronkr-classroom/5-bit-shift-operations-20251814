#include <stdio.h>
#include "calc.h"

#define NAME "Aaron"
#define VERSION_NUMBER 2.0
#define GAME_ID Oxafed3218
#define PLAYER_LIVES 015
#define ADD_FIVE(i) (i+5)

int main(void) {
	for (int i = 0; i <= 100; i++) {
		printf("(%d)\tMy name is %s!\n", i, NAME);
	}
	return 0;
}