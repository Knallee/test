
#include "fork_knife.h"
#include "math.h"

#define MAX_PLAYERS (16 + 16)

uint8_t total_num_players;

int main()
{

	player_t player1 = { .name = "Noxet", .state = alive };
    setup_world();

    while(1) {
	    vector_t random_dir = { .x = 12, .y = 125, .z = 1337 };
		
		player_t *enemy = fire_weapon(&player1, random_dir);
		if (enemy != NULL) {
			enemy->health--;
			enemy->state = wounded;
		}
    }
}

