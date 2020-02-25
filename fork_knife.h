#ifndef FORK_KNIFE_H
#define FORK_KNIFE_H

#include <stdint.h>
#include "math.h"

enum player_state { alive, wounded, dead };


typedef struct {
	char		*name;				/**< Weapon name */
	uint8_t 	max_ammo;			/**< Maximum ammo */
	uint8_t 	max_ammo_in_clip;	/**< Maximum ammo in clip */
	uint8_t 	ammo;				/**< Current ammo */
	uint8_t 	ammo_in_clip;		/**< Current ammo in clip */
	uint16_t 	range;				/**< Shooting range */
} weapon_t;

typedef struct {
	char 			*name;		/**< The player's Steam name */
	uint8_t 		max_health;	/**< The maximum health */
	uint8_t 		health;		/**< Current player health */
	weapon_t		weapon;		/**< Current weapon, NULL if no weapon */
	player_state	state;		/**< Current player state */
} player_t;

/**
 * Initialize world environment and spawn players
 */
void setup_world();

/**
 * Shoot a player weapon.
 *
 * @param shooter		The player initiating the shot
 * @param direction 	The direction in which the player shoots
 * @return player_t*	Returns the shot player, NULL if no player was hit
 */
player_t *fire_weapon(player_t *shooter, vector_t direction);


#endif
