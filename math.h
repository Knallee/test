#ifndef MATH_H
#define MATH_H

/**
 * A struct representing a world oriented 3D vector
 */
typedef struct {
	uint16_t x;	/**< X-direction */
	uint16_t y;	/**< Y-direction */
	uint16_t z;	/**< Z-direction */
} vector_t;

/**
 * Calculates the distance between two vectors.
 *
 * @param vec1 			The first vector
 * @param vec2 			The second vector
 * @returns uint16_t 	Returns the absolute value between vec1 and vec2
 */
uint16_t distance(vector_t *vec1, vector_t *vec2);

#endif
