#include "road.h"

/* Suggested TODO - Write a function to create road.
 */
RoadData* createRoad(int source, int destination, int length, int greenOn, int greenOff, int cycleResets)
{	
RoadData * road = malloc(sizeof(RoadData));
road->source = source;
road->destination = destination;
road->length = length;
road->greenOff = greenOff;
road->greenOn = greenOn;
road->cycleResets = cycleResets;
road->Cars = createQueue();

}
/* Suggested TODO - Write a function to free a road.
 */
void freeRoad(RoadData* road)
{
	freeQueue(road->Cars);
	free(road);
}

/* Suggested TODO - Write a function that attempts to move the cars on a given road forward (if space ahead of them was empty).
 */


/* Suggested TODO - Write a function to attempt to move the car at the first position on a given road
 * to the last position of a another given road.
 */

/* Suggested TODO - Write a function to attempt to move a car from the add car queue onto the end of this road.
 */

/* Suggested TODO - Write a function to update the current state of the traffic light based on the current cycle.
 */

/* Suggested TODO - Write a function to print the destinations of the cars on the road
 */
 //printf("Cars on the road from %d to %d: \n", ????, ????);


