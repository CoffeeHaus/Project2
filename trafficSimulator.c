#include "trafficSimulator.h"

/* Function declarations: */
TrafficData* readTrafficDataFromInputFile( char* name );

/* printNames
 * input: none
 * output: none
 *
 * Prints names of the students who worked on this solution
 */
void printNames( )
{
    /* TODO : Fill in you and your partner's names (or N/A if you worked individually) */
    printf("This solution was completed by:\n");
    printf("<student name #1>\n");
    printf("<student name #2 (if no partner write \"N/A\")>\n");
}


/* trafficSimulator
 * input: char* name of file to read
 * output: N/A
 *
 * Read in the traffic data from the file whose name is stored in char* filename
 * Simulate the rules outlined in the project 2 description
 */
void trafficSimulator( char* filename )
{
    /* TODO: complete this function */

    /* Read in the traffic data.  It's recommended you put the code to do this in the function readTrafficDataFromInputFile. */

    /* Loop until all events processed and either all cars reached destination or gridlock has occurred */

        /* Loop on events associated with this time step */

        /* First try to move through the intersection */

        /* Second move cars onto road if possible */

        /* Third move cars forward on every road (only those that haven't moved yet this time step) */

}

/* readTrafficDataFromInputFile
 * input: char* filename of file to read
 * output: TrafficData* which stores the data of this road network
 *
 * Create a new TrafficData variable and read in the traffic data from the file whose name is stored in char* filename
 */
TrafficData* readTrafficDataFromInputFile( char* filename )
{
    /* Optional TODO: */

    return NULL; /* Optional TODO: Replace this with your TrafficData pointer */
}

