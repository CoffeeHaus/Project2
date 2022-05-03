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
    printf("This solution was completed by:\n");
    printf("Andrew Neumann\n");
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
    TrafficData * TD = readTrafficDataFromInputFile(filename);
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
    int vertices, roads;
    int vecticeIndex;
    int numCarsToAdd, numIncomingRoads;
    int numPrintRoads;
    int PrintRoads[100];
    int numOfIntersections;

    FILE* file = fopen(filename, "r");
    if (file) {
        if(fscanf(file, "%d %d \n\n", &vertices, &roads) != 2) printf("ERROR");

        for (int x = 0; x < vertices; x++)
        {
            int fromVertex, length, greenOn, greenOff, cycleResets;
            if (fscanf(file, "%d\n", &numIncomingRoads) != 1) printf("ERROR");
            for (int i = 0; i < numIncomingRoads; i++)
            {
                if (fscanf(file, "%d %d    %d %d %d\n", &fromVertex, &length, &greenOn, &greenOff, &cycleResets) != 5) printf("ERROR");
                else 
                {
                createRoad(fromVertex, i,  length, greenOn, greenOff, cycleResets);
                }
                
            }
            fscanf(file, "\n");
        }

        fscanf(file, "\n\n");
        
        if (fscanf(file, "%d\n", &numOfIntersections) != 1) printf("ERROR");
        for (int x = 0; x < numOfIntersections; x++)
        {
            int from, to, timestep;
            int carsToEdge;
            int CarDestination;
            if (fscanf(file, "%d %d %d\n", &from, &to, &timestep) != 3) printf("ERROR");
            if(fscanf(file, "%d\n", &carsToEdge) != 1) printf("ERROR");
            for (int d = 0; d < carsToEdge; d++)
            {
                if(fscanf(file, "%d", &CarDestination) != 1) printf("ERROR");
                createCar(from, to, timestep, CarDestination)
            }
            fscanf(file, "\n");
        }

        fscanf(file, "\n\n");
        if (fscanf(file, "%d \n", &numPrintRoads) != 1) printf("ERROR");
        for (int x = 0; x < numPrintRoads; x++)
        {
            if(fscanf(file, "%d", &PrintRoads[x]) != 1) printf("ERROR");
            fscanf(file, " ");
        }

        fclose(file);
    } // end of if file
    return NULL; /* Optional TODO: Replace this with your TrafficData pointer */
}

