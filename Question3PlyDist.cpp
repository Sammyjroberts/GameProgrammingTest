void UpdatePlayerDistances(float* retPlyDistanceTable, Vec3* plyPositions, int numPlys)
{
    // I am assuming retPlyDistanceTable, and plyPositions are arrays, and that we have a way to know
    // which player distance is which since I am only returning a float and no key or ID
    
    /* The table is organized so that all distances for player 1 are in indices
     *  0 to numplayers-1 then player2 would be numplayers -> numplayers-> numplayers-1
     * etc
     */
    int tableCount = 0;
    for(int lcv = 0; lcv < numPlys; lcv++)
    {
        for(int lcv2 = 1; lcv2 < numPlys; lcv2++)
        {
            retPlyDistanceTable[tableCount] = plyPositions[lcv] - plyPositions[lcv2];
            //could also do Vec3.distance(plyPositions[lcv], plyPositions[lcv2])
            tableCount++;
        }
    }
    
    /* How to optimize this code:
     * in this program you will get the distance of players 2 times so the 
     * distance between p1 - p2 and p2 - 1 where p1 and p2 are player 1 and player 2
     * With further context you can optimize further depending on how the data 
     * will be used etc
     * could implement a hash table for bigger lists
     * could use a linked list to hold more information about who's distance 
     * we are looking at
     */
    
    /* Other data that could be useful
     * place the players in a spatial database to see if certain players 
     * even need to check distance this will optimize code
     * How the table will be used in other parts of the program. we know that it
     * will only have 22 players on the field for a maximum of 121 distances
     * but it would be useful to be able to return the data in a node that contained
     * the distance and "Player 1 to player 2" or something. For clarity.
     */
}