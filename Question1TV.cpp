int CalcMinFloor(int numFloors, float maxTVForce)
{
    //CurrentForce processes total force at each floor
    float currentForce = 0;
    int returnFloor = -1; // Return value, -1 will be default case, stating that it will not break when dropped
    
    for(int lcv = 0; lcv < numFloors; lcv++) //LCV controls what floor we are on
    {
        //get force from Calcforcefromfloor then add to current floor to sum total force
        currentForce += CalcForceFromFloor(lcv);
        
        if(currentForce >= maxTVForce)
        {
            returnFloor = lcv; //floor where tv will break
            lcv = numFloors;   //exit loop
        }
    }
    return returnFloor;
}