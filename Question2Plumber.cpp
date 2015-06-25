// Assuming vec3.UP is a constant value associated to what is UP in the plane
int WhatSideIsObjectOn(const Vec3& plumberPos, const Vec3& plumberDir, const Vec3& objPos)
{
    Vec3 rightOfObject = Vec3.Cross(plumberDir, Vec3.UP); 
    Vec3 directionToObject = objPos - plumberPos;
    
    int returnValue;
    
    if(Vec3.Dot(rightOfObject, directionToObject) < 0)
    {
        returnValue = 1; //Right hand case
    }
    else if(Vec3.Dot(rightOfObject, directionToObject) > 0)
    {
        returnValue = -1; //left hand case
    }
    else
    {
        returnValue = 0; //In front or behind case
    }
	return returnValue;
}