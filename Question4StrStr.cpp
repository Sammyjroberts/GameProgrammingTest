 const char* StrStr(const char* str, const char* target)
 {
     int lcv = 0;
     const char* returnChar;
     while(str[lcv] != NULL) //loop through character array
     {

		 int strLcv = lcv;
		 int tarLcv = 0;
		 while (str[strLcv] == target[tarLcv] && target[tarLcv] != NULL)
		 {
			 //loop through and check if equal till target is null
			 strLcv++;
			 tarLcv++;
		 }
		 if(target[tarLcv] == NULL) //if we reached the end of the target string
		 {
			 returnChar = &str[lcv];
			 break; //bad form
		 }
	 
		lcv++;
     }
     return returnChar;
 }