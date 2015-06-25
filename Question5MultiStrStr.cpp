unsigned int MultiStrStr(const char* str, const char* target, const char** retStrings)
 {
     int lcv = 0;
     const char* returnChar;
     int totalOccurances = 0;
     while(str[lcv] != NULL) //loop through character array
     {
        int strLcv = lcv;
        int tarLcv = 0;
        while (str[strLcv] == target[tarLcv] && target[tarLcv] != NULL)
        {
            //loop through and check if equal till target is null
            cout << "str: " << str[strLcv] << " tar: " << target[tarLcv] << endl;
            strLcv++;
            tarLcv++;
        }
        if(target[tarLcv] == NULL) //if we reached the end of the target string
        {
            cout << "found at: " << lcv <<  endl;
            cout << "Adding: " << str[lcv] << endl;
            retStrings[totalOccurances] = &str[lcv];
            totalOccurances++;
        }
        lcv++;
     }

     return totalOccurances;
 }