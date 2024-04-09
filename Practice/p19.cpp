   // Maximum number of 1's in a row using array

    int arr[3][4] = {{0,1,1,1},{0,0,0,1},{0,0,1,1}};
    int count,value=0,index=0;
    int brr[3] = {};
    
    for (int i = 0; i < 3; i++)
    {
        count=0;
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        brr[i] = count;
    }

    value = brr[0];

    for (int i = 1; i < 3; i++)
    {
        if (brr[i] > value)
        {
            value = brr[i];
        }
    }    
    cout<<"Greatest Array is: "<<value;
