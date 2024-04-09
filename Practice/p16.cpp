//Sorting array in order

    int arr[8] = {1,1,0,1,0,0,1,0};

    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        for (int j = i+1; j < sizeof(arr)/sizeof(int); j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }

    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        cout<<arr[i];
    }
