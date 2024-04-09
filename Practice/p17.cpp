// Even integers first in an array

    int arr[8] = {1,2,3,4,7,10,11,20};

    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        for (int j = i+1; j < sizeof(arr)/sizeof(int); j++)
        {
            if (arr[i]%2 != 0)
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
