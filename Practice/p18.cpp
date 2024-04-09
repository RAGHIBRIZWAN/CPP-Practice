
    // Running sum in an array

    int arr[5] = {1,2,3,4,5};
    int sum = 0;
    for (int i = 1; i < 5; i++)
    {
        arr[i] += arr[i-1];
    }
    

    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        cout<<arr[i]<<" ";
    }
