int num = 119,ans = 0;
    string a = to_string(num);
    int b = a.size();
    for (int i = 0; i < b; i++)
    {
        int temp = num % 10;
        ans += temp;
        num /= 10;
    }

    cout<<ans;
