int num = 199,ans1 = 0,ans2 = 0,ans3 = 0,count = 0;
    string a = to_string(num);
    int b = a.size();
    if (num == 0)
    {
        count = 0;
        return count;
    }

    if (a.size() == 1)
    {
        return num;
    }
    
    
    for (int i = 0; i < b; i++)
    {
        int temp1 = num % 10;
        if (temp1 == 0)
        {
            count--;
        }
        ans1 += temp1;
        count++;
        num /= 10;
    }

    cout<<"NUM: "<<ans1<<endl;

    string c = to_string(ans1);
    int d = c.size();

    if (ans1 == 0)
    {
        count = 0;
        cout<< count<<endl;
    }

    if (c.size() == 1)
    {
        cout<< ans1<<endl;
    }

    for (int i = 0; i < d; i++)
    {
        int temp2 = ans1 % 10;
        if (temp2 == 0)
        {
            count--;
        }
        ans2 += temp2;
        count++;
        ans1 /= 10;
    }

    cout<<ans2<<endl;
    

    string e = to_string(ans2);
    int f = e.size();

    if (ans2 == 0)
    {
        count = 0;
        cout<< count<<endl;
    }

    if (e.size() == 1)
    {
        cout<< ans2<<endl;
    }

    for (int i = 0; i < d; i++)
    {
        int temp3 = ans2 % 10;
        if (temp3 == 0)
        {
            count--;
        }
        ans3 += temp3;
        count++;
        ans2 /= 10;
    }

    cout<<ans3<<endl;
}
