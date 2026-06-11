#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s;
    cin >>s;

    unordered_map<int, int> mp;

    int sum =0;
    int maxLen =0;

    mp[0] =-1;

    for (int i =0; i <s.length(); i++)
    {
        if (s[i] =='0')
            sum +=-1;
        else
            sum +=1;

        if (mp.find(sum)!= mp.end())
        {
            int len =i - mp[sum];

            if (len> maxLen)
                maxLen = len;
        }
        else
        {
           mp[sum] = i;
        }
    }

    cout << "Length = "<< maxLen;
    return 0;
}
