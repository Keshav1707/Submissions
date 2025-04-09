#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{
    int n; cin >> n;
    vector<int> v(n) , b(n);
    map<int,int> m1 , m2;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    for (int i = 1; i <= 2 * n; i++)
    {
        m1[i] = 0; m2[i] = 0;
    }
    
    int flag1 = v[0] , flag2 = b[0];
    int cnt = 1;
    for (int i = 1; i < n;i++)
    {
        if (v[i] == flag1)
        {
            cnt++;
        }

        else
        {
            m1[flag1] = max(m1[flag1] , cnt);
            flag1 = v[i];
            cnt = 1;
        }  
    }
    
    m1[flag1] = max(m1[flag1] , cnt);
    cnt = 1;

    for (int i = 1; i < n;i++)
    {
        if (b[i] == flag2)
        {
            cnt++;
        }

        else
        {
            m2[flag2] = max(m2[flag2] , cnt);
            flag2 = b[i];
            cnt = 1;
        }  
    }
    m2[flag2] = max(m2[flag2] , cnt);

    auto it1 = m1.begin() , it2 = m2.begin();
    int ans = 0;

    for (int i = 1; i <= 2 * n; i++) 
    {
        ans = max(ans , it1 -> second + it2 -> second);
        it1++ ; it2++;
    }
    
    cout << ans << endl;
}
 return 0;
}