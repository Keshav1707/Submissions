#include <bits/stdc++.h>
using namespace std;
string longestPalindrome(string s)
{
    int n = s.size();
    string temp;
    while (n != 0)
    {
        for (int i = 0; i < (s.size() - n + 1); i++)
        {
            temp = s.substr(i, n);
            reverse(temp.begin(), temp.end());
            if (temp == s.substr(i, n))
                return temp;
        }
        n--;
    }
    return s.substr(0, 1);
}
int main()
{
    string num = "vnjwvalrbypfcbqnmopltjnoifmzwgvpzqzsdtvawndpjtpmpjbjionjifqtvvocpeaftvhpdgjjfafunfndztdjkcxyihtsyppendfzzjeyxlbwpdygiqmdqcdbmgyjigrmfkswcwryaydjilqqxvcnyvviesuncslvzikawwqykqwdfibggezufqihcjkebapmgkvwixywgdextafxycnipjglsndkyjoqfyfljfkkvoieksmavdlmlhhnstesibffiopqvlyuidvrawndbzonwzbsjmpeqoglmdbinkovqpzfkxihzitdopnomseqhmrrkcsvrzziphwpuhjngeotwcrebcmbtirkgeavojtmpakcewmexhxacngknokxsvtqobdgckutpexswgwqzbosjpxauyflnylfcxsucsehqvakbpvfmkelmkspsqxnutwfwacpqqvovdqafeylobneojdsgqowcbxfsvuqusdbylcgcvgrofgvzubakjmlbffjhrafvnqttwuyhokzpmhlludpbowuxzrebxsdusalljfjgjkucwzpmndqncykvfnbrxcrcaxwisjpstejjqbpwegpxyrtyafxklgralnkwxkmjpuqfixzkonznmguyizlancpxdzcfkgiotyelegprbaytdhbutbuihkxnbtuqrtezaskfqsmrznfohhlqp";
    cout << longestPalindrome(num);
}
