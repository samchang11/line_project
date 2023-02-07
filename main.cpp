#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    int s1 ,s2;
    multiset<pair<int,int>> st;
    cin>>n;
    for( int i = 0 ; i < n ; i++  )
    {
        cin>>s1>>s2;
        st.insert( make_pair(s1,s2) );
    }
    int length = 0;
    int start = 0, endd = 0;
    for( auto it = st.begin() ; it != st.end() ; it++ )
    {
        if( it-> first >= endd )
        {
            length +=( it -> second - it -> first );
            start = it -> first;
            endd = it -> second;
        }
        else if( it -> second > endd )
        {
            length += it -> second - endd;
            endd = it -> second;
        }
    }
    cout<<length;
    return 0;
}
