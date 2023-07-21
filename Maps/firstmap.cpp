#include<iostream>
#include<map>
using namespace std;

int main()
{

    map<string,int> m ;
    m = {{"A",1},{"B",2},{"C",3}};

    // map<string, int>::iterator it;

    // for(it = m.begin(); it!=m.end(); it++){
    //     cout<<it->first<<endl;
    //     cout<<it->second<<endl;
    // }

    for(auto iter:m){
        cout<<iter.first<<endl;
        cout<<iter.second<<endl;
    }

    return 0;
}
