#include <bits/stdc++.h>
using namespace std;
map<string,int>mp;
vector<string>words;
vector<string>ans;
string w;

int main()
{

    while(cin>>w){
        if(w=="#"){
            break;
        }
        words.push_back(w);
        transform(w.begin(),w.end(),w.begin(),::tolower);

        sort(w.begin(),w.end());

        mp[w]++;

    }


    for(auto word: words){
        string w= " ";
        w=word;
        transform(w.begin(),w.end(),w.begin(),::tolower);
        sort(w.begin(),w.end());
        if(mp[w]==1){
            ans.push_back(word);
        }
    }
    sort(ans.begin(),ans.end());

    for(auto w: ans){
        cout<<w<<endl;
    }


}
