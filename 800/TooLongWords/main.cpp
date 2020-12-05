
/*
https://codeforces.com/problemset/problem/71/A
*/
#include <iostream>
#include <vector>
using namespace std;

void toolong(string s){
    int len=s.length();
    if(len>10){
        cout<<s[0]<<len-2<<s[len-1]<<endl;
    }
    else{
        cout<<s<<endl;
    }
}

int main()
{

    vector <string> stringArray;
    int n,i;
    string word;
    cin>>n;
    if(n>=1 && n<=100)
    {
        while(n--){
            cin>>word;
            stringArray.push_back(word);
        }
    }
    n=stringArray.size();
    for(i=0;i<n;i++){
        toolong(stringArray[i]);
    }

    return 0;
}
