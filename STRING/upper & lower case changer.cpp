#include<bits/stdc++.h>
using namespace std;
int main(){
    string arb="adam zampa";
    for(int i=0;i<arb.size();i++){
        if(arb[i]>='a'&& arb[i]<='z'){
           arb[i]-=32;
        }
    }
    cout<<arb<<endl;
    string sha="ADAM ZAMPA";
    for(int i=0;i<sha.size();i++){
        if(sha[i]>='A'&& sha[i]<='Z'){
          sha[i]+=32;
        }
    }
    cout<<sha<<endl;
    string s="arbaz ali";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    string a="ARBAZ ALI";
    transform(a.begin(),a.end(),a.begin(),::tolower);
    cout<<a<<endl;
    return 0;
}
