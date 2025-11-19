#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool determiner(string s) {
string temp=s;
reverse(s.begin(),s.end());
return temp==s;
}
int main() {
int t;
cout << "Enter number of testcases:-" << endl;
cin>>t;
while(t--) {
string s;
cin>>s;
if(determiner(s)) cout << "YES" << endl;
else cout << "NO" << endl;
}
return 0;
}
