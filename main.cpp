#include"design.h"
#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
vector<string> parse(string &);
int main(){
    string s;
    vector<vector<string>>allStrs;
    ifstream ifile;
    ifile.open("input.txt");
    while(!ifile.eof()){
        getline(ifile,s);
        allStrs.push_back(parse(s));
    }
    ifile.close();
    TextOp StrObj(allStrs[0][0]);
      StrObj.getStr();
    for(int i=1;i<allStrs.size();i++){
       if(allStrs[i][0][0]=='b'){
        StrObj.backspace();
       }
       if(allStrs[i][0][0]=='i'){
        StrObj.insert(allStrs[i][1]);
       }
       if(allStrs[i][0][0]=='u'){
        StrObj.undo();
       }
       StrObj.getStr();
    } 





    return 0;
}


vector<string> parse(string &s){
    stringstream ss(s);
    string word;
    vector<string>ans;
    while(getline(ss,word,' ')){
        ans.push_back(word);
    }
    return ans;
}
