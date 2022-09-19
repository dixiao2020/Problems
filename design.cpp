#include"design.h"
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void TextOp::insert(string newStr){
      int m = newStr.length();
      this->aStr+=newStr;
      this->aStack.push({m,0});
}
void TextOp::backspace(){
    if(this->aStr!=""){
        int m = aStr.length();
        char tmp = aStr[m-1];
        this->aStr.pop_back();
        this->aStack.push({tmp-'a',1});
    }
}
void TextOp::undo(){
    if(aStack.empty()) return;
    pair<int,int>aPair=aStack.top();
    int op = aPair.second;
    if(op==1){
        this->aStr.push_back('a'+aPair.first);
    }
    else{
        int index = this->aStr.length()-aPair.first;
        this->aStr.erase(index);
    }
    aStack.pop();

}