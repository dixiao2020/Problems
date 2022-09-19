#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#ifndef DESIGN_H
#define DESIGN_H
class TextOp{
private:
     string aStr;
     stack<pair<int,int>>aStack;
public:
TextOp(){

}
TextOp(string aStr_){
    aStr=aStr_;
}
void getStr() const{
    cout << aStr <<endl;
}
void insert(string newStr);
void backspace();
void undo();
};
#endif
