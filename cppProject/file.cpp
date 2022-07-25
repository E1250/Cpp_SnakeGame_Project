#include <iostream>
#include <stack>

using namespace std;

void convertToBinary(int num);
void convertToOctal(int num);
void convertToHexa(int num);


int main()
{
    int decimalNum;
    int operation;
    bool play = true;

    cout<<"Enter decimal Number : ";
    cin>>decimalNum;
    cout<<"Convert To :"<<endl;
    cout<<"1-Binary"<<endl<<"2-Octal"<<endl<<"3-Hexa"<<endl<<"4-Exit"<<endl;
    cin>>operation;

    switch (operation){
    case 1:
        convertToBinary(decimalNum);
        break;
    case 2:
        convertToOctal(decimalNum);
        break;
    case 3:
        convertToHexa(decimalNum);
        break;
    default:
        break;
    }
    return 0;
}

void convertToBinary(int num){
    stack<int> stk;
    int decimalNum = num;
    while(decimalNum != 0){
            stk.push(decimalNum%2);
            decimalNum = decimalNum/2;
    }
    while(!stk.empty()){
        cout<<stk.top();
        stk.pop();
    }
}
void convertToOctal(int num){
    stack<int> stk;
    int decimalNum = num;
    while(decimalNum != 0){
            stk.push(decimalNum%8);
            decimalNum = decimalNum/8;
    }
    while(!stk.empty()){
        cout<< stk.top();
        stk.pop();
    }
}
void convertToHexa(int num){
    stack<char> stk;
    int decimalNum = num;
    while(decimalNum != 0){
        if((decimalNum%16)>=10){
            stk.push(char(64+(decimalNum%16)-9));
        }else{
            stk.push(48+(decimalNum%16));
        }
        decimalNum = decimalNum/16;
    }
    while(!stk.empty()){
        cout<< stk.top();
        stk.pop();
    }
}