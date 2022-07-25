#include <iostream>
#include <stack>

using namespace std;

int main()
{
    //this algorithm handles the positive values
    int d;
    cout<<"Enter decimal Value : ";
    cin>>d;
    stack<int> stk;
    while(d != 0){
        stk.push(d%2);
        d = d/2;
    }

    while(!stk.empty()){
        cout<< stk.top();
        stk.pop();
    }

    cout<<endl;
    return 0;
}