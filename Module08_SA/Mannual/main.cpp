#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"

using namespace std;

template <class ItemType>
void printStk(StackType<ItemType>& stack){
    StackType<ItemType> tempStack;
    while(!stack.IsEmpty()){
        tempStack.Push(stack.Top());
        stack.Pop();
    }
    while(!tempStack.IsEmpty()){
        cout<<tempStack.Top()<<" ";
        stack.Push(tempStack.Top());
        tempStack.Pop();
    }
    cout<<endl;
}

int main()
{
    StackType<int> myStk;
    if(myStk.IsEmpty()){
        cout<<"Stack Is empty"<<endl;
        }
    else{
        cout<<"Stack Is not empty"<<endl;
    }
    myStk.Push(5);
    myStk.Push(7);
    myStk.Push(4);
    myStk.Push(2);

    if(myStk.IsEmpty()){
        cout<<"Stack Is empty"<<endl;
    }
    else{
        cout<<"Stack Is not empty"<<endl;
    }

    if(myStk.IsFull()){
        cout<<"Stack Is full"<<endl;
    }
    else{
        cout<<"Stack Is not full"<<endl;
    }

    printStk(myStk);
    myStk.Push(3);
    printStk(myStk);
    if(myStk.IsFull()){
        cout<<"Stack Is full"<<endl;
    }
    else{
        cout<<"Stack Is not full"<<endl;
    }

    myStk.Pop();
    myStk.Pop();
    cout<<myStk.Top()<<endl;



    while(true){
        string input;
        cout<<"Enter:";
        cin>>input;
        if(input=="q"){
            break;
        }
        StackType<char> balStk;
        bool balanced= true;
        for(char c:input){
            if(c=='('){
                balStk.Push(c);
            }
            else if(c==')'){
                if(balStk.IsEmpty()){
                    balanced=false;
                    break;
                }
                else{
                    balStk.Pop();
                }
            }
        }
        if(balanced && balStk.IsEmpty()){
            cout<<"Balanced"<<endl;
        }
        else{
            cout<<"Not Balanced"<<endl;
        }
    }






    return 0;
}
