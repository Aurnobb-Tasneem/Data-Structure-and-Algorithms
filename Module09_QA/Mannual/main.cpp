#include <iostream>
#include "quetype.h"
#include "quetype.cpp"

using namespace std;
template<class ItemType>
void printq(QueType<ItemType>& que){
    QueType<int> tempq;
    while(!que.IsEmpty()){
        ItemType item;
        que.Dequeue(item);
        tempq.Enqueue(item);
        cout<<item<<" ";
    }
    while(!tempq.IsEmpty()){
        ItemType item;
        tempq.Dequeue(item);
        que.Enqueue(item);
    }
    cout<<endl;
}


int main()
{
    QueType<int> mq (5);
    if(mq.IsEmpty()){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is Not Empty"<<endl;
    }
    mq.Enqueue(5);
    mq.Enqueue(7);
    mq.Enqueue(4);
    mq.Enqueue(2);
    if(mq.IsEmpty()){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is Not Empty"<<endl;
    }

    if(mq.IsFull()){
        cout<<"Queue is Full"<<endl;
    }
    else{
        cout<<"Queue is Not Full"<<endl;
    }
    mq.Enqueue(6);
    printq(mq);
    if(mq.IsFull()){
        cout<<"Queue is Full"<<endl;
    }
    else{
        cout<<"Queue is Not Full"<<endl;
    }
    try{
        mq.Enqueue(8);
    }
    catch (FullQueue){
        cout<<"Queue Overflow"<<endl;
    }
    int item;
    mq.Dequeue(item);
    mq.Dequeue(item);
    printq(mq);
    mq.Dequeue(item);
    mq.Dequeue(item);
    mq.Dequeue(item);
    if(mq.IsEmpty()){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is Not Empty"<<endl;
    }
    try{
        mq.Dequeue(item);

    }
    catch (EmptyQueue){
        cout<<"Queue Underflow"<<endl;
    }

    int n;
    cout<<"Enter:";
    cin>>n;
     QueType<string> bq;
     bq.Enqueue("1");
      for(int i=0;i<n;i++){
          string x;
          bq.Dequeue(x);
          cout<<x<<endl;
          bq.Enqueue(x+"0");
          bq.Enqueue(x+"1");
      }









    return 0;
}
