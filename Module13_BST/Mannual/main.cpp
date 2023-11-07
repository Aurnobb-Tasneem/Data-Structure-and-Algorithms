#include <iostream>

#include "binarysearchtree.h"
#include "binarysearchtree.cpp"


void insertRecursively(TreeType<int> &newTree, int array[], int start, int end) {
    int mid = (start + end) / 2;
    newTree.InsertItem(array[mid]);

    if (start == end)
        return;

    if (start < mid)
        insertRecursively(newTree, array, start, mid - 1);

    insertRecursively(newTree, array, mid + 1, end);
}


int main() {

    TreeType<int> myT;
    if(myT.IsEmpty()){
        cout<<"Tree is empty"<<endl;
    }
    else{
        cout<<"Tree is not empty"<<endl;
    }
    myT.InsertItem(4);
    myT.InsertItem(9);
    myT.InsertItem(2);
    myT.InsertItem(7);
    myT.InsertItem(3);
    myT.InsertItem(11);
    myT.InsertItem(17);
    myT.InsertItem(0);
    myT.InsertItem(5);
    myT.InsertItem(1);

    if(myT.IsEmpty()){
        cout<<"Tree is empty"<<endl;
    }
    else{
        cout<<"Tree is not empty"<<endl;
    }

    cout<<myT.LengthIs()<<endl;
    int x=9;
    bool found;
    myT.RetrieveItem(x,found);
    if(found){
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is found"<<endl;
    }

    x=13;
    if(found){
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is found"<<endl;
    }

    myT.ResetTree(IN_ORDER);
    int item;
    bool finished=false;
    while(!finished){
        myT.GetNextItem(item,IN_ORDER,finished);

            cout<<item<<" ";


    }
    cout<<endl;
    myT.ResetTree(PRE_ORDER);
         finished=false;
    while(!finished){
        myT.GetNextItem(item,PRE_ORDER,finished);
       cout<<item<<" ";

    }
    cout<<endl;
    myT.ResetTree(POST_ORDER);
    finished=false;
    while(!finished){
        myT.GetNextItem(item,POST_ORDER,finished);
        cout<<item<<" ";

    }
    cout<<endl;
     myT.MakeEmpty();




     TreeType<int> sequenceTree;
    int arr[] = {11,9,4,2,7,3,17,0,5,1};
    int index = 0;
    int num = 10;

    for(int i=0; i<num; i++){
        sequenceTree.InsertItem(arr[i]);
    }

    sequenceTree.ResetTree(IN_ORDER);
    int arr1[num];
    int n;
    finished = false;
    while(!finished){
        sequenceTree.GetNextItem(n, IN_ORDER, finished);
        arr1[index++] = n;
    }

    TreeType<int> tree2;

    insertRecursively(tree2, arr1, 0, index-1);

    finished = false;

    tree2.ResetTree(PRE_ORDER);
    while(!finished){
        tree2.GetNextItem(n, PRE_ORDER, finished);
        cout<<n<<" ";
    }
    cout<<endl;



    return 0;
}
