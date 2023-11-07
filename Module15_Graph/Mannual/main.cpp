#include <iostream>
#include "graphtype.h"
#include "heapType.cpp"

int main() {

    GraphType<char> myG;
    myG.AddVertex('A');
    myG.AddVertex('B');
    myG.AddVertex('C');
    myG.AddVertex('D');
    myG.AddVertex('E');
    myG.AddVertex('F');
    myG.AddVertex('G');
    myG.AddVertex('H');
     myG.AddEdge('A','B',1);
     myG.AddEdge('B','A',1);
     myG.AddEdge('A','C',1);
     myG.AddEdge('A','D',1);
     myG.AddEdge('D','A',1);
     myG.AddEdge('D','G',1);
     myG.AddEdge('D','E',1);
     myG.AddEdge('G','F',1);
     myG.AddEdge('F','H',1);
     myG.AddEdge('H','E',1);

    cout<<myG.OutDegree('D')<<endl;

    if(myG.FoundEdge('A','D')){
        cout<<"There is an edge."<<endl;
    }
    else{
        cout<<"There is no edge."<<endl;
    }

    if(myG.FoundEdge('B','D')){
        cout<<"There is an edge."<<endl;
    }
    else{
        cout<<"There is no edge."<<endl;
    }
    myG.DepthFirstSearch('B','E');
    myG.DepthFirstSearch('E','B');
    myG.BreadthFirstSearch('B','E');
    myG.BreadthFirstSearch('E','B');




    return 0;
}
