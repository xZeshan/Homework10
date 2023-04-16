#include "Graph.cpp" using namespace std;

int main(){

int NodeNum, MaxiEdge, Start, End;

cout<<"Enter vertices count: ".

cin>>NodeNum;

2 Graph graph (NodeNum);

MaxiEdge = NodeNum* (NodeNum

- 1);

for (int it = 0; it < MaxiEdge;

= it++) {

3 cout<<"Enter -1 -1 to exit: ";

O cin>>Start>>End;

! if((Start == -1) && (End == -1)) break;

=graph.add(Start, End); 5 }

graph.display(); 8 system("pause"); return 0;

0}
