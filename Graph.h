#include "Graph.h" using namespace std;

//template: 1 --> Graph template Graph:: Graph (LabelType nVal) {

this->n Val = n Val;

visited Edge = new bool (nVal]; adj = new int [nVal]; for (int it = 0; it < n Val;

• it++){

adj [it] = new int [nVal]; for (int jth = 0; jth < 5 nVal; jth++){

adj[it][jth] = 0;

}

//template : 2 --> add() template void Graph::add(LabelType 5 start, LabelType end) { if( start > nVal || end > nVal 5 || start < 0 || end <0) { cout<<"Invalid edge! \nVal"; }

else adj[start 1][end - 1] =

91; }

//template: 3 -->display() = template void Graph::display(){ int it, jth;

for (it = 0; it < nVal; it++) { for (ith = 0; jth < nVal; = jth++){.


//template: 4 --> Vertices()

template int Graph::getNum

Vertices() const { return numOfVertices;

}

//template: 5 -->getNumEdges () template int

Graph::getNumEdges () const { retrun the edges retum numOfEdges:

}

//template 6 -->getEdgeWeight

template int Graph::getEdgeWeight (Label Type start, LabelType end) const{ return numOfVertices; }

//template: template bool

7 --> remove()

Graph:: remove(LabelType start, LabelType end) { if( start > nVal || end > nVal || start < 0 || end < 0) { cout<<"Invalid edge! \nVal":

bool result = false;

} else adj[start 1][end - 1] =

return result;

-1;

}
