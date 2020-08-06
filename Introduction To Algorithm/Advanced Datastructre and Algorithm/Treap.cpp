/*Tree+heap=Treap*/
/* Time complexity 
    space -A(O(n)) W(O(n))
    search-A(O(lg n)) W(O(n))
    insert(O(lg n)) W(O(n))
    Delete  O(lg n) O(n)
    
 */
#include<bits/stdc++.h>
using namespace std;
class Node{
	  public:
	  	  int value;
	  	  int key;
	  	  Node * left;
	  	  Node *  right;
	  	  Node * parent;
	  	  Node(int data)
	  	  {
	  	  	  this->value=data;
	  	  	  this->key=0;
	  	  	  left=NULL;
	  	  	  right=NULL;
	  	  	  parent=NULL;
	  	  	  
	   }
};

int main()
{
	 Node n(10);
	 cout<<n.value<<endl;
	 cout<<n.left<<endl;
	 cout<<n.right<<endl;
	 cout<<n.parent<<endl;
	
	 return  0;
	 
}
