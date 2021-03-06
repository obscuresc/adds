// Node.h
// structure defining doubly linked Nodes for list

struct Node {

	Node* next;
	Node* prev;
	std::string data;

	Node(Node* attach, std::string* input) {

		// link the last Node to this one
		attach->next = this;

		// point this Node at nullptr to invalid bad programming
		this->next = nullptr;

		// load data
		data = *input;

	}

	// for head nodes
	Node() {};

};
