/* Structure of a Linked List node
class Node {
	public:
	int data;
	Node* next;
	
	Node(int x) {
		data = x;
		next = nullptr;
	}
};
*/
class Solution {
	public:
	Node *compute(Node *head) {
		// code here
		if (head->next == NULL)return head;
		Node * tp = compute(head->next);
		if (tp->data > head->data)return tp;
		head->next = tp;
		return head;
	}
};

