/*

Author : Zishan Khan 
Date : 08/01/2024
Problem : Merge 2 sorted linked list in reverse order
Difficulty : Medium
Problem Link : https://www.geeksforgeeks.org/problems/merge-2-sorted-linked-list-in-reverse-order/1

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
          Node* n1 = reverse(node1);
        Node* n2 = reverse(node2);

        return mergeRecur(n1, n2);
    }

    Node* mergeRecur(Node* A, Node* B) {
        if (A == nullptr) return B;
        if (B == nullptr) return A;

        if (A->data > B->data) {
            A->next = mergeRecur(A->next, B);
            return A;
        } else {
            B->next = mergeRecur(A, B->next);
            return B;
        }
    }

    Node* reverse(Node* node) {
        Node* prv = nullptr;
        Node* cur = node;

        while (cur != nullptr) {
            Node* next = cur->next;
            cur->next = prv;
            prv = cur;
            cur = next;
        }

        return prv;
    }  
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends
