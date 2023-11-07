#include<iostream>
using namespace std;

class Node
{

    public:
    int val;
    Node *next;

    Node()
    {
        val=0;
        next=NULL;
    }

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }

};


class LinkedList{
    private :
    Node* head;

    public :
     LinkedList()
     {
         head=NULL;
     }
    void insert(int val)
    {
        Node* newNode  = new Node(val);

        if(head==NULL)
        {
            head=newNode;
        }
        else{
            Node *temp = head;

            while(temp->next!=NULL)
            {
                temp=temp->next;

            }
            temp->next=newNode;
        }
    }

    void printList()
    {
        Node* temp =head;
        if(head==NULL)
        {
            return;
        }
        while(temp!=NULL)
        {
            cout<<temp->val<<" "<<endl;
            temp=temp->next;
        }
    }

    int printNthLastElement(int n)
    {
        int len=0;
        Node *temp=head;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        temp=head;

        for(int i=1;i<len-n+1;i++)
        {
            temp=temp->next;
        }
        cout<<temp->val;
    }

    void deleteElement(int data)
    {
        Node *current = head;
        Node *prev = NULL;
       if(current!=NULL && current->val==data)
       {
           head=current->next;
           delete current;
       }

       while(current!=NULL && current->val!=data)
       {
           prev=current;
           current=current->next;
             
       }

       if(current!=NULL)
       {
           prev->next=current;
           delete current;
       }
    }
};


int main()
{
    LinkedList mylist;
    mylist.insert(10);
    mylist.insert(50);
    mylist.insert(30);

    mylist.printList();
    int ele=0;

    cin>>ele;
    mylist.printNthLastElement(ele);

}