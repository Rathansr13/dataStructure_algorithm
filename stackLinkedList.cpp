#include<stdio.h>
#include<iostream>
using namespace std;


class Node{
    Node *next;
    int data;

    Node(int data)
    {
        this->data=data;
    }

}


class stack{
    Node *head;
    Node *tail;
    int size;

    stack()
    {
        this->head=null;

    }


    void push(int ele)
    {
     
     if(head==null)
     {
        Node *newNode  = new Node(ele);
        head=&newNode;
        tail=newNode;
     }
     else
     {
        Node *newNode = Node(ele)
        tail->next=newNode;
        tail=newNode;
        tail->next=null;
     }


    }


void display()
{
   Node *temp = head;


    while(temp!=null)
    {
        cout<<temp->data<<" "<<endl;
        temp=temp->next;

    }
}





}


int main()
{
    stack s1;
    s1.push(10);
    s1.push(20);
    s1.display();
    return 1;
}