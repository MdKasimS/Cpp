#include<iostream>

using namespace std;

static int objCounter;

class node
{
    int data;
    node* next;
    
    node(int x)
    {
        ++objCounter;
        
        data=x;
        cout<<"Graph node added "<<data<<endl;

        next=NULL;
    }
    friend class adjList;

};

class adjList
{
    int i,data;
    
    node* temp, *head, *nn, *iter;

    public: 
    

    adjList(int x)
    {
        head=new node(x);
        nn=head;
    }

    void addNode()
    {   

        cout<<"Enter data: ";
        cin>>data;

        nn->next=new node(data);
        nn=nn->next;
    
    }

    void display()
    {
        temp=head;
        do
        {
            cout<<temp->data<<" - ";
            if(head->next!=NULL)
            temp=temp->next;

        }while(temp->next!=NULL && temp!=head);

        cout<<endl;
    }    
    int getData()
    {
        return head->data;
    }
};  

int main(int argc, char* args[])
{
    cout<<"Assalamualaikum !!!\n";

    int vCount=0;
    int i=0;
    int choice=0;
    int n=0;
    cout<<"Enter the number of vertices in graph : ";
    cin>>vCount;

    adjList *graph[vCount]; 

    do
    {
        cout<<"Operations : \n";
        cout<<" 1.Add graph node\n 2.Add adjacent nodes of a node\n 3.Display graph \n 4. Exit => ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                for(i=0;i<vCount;++i)
                {
                    cout<<"Node number (must be integer) : ";
                    cin>>n;
                    graph[i]=new adjList(n);
                }             
                cout<<endl;
                break;

            case 2:
                cout<<"Enter the node number : ";
                cin>>n;
                
                for(i=0;graph[i]->getData()!=n;++i)
                {
                    if(graph[i]->getData()==n)
                    {
                        cout<<"We found "<<i;
                    }
                }
                cout<<endl;
                break;

            case 3:
                cout<<"Your Graph : ";
                for(i=0;i<vCount;++i)
                {
                    graph[i]->display();
                }
                cout<<endl;
                break;

            case 4:
                
                if(objCounter>=1)
                {
                    for(i=0;i<vCount;++i)
                    {
                        delete graph[i];
                    }
                }
                cout<<"Exit.............";
                cout<<endl;
                break;

            default:
                cout<<"Enter the correct choice \n";
        }
    }while(choice!=4);

    
    
    cout<<endl;
}