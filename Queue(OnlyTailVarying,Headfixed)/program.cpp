#include<iostream>
#include<conio.h>
#define MAXSIZE 5

using namespace std;

class queue{
    int data, front, rear, q[MAXSIZE];

    public:
        queue(){front = 0; rear = -1;}
        void enqueue(){
            if(rear == MAXSIZE - 1){
                cout<<"Queue is full";
            }
            else{
                rear++;
                cout<<"Enter data to enqueue:: ";
                cin>>data;
                q[rear] = data;
            }
        }

        void dequeue(){
            if(rear==-1){
                cout<<"Queue is empty.";
            }
            else{
                data = q[front];
                for(int i=0;i<rear;i++){
                    q[i]= q[i+1];
                }
                rear--;
                cout<<"Dequeued data is: "<<data<<endl;
            }
        }
        void display(){
            cout<<"Queue data is:: "<<endl;
            for(int i=front;i<=rear;i++){
                cout<<q[i]<<" ";
            }
        }
};

int main(){
    int choice;
    queue q;
    bool flag = true;
    while(flag){
        cout<<endl<<"MENU"<<endl;
        cout<<"1. Enqueue Data"<<endl;
        cout<<"2. Dequeue Data"<<endl;
        cout<<"3. Show Data"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<endl<<"Enter your choice:: ";
        cin>>choice;

        switch(choice){
            case 1:
                q.enqueue();
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                getch();
                break;
            case 4:
                exit(1);
            default:
                cout<<"Invalid option!"<<endl;
                cout<<"Try Again"<<endl;
                getch();
                break;
        }
    }
    
    return 0;
}