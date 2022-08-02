#include<iostream>
using namespace std;
class NQueue
{
public:
    int *arr;
    int *front;
    int *rear;
    int* next;
    int n;
    int k;
    int freeSpot;
public:
    NQueue(int n, int k){
        this -> n = n;
        this -> k = k;
        front = new int[k];
        rear = new int[k];

        //Front or rear ko -=1 se initailize kara loo
        for(int i = 0; i < k; i++){
            front[i] = -1;
            rear[i] = -1;
        }

        next = new int[n];
        // next ke array ko saare free index se initailize kara do
        for(int i = 0; i < n; i++){
            next[i] = i+1;
        }
        next[n - 1] = -1;

        arr = new int[n];
        freeSpot = 0;
    }
    void enQueue(int data , int qn){
        //overflow ki condition check karlo 
        if(freeSpot == -1){
            cout << "No Empty Space is present in queue" << endl;
            return;
        }
        //Find first free index
        int index = freeSpot;
        //update kardo freespot ko
        freeSpot = next[index];
        //Check if the element inserted is first or not
        if(front[qn -1] == -1){
            front[qn -1] = index;
        }
        else{
            //link kardo nayee element ko purane element se
            next[rear[qn -1]] = index;
        }
        //update kardo next ko 
        next[index] = -1;
        //update kardo rear ko 
        rear[qn -1] = index;
        //push kardo element
        arr[index] = data;
    }
    //pop operation 
    int Dequeue(int qn){
        // underflow wali condition check karlo
        if(front[qn -1] == -1){
            cout << "Queue is empty" << endl;
            return -1;
        }
        //find index to pop
        int index = front[qn - 1];
        //front ko aage badhaoo
        front[qn - 1] = next[index];
        //free slots ko manage karo
        next[index] = freeSpot;
        freeSpot = index;
        return arr[index];
    }
};


int main(){
    NQueue q(10 , 3);

    q.enQueue(10, 1);
    q.enQueue(15, 1);
    q.enQueue(20, 2);
    q.enQueue(25, 1);

    cout << q.Dequeue(1) << endl;
    cout << q.Dequeue(2) << endl;
    cout << q.Dequeue(1) << endl;
    cout << q.Dequeue(1) << endl;
    cout << q.Dequeue(1) << endl;

return 0;
}