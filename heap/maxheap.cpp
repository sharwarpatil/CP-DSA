#include<iostream>

using namespace std;

class heap{
    public:
    int arr[100];//initialize
    int size=0;
    heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int val){
         if (size >= 100) { // Ensure we don't exceed the array size
            cout << "Heap overflow!" << endl;
            return;
        }
        size=size+1;
        int index = size;
        arr[index] = val;
        while(index>1){
            int parent=(index)/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }else{
                break;
            }
        }

    }
    void delet(){
         if (size < 0) { 
            cout << "Heap underflow!" << endl;
            return;
        }
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<=size){
            int leftchildindex=2*i;
            int rightchildindex=2*(i+1);
            if(leftchildindex<size && arr[i]<arr[leftchildindex]){
                swap(arr[i],arr[leftchildindex]);
                i=leftchildindex;
            }else if (rightchildindex<size && arr[i]<arr[rightchildindex])
            {
                 swap(arr[i],arr[rightchildindex]);
                i=rightchildindex;
            }else{
                return;
            }
            
        }

    }
    void print(){
        int i=1;
        while(i<=size){
            cout<<arr[i]<<endl;
            i++;
        }
    }
};

int main(){
    heap h;
    h.insert(50);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(70);
    h.print();
    h.delet();
    cout<<"After deletion - "<<endl;
    h.print();
    return 0;
}