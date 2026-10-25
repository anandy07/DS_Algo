#include<iostream>
using namespace std;

class Node{
public:
    int data;  // To store the Value
    Node* prev;  // Pointer to point the Previous Element
    Node* next;  // Pointer to point the Next Element

    // Constructor
    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }
};

void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* ConvertArrayToDll(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    Node* p = NULL;
    for(int i=1; i<arr.size(); i++){
        temp->next = new Node(arr[i]);
        p = temp;
        temp = temp->next;
        temp->prev = p;
        
    }
    return head;
}

int main(){
    
    vector<int> arr = {2, 4, 5 ,6 ,7};
    Node* head = ConvertArrayToDll(arr);
    print(head);


}