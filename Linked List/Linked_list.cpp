#include<iostream>

using namespace std;

class Node{
public:
    int data ;   // stores the node's value
    Node* next;  // stores the address of the next node

    Node(int value){  // is the constructor
        data = value; 
        next = NULL;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthOfLL(Node* head){
    int cnt=0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    } 
    return cnt;
}

bool checkIfPresent(Node* head , int val){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == val){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main(){
    vector<int> arr = {4 , 7 ,8, 9 ,7};
    Node* head = convertArr2LL(arr);

    // Traverse Array
    // Node* temp = head;
    // while(temp != NULL){
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    
    // cout << lengthOfLL(head);

    if(checkIfPresent(head , 12)){
        cout << "YES";
    }else{
        cout << "NO";
    }
}

