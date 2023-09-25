                                                    // Merge Two Sorted List

#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* dummyNode = new ListNode(0);
    ListNode* currNode = dummyNode;

    while(l1 && l2)
    {
        if(l1->val < l2->val) {
            currNode->next = l1;
            l1 = l1->next;
        }else {
            currNode->next = l2;
            l2 = l2->next;
        }
        currNode = currNode->next;
    }
    if(l1) {
        currNode->next = l1;
    }else if(l2) {
        currNode->next = l2;
    }
    return dummyNode->next;
}

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    // Create the first sorted linked list: 1-> 3-> 5->
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);

    // Create the secod sorted linked list: 2-> 4-> 6->
    ListNode* list2 = new ListNode(2);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);

    // Merged two sorted listed lists
    ListNode* mergedList = mergeTwoLists(list1, list2);

    // Print the marged list
    printList(mergedList);

    // Clean up memory
    ListNode* temp;
    while (mergedList != nullptr)
    {
        temp = mergedList;
        mergedList = mergedList->next;
        delete temp;
    }
    return 0;
}