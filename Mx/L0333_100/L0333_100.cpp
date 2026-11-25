#include "L0333_100.h"

ListNode::ListNode(item_type val, ListNode* nextNode)
    : item(val), next(nextNode) {}

void insert_list(ListNode*& l, item_type x) {
    ListNode* p = new ListNode(x, l);

    l = p;
}

void clear_list(ListNode*& l) {
    while (l != nullptr) {
        ListNode* temp = l;
        l = l->next;        
        delete temp;        
    }
}