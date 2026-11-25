#include "L0335_101.h"

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

ListNode* item_ahead(ListNode* l, ListNode* x) {
    if (l == nullptr || l->next == nullptr) {
        return nullptr;
    }

    if (l->next == x) {
        return l;
    }
    else {
        return item_ahead(l->next, x);
    }
}

void delete_list(ListNode*& l, ListNode*& x) {
    if (l == nullptr || x == nullptr) {
        return; 
    }

    ListNode* p = l;
    ListNode* pred = item_ahead(l, x);

    if (pred == nullptr) { 
        l = p->next;
    }
    else {              
        pred->next = x->next;
    }

    delete x;             
    x = nullptr;          
}