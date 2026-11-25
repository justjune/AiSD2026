#include "L0334_100.h"

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
