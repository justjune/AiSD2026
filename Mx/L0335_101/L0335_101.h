#pragma once


using item_type = int;

struct ListNode {
    item_type item;       
    ListNode* next;       

    ListNode(item_type val, ListNode* nextNode = nullptr);
};

void insert_list(ListNode*& l, item_type x);

void clear_list(ListNode*& l);

ListNode* item_ahead(ListNode* l, ListNode* x);

void delete_list(ListNode*& l, ListNode*& x);