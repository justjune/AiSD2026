//Черев алексей МЕН-250705
#include <iostream>
#include "L0335_101.h"

int main() {
    ListNode* head = nullptr;

    insert_list(head, 1);
    
    //удаляемый элемент

    ListNode* element_before_deleteble = head;

    insert_list(head, 2);
    insert_list(head, 3);
    insert_list(head, 4);
   
    std::cout << "list before delete 1: ";
    ListNode* temphead = head;
    while (temphead != nullptr) {
        std::cout << temphead->item << " ";
        temphead = temphead->next;
    }

    delete_list(head, element_before_deleteble);

    std::cout << "\n" << "list after delete 1: ";

    temphead = head;
    while (temphead != nullptr) {
        std::cout << temphead->item << " ";
        temphead = temphead->next;
    }

    std::cin.get();

    clear_list(head);
    return 0;
}