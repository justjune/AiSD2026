//Черев алексей МЕН-250705
#include <iostream>
#include "L0333_100.h"

int main() {
    ListNode* head = nullptr;

    insert_list(head, 1);

    std::cout << "list before adding: ";
    ListNode* current = head;
    while (current != nullptr) {
        std::cout << current->item << " ";
        current = current->next;
    }
    std::cout << "\n";
    insert_list(head, 5);

    std::cout << "list after adding: ";
    current = head;
    while (current != nullptr) {
        std::cout << current->item << " ";
        current = current->next;
    }

    std::cin.get();

    clear_list(head);
    return 0;
}