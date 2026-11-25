//Черев алексей МЕН-250705
#include <iostream>
#include "L0334_100.h"

int main() {
    ListNode* head = nullptr;

    insert_list(head, 1);
    
    //удаляемый элемент
    ListNode* aim_to_delete = head;
    insert_list(head, 2);
    insert_list(head, 3);
    insert_list(head, 4);
   
    ListNode* pred_delete = item_ahead(head, aim_to_delete);


    std::cout << "item for delete: " << aim_to_delete->item << "\n";
    std::cout << "item before deleted: " << pred_delete->item;

    std::cin.get();

    clear_list(head);
    return 0;
}