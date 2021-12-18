#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int info;
    struct node *next;
}Node;

typedef struct linkedlist
{
    Node *start;
}LinkedList;

void main()
{
    LinkedList list;
    ....
    SelectionSortList(&list);
    PrintLinkedList(&list);

}

/*
--------------------------
-- Sort
--------------------------
*/

void SelectionSortList(LinkedList *list)
{
    Node *ptrOuter = list->start;
    Node *ptr = list->start;

    while(ptrOuter != NULL)
    {
        ptr = ptrOuter;
        int max = ptr->info;
        Node* maxIndex = ptr;
        while(ptr != NULL)
        {
            if(ptr->info > max)
            {
                max = ptr->info;
                maxIndex = ptr;
            }
            else
            {
                ptr = ptr->next;
            }
        }
        maxIndex->info = ptrOuter->info;
        ptrOuter->info = max;
        ptrOuter = ptrOuter->next;
    }
}
