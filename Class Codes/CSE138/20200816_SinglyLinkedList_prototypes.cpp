#include <iostream>
using namespace std;

struct node{
    int val;
    node *next;
    node(){
        val = 0;
        next = NULL;
    }
    node(int k){
        val = k;
        next = NULL;
    }
};

struct SinglyLinkedList{
    node *head, *tail;
    /**
        Initializes head and tail.
    */
    SinglyLinkedList();
    /**
        A value is provided which should be added at the
        beginning of the list.
        @param val the provided value
    */
    void insertIntoHead(int);
    /**
        A value is provided which should be added just
        after the head of the list.
        @param val the provided value
    */
    void insertIntoNextToHead(int);
    /**
        A value is provided which should be added at the
        end of the list.
        @param val the provided value
    */
    void insertIntoTail(int);
    /**
        A value is provided which should be added just
        before the tail of the list.
        @param val the provided value
    */
    void insertBeforeTail(int);
    /**
        A value and a position are provided. The value
        should be added at the given position. If the
        position does not exist, then the value should
        be added at the end of the list. The position
        is 1-based index.
        @param val the provided value
        @param pos the position
    */
    void insertAtPos(int val, int pos);
    /**
        Two values are provided named val and refVal.
        The value should be added just after the refVal.
        If the refVal does not exist in the list, then
        the value should be added at the end of the
        list. If refVal exists several times, then val
        should be added just after the first occurrence
        of refVal.
        @param val the value should be added
        @param refVal the reference value
    */
    void insertAfterVal(int val, int refVal);
    /**
        Two values are provided named val and refVal.
        The value should be added just before the refVal.
        If the refVal does not exist in the list, then
        the value should be added at the beginning of the
        list. If refVal exists several times, then val
        should be added just before the first occurrence
        of refVal.
        @param val the value should be added
        @param refVal the reference value
    */
    void insertBeforeVal(int val, int refVal);

    /**
        A value is provided. It should be searched in
        the list. If found, then the position of the
        first occurrence should be returned (1-based
        indexing). If the value does not exist in the
        list, then -1 should be returned.
        @param val the value should be searched
        @return the position of the given value in the
                list if the value exits, otherwise -1
    */
    int findPos(int val);
    /**
        A position is provided (1-based indexing). The
        value at the given position should be returned.
        If the position does not exist in the
        list, then -1 should be returned.
        @param pos the provided position
        @return the value at the given position in the
                list if the position exits, otherwise -1
    */
    int findValAtPos(int pos);

    /**
        It returns the largest value of the linked list
        traversing the whole list. If an empty list is
        found, then it returns -1.
        @return the largest value of the list if the list
                has at least one value, otherwise -1
    */
    int findLargestVal();
    /**
        It returns the smallest value of the linked list
        traversing the whole list. If an empty list is
        found, then it returns -1.
        @return the smallest value of the list if the
                list has at least one value, otherwise -1
    */
    int findSmallestVal();

    /**
        It removes the first element of the list and
        returns the value of the deleted element. If
        the list is empty, then it prints "Underflow"
        and returns -1.
        @return the deleted value. If the list is empty,
                then it returns -1.
    */
    int deleteFromHead();
    /**
        It removes the second element of the list and
        returns the value of the deleted element. If
        the list is empty or has only one element,
        then it returns -1. It prints "Underflow" and
        "Too short list" for empty list and 1-element
        list respectively.
        @return the deleted value. If the list is empty
                or has at least one value,then it
                returns -1.
    */
    int deleteNextToHead();
    /**
        It removes the last element of the list and
        returns the value of the deleted element. If
        the list is empty, then it prints "Underflow"
        and returns -1.
        @return the deleted value. If the list is empty,
                then it returns -1.
    */
    int deleteFromTail();
    /**
        It removes the second last element of the list
        and returns the value of the deleted element.
        If the list is empty or has only one element,
        then it returns -1. It prints "Underflow" and
        "Too short list" for empty list and 1-element
        list respectively.
        @return the deleted value. If the list is empty
                or has at least one value,then it
                returns -1.
    */
    int deleteBeforeTail();
    /**
        A value is provided. It removes all elements
        from the list which contain that value.
        @param val the value to be removed.
    */
    void deleteAllOcc(int val);
    /**
        A value is provided. It removes the element
        which contains that value. If several elements
        match that value, it removes the first matched
        element only.
        @param val the value to be removed.
    */
    void deleteFirstOcc(int val);
    /**
        A value is provided. It removes the element
        which contains that value. If several elements
        match that value, it removes the last matched
        element only.
        @param val the value to be removed.
    */
    void deleteLastOcc(int val);
    /**
        A position is provided. It removes the element
        at that given position. If the given position
        does not exist, then it does nothing except
        returning -1. Otherwise, it returns the value
        of the deleted element.
        Note: 1-based indexing.
        @param pos the position of the element to be
               removed.
        @return the value of the deleted element if
                the position exists, otherwise -1.
    */
    int deleteFromPos(int pos);
    /**
        It removes all the elements from the list.
    */
    void deleteAll();
    /**
        It removes all the duplicate values from the
        list. After the execution of this function,
        all the values in the list would be unique.
        That means, it keeps only the first occurrence
        of a distinct value.
    */
    void deleteDuplicates();
    /**
        It removes all the elements from the list
        which are in even positions. Note that, head
        of the list is in position 1 (odd position).
    */
    void deleteFromEvenPos();
    /**
        It removes all the elements from the list
        which are in odd positions. Note that, head
        of the list is in position 1 (odd position).
    */
    void deleteFromOddPos();
    /**
        It removes the element from the list which
        contains the largest value. If several elements
        found with largest value, it removes all those
        elements. It returns the deleted value, if at
        least one element is deleted, otherwise it
        returns -1.
        @return the largest value of the list if the
                list has at least one value, otherwise -1
    */
    int deleteLargestValAllOcc();
    /**
        It removes the element from the list which
        contains the smallest value. If several elements
        found with smallest value, it removes all those
        elements. It returns the deleted value, if at
        least one element is deleted, otherwise it
        returns -1.
        @return the smallest value of the list if the
                list has at least one value, otherwise -1
    */
    int deleteSmallestValAllOcc();

    /**
        It prints all the values of the list in a
        convenient way.
    */
    void printList();
    /**
        It prints the value in the first element of the
        list. It prints "List Empty!" if the list is
        empty.
    */
    void printHead();
    /**
        It prints the value in the last element of the
        list. It prints "List Empty!" if the list is
        empty.
    */
    void printTail();
    /**
        It returns the number of elements in the list.
    */
    int listSize();

    /**
        It rearranges all the elements in the list in
        reverse order.
    */
    void reverseList();

};

SinglyLinkedList::SinglyLinkedList(){
    head = NULL;
    tail = NULL;
}

void SinglyLinkedList::insertIntoTail(int x){
    node *cur = new node(x);
    if(tail==NULL){
        head = tail = cur;
        return;
    }
    tail->next = cur;
    tail = tail->next;
}

void SinglyLinkedList::insertIntoHead(int x){
    node *cur = new node(x);
    if(head==NULL){
        head = tail = cur;
        return;
    }
    cur->next = head;
    head = cur;
}

int SinglyLinkedList::deleteFromHead(){
    if(head==NULL){
        cout << "Underflow" << endl;
        return -1;
    }
    node *temp = head;
    int ret = temp->val;
    if(head->next == NULL){
        head = tail = NULL;
    }
    else {
        head = head->next;
    }

    delete temp;
    return ret;
}

void SinglyLinkedList::printList(){
    cout << "List Start  --------------- " << endl;
    if(head == NULL){
        cout << endl;
    }

    node *temp = head;
    while(temp!=NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }

    cout << "List End    --------------- " << endl;
}

int main(){
    SinglyLinkedList sl;
    sl.insertIntoTail(5);
    sl.printList();
    sl.insertIntoTail(56);
    sl.printList();
    sl.insertIntoHead(156);
    sl.printList();
    sl.insertIntoTail(6);
    sl.printList();
    sl.deleteFromHead();
    sl.printList();
    sl.deleteFromHead();
    sl.printList();
    sl.deleteFromHead();
    sl.printList();
    sl.insertIntoTail(79);
    sl.printList();
    sl.deleteFromHead();
    sl.printList();
    sl.deleteFromHead();
    sl.printList();
    sl.deleteFromHead();
    sl.printList();

    return 0;
}
