#ifndef LinkedList_h
#define LinkedList_h

#include <iostream>

using namespace std;

struct LinkedList { 
    struct Link { 
		void* data;
		Link* next;
		
		void initialize(void* dat, Link* nxt) {
			data = dat;
			next = nxt;
		} 
	}* head;

    Link *end;
    int size;
    
    // This should initialize fields for the empty LinkedList
    void initialize() {
        head = 0;
	}
	
    /* 
     * This adds an element containing *dat 
     * to the end of the LinkedList.
     * It assumes that *dat is dynamically allocated
     */
    void add(void* dat) {
        size++;
        Link* newLink = new Link();
        newLink->initialize(dat, NULL);
        if(head == 0){
            head = newLink;
            end = newLink;
        }
        else{
            end->next = newLink;
            end = end->next;
        }
    }
	
    /* 
     * This returns the data at position index 
     */
    void* get(int index) {
        Link* temp = head;
        int count = 0;
        while(count != index){
            temp = temp->next;
            count++;
        }
        return temp->data;
    }
	
    /* 
     * Frees the memory of the LinkedList
     */
    void cleanup() {
        Link* temp = head;
        while(temp != NULL){
		    head = head->next;
		    delete temp;
            temp = head;
        }
    }
};
#endif
