#pragma once
#include <iostream>

class Stack {
public:
	Stack(){initialize();}
	Stack(int n){
		initialize();
		for(double i = 1.0, count = 0; count < n; i+=0.1){
			push(i);
			count++;
		}
	}
	~Stack(){ while(head != NULL){std::cout << pop() << '\n';} }
	struct Link {
		double data;
		Link* next;

		void initialize(double dat, Link* nxt) {
			data = dat;
			next = nxt;
		}
	}*head;

	void initialize() {
		head = 0;
	}

	void push(double dat) {
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}

	double peek() {
		if (head == 0) {
			std::cout << "Stack is empty";
		}
		return head->data;
	}

	double pop() {
		if (head == 0)
			return 0;

		double result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}

	void cleanup() {
		if (head == 0) {
			std::cout << "Stack is empty";
		}
		else {
			std::cout << "Stack is not empty";
		}
	}
};