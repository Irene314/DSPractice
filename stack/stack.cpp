#include <iostream> 

using namespace std;

#define CAPACITY 128

int top_ = 0;
int cache_[CAPACITY];

void push(int d) {
	top_++;
	cache_[top_] = d;
	cout << "Push a number: " << cache_[top_] << endl; 
}

int pop() {
	cout << "Delete a top number: " << cache_[top_] << endl;	
	top_--;
	return cache_[top_];
}

int top() {
	cout << "cache_[top_] = " << cache_[top_] << endl;
	return cache_[top_];
}

int peep(int i) {
	if(i <= CAPACITY)
		cout << "cache_[ith] = " << cache_[top_-i+1] << endl;
}

void empty() {
	for(int i = top_ ; i >= top_ ; top_--) {
		if(top_ == 0)
			break;
	}
}

void isEmpty() {
	if(top_ == 0)
		cout << "stack is empty." << endl;
}

int main() {
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	top();
	pop();
	peep(2);
	empty();
	isEmpty();
}
