#include <iostream> 

using namespace std;

#define CAPACITY 128

int top_ = 0;
int cache_[CAPACITY];

void push(int d) {
	cache_[top_] = d;
	top_++; 
}

int pop() {
	top_--;
	return cache_[top_];
}

void top() {
	cout<<"cache_[top_] = "<<cache_[top_]<<endl;
}

void peep(int i) {
	if(i <= CAPACITY)
		cout<<"cache_[ith] = "<<cache_[top_-i+1]<<endl;
}

void empty() {
	for(int i=top_ ; i>=top_ ; top_--) {
		cout<<cache_[top_]<<endl;
		if(top_ == 0)
			break;
	}
}

void isEmpty() {
	if(top_ == 0)
		cout<<"cache_[] is empty."<<endl;
}

int main() {
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	top();
	peep(2);
	empty();
	isEmpty();
}
