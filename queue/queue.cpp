#include <iostream> 

using namespace std;

#define BUFFER_SIZE 128

int head_ = 0;
int tail_ = 0;
int cache_[BUFFER_SIZE];

void enqueue(int d) {
	cache_[tail_] = d;
	tail_ = (tail_+1) % BUFFER_SIZE;
}

int dequeue() {
	int d = cache_[head_];
	head_ = (head_ +1) % BUFFER_SIZE;
	return d;
}

void head() {
	cout << "cache_[head_] = " << cache_[head_] << endl;
}

void tail() {
	cout << "cache_[tail_] = " << cache_[tail_] << endl;
}

void peep(int i) {
	cout << "cache_[ith] = " << cache_[i] << endl;
}

void empty() {
	for(int i = head_ ; i <= tail_ ; head_++) {
		cout << cache_[head_] << endl;
		if(head_ == tail_)
			break;
	}
}

void isEmpty() {
	if(head_ == tail_)
		cout << "queue is empty." << endl;
}

int main() {
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	enqueue(6);
	head();
	tail();
	peep(2);
	empty();
	isEmpty();
}
