#include "myqueue.h"

#pragma region QUEUE FUNCTIONS
/**
* @name enqueue
* @param [in] myQueue [\b MyQueue*]
* @param [in] data [\b Data*]
* @retval [\b int]
* The term enqueue is used for adding an element.
* Adds the object given as a parameter to the end of the queue.
**/
int enqueue(MyQueue* myQueue, Data* data) {
	if (myQueue->size == myQueue->capacity)
	{
		return 0;
	}
	myQueue->back = (myQueue->back + 1) % myQueue->capacity;
	myQueue->arr[myQueue->back] = data;
	myQueue->size = myQueue->size + 1;
}
/**
* @name dequeue
* @param [in] myQueue [\b MyQueue*]
* @retval [\b Data*]
* The term dequeue is used for element removal.
* It is the function used to extract the first element of the queue.
**/
Data* dequeue(MyQueue* myQueue) {
	if (myQueue->size == 0)
	{
		return 0;
	}
	Data* data = myQueue->arr[myQueue->front];
	myQueue->front = (myQueue->front + 1) % myQueue->capacity;
	myQueue->size = myQueue->size - 1;
	return data;
}
/**
* @name front
* @param [in] myQueue [\b MyQueue*]
* @retval [\b Data*]
* Front is an inbuilt function in C++ STL which is declared in  header file.
* Front returns a reference to the first element which is inserted in the queue container associated with it.
**/
Data* front(MyQueue* myQueue) {
	// Empty condition to check
	if (myQueue->size == 0) {
		return 0;
	}
	return myQueue->arr[myQueue->front];
}
/**
* @name back
* @param [in] myQueue [\b MyQueue*]
* @retval [\b Data*]
* Back is an inbuilt function in C++ STL which is declared in  header file.
**/
Data* back(MyQueue* myQueue) {
	// Empty condition to check
	if (myQueue->size == 0) {
		return 0;
	}
	return myQueue->arr[myQueue->back];
}
/**
* @name queueLenght
* @param [in] myQueue [\b MyQueue*]
* @retval [\b int]
* This is the number of units waiting in a queue or present in a system.
* In the latter case it is sometimes called the system size.
**/
int queueLength(MyQueue* myQueue) {
	return myQueue->capacity;
}
#pragma endregion