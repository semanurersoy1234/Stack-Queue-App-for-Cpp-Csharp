#include "mystack.h"

#pragma region STACK FUNCTIONS
       /**
		* @name push
		* @param [in] myStack [\b MyStack*]
		* @param [in] data [\b Data*]
		* @retval [\b int]
		* The elements are inserted at the top of the stack.
		**/
int push(MyStack* myStack, Data* data) {
	if (myStack->top == myStack->capacity - 1)
	{
		return -1;
	}
	myStack->arr[++myStack->top] = data;
}
        /**
		* @name pop
		* @param [in] myStack [\b MyStack*]
		* @retval [\b Data*]
		* The pop function is used to remove or ‘pop’ an element from the top of the stack.
		**/
Data* pop(MyStack* myStack) {
	if (myStack->top == -1)
	{
		return 0;
	}
	return myStack->arr[myStack->top--];
}
       /**
		* @name top
		* @param [in] myStack [\b MyStack*]
		* @retval [\b Data*]
		*Top function is used to reference the top(or the newest) element of the stack.
		**/
Data* top(MyStack* myStack)
{
	if (myStack->top == -1)
	{
		return 0;
	}
	return myStack->arr[myStack->top];
}
       /**
		* @name bottom
		* @param [in] myStack [\b MyStack*]
		* @retval [\b Data*]
		* Once the stack becomes empty start printing the element which was popped last and the last element that was popped was the bottom.
		**/
Data* bottom(MyStack* myStack)
{
	if (myStack->top == -1)
	{
		return 0;
	}
	return myStack->arr[0];
}
        /**
		* @name stackLength
		* @param [in] myStack [\b MyStack*]
		* @retval [\b int]
		*Top function is used to reference the top(or the newest) element of the stack.
		**/
int stackLength(MyStack* myStack) {
	return myStack->top + 1;
}
#pragma endregion