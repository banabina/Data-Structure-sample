#include <iostream>
#include <cassert>
#include "MyStack.h"

int main(void)
{
	const int STK_SIZE = 5;
	MyStack<int> stk(STK_SIZE);
	stk.Push(1);
	stk.Push(2);
	assert(stk.Top() == 2);
	stk.Pop();
	assert(stk.Top() == 1);
	stk.Pop();
	assert(stk.IsEmpty());
	assert(stk.Pop() == false);

	for (unsigned int i = 1; i < STK_SIZE + 1; ++i)
	{
		stk.Push(i);
	}
	assert(stk.IsFull());
	assert(stk.Push(1) == false);
	for (unsigned int i = STK_SIZE; i > 0; --i)
	{
		assert(stk.Top() == i);
		assert(stk.Pop());
	}
}