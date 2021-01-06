#pragma once
template <typename T>
class MyStack
{
private:
	int mTop;
	int mSize;
	T* mValue;
public:
	MyStack(int size)
		: mSize(size)
	{
		mValue = new T[size];
		mTop = -1;
	}

	~MyStack()
	{
		delete[] mValue;
	}
	bool IsFull()
	{
		return mSize - 1 == mTop ? true : false;
	}
	bool IsEmpty()
	{
		return mTop == -1 ? true : false;
	}
	bool Pop()
	{
		if (IsEmpty())
		{
			return false;
		}
		--mTop;
		return true;
	}
	bool Push(T value)
	{
		if (IsFull())
		{
			return false;
		}
		mValue[++mTop] = value;
		return true;
	}

	T Top()
	{
		if (IsEmpty())
		{
			return NULL;
		}
		return mValue[mTop];
	}

};