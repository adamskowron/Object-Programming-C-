//#include "array.h"
#include<string>
#include <vector>


template<class T>
Array<T>::Array(int size)
{
	buf = new T[size];
	len = size;
}

template<class T>
Array<T>::Array(const Array<T> &a)
{
	buf = new T[a.length()];
	len = a.length();
	for (int i = 0; i<len; i++) {
		buf[i] = a[i];
	}
}

template<class T>
Array<T>::~Array()
{
	delete[] buf;
	buf = nullptr;
}

template<class T>
T& Array<T>::operator[](int index) const
{
	if (index < len)
		return buf[index];
	else if (index > len || index < 0)
	{
		MyException a;
		throw a;
	}
	return buf[len - 1];
}

template<class T>
int Array<T>::length() const
{
	return len;
}

template<class T>
Array<T>& Array<T>::operator=(const Array<T> &a)
{
	if (this == &a)
	{
		return *this;
	}

	delete[] buf;

	buf = new T[a.length()];
	len = a.length();
	for (int i = 0; i<len; i++)
	{
		buf[i] = a[i];
	}

	return *this;
}

template<class T>
Array<T> Array<T>::invert()
{
	T *buf2 = new T[len];

	for (int i = 0; i < len; i++)
	{
		buf2[i] = buf[len - i - 1];
	}
	delete[] buf;
	buf = buf2;
	
	return *this;
}

template<class T>
Array<T> Array<T>::resize(int newsize)
{
	if (newsize > len)
	{
		T *buf2 = new T[newsize];
		for (int i = 0; i < len; i++)
		{
			buf2[i] = buf[i];
		}
		for (int i = len - 1; i < newsize; i++)
		{
			buf2[i] = 0;
		}
		delete[] buf;
		buf = buf2;
	}
	else if (len > newsize)
	{
		T* buf2 = new T[newsize];
		for (int i = 0; i < newsize; i++)
		{
			buf2[i] = buf[i];
		}
		delete[] buf;
		buf = buf2;
	}
	return *this;
}

template<class T>
Array<T> Array<T>::insert_behind(int number, T element)
{
	if (number > len || number < 0)
	{
		MyException a;
		throw a;
	}
	else
	{
		len = len + 1;
		T* buf2 = new T[len];
		for (int i = 0; i <= number; i++)
		{
			buf2[i] = buf[i];
		}
		buf2[number + 1] = element;
		for (int i = number + 2; i < len; i++)
		{
			buf2[i] = buf[i - 1];
		}
		delete[] buf;
		buf = buf2;
		return *this;
	}
}

template<class T>
Array<T> Array<T>::insert_before(int number, T element)
{
	if (number > len || number < 0)
	{
		MyException a;
		throw a;
	}
	else
	{
		len = len + 1;
		T* buf2 = new T[len];
		for (int i = 0; i <= number - 2; i++)
		{
			buf2[i] = buf[i];
		}
		buf2[number - 1] = element;
		for (int i = number; i < len; i++)
		{
			buf2[i] = buf[i - 1];
		}
		delete[] buf;
		buf = buf2;
		return *this;
	}
}



template<class T>
ostream& operator<<(ostream &o, const Array<T> &a)
{
	for (int i = 0; i<a.length(); i++) {
		o << a[i];
		if (i < a.length() - 1)
			o << " , ";
	}
	return o;
}
