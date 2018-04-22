#include "stdafx.h"

#include "iteratorNET.h"

generic<class T> iteratorNET::Iterator<T>::Iterator(IIteratorProfile<T> ^itProf)
{
	this->itProf = itProf;
	index = 0;
	count = itProf->count();
}

generic<class T> iteratorNET::Iterator<T>::~Iterator()
{
	delete itProf;
	this->!Iterator();
}

generic<class T> iteratorNET::Iterator<T>::!Iterator()
{
}

generic<class T> T iteratorNET::Iterator<T>::next()
{
	T t = itProf->get(index);
	index++;
	return t;
}

generic<class T> Boolean iteratorNET::Iterator<T>::hasNext()
{
	return (index < count);
}