#pragma once

#pragma managed(push,off)
#include <iterator.h>
#pragma managed(pop)

using namespace System;

namespace iteratorNET
{
	generic <class T> public interface class IIteratorProfile
	{
		T get(UInt32 index);
		UInt32 count();
	};

	generic <class T> public ref class Iterator
	{
	public:
		Iterator(IIteratorProfile<T> ^itProf);
		~Iterator();
		!Iterator();
		T next();
		Boolean hasNext();

	private:
		IIteratorProfile<T> ^itProf;
		UInt32 index;
		UInt32 count;
	};
}