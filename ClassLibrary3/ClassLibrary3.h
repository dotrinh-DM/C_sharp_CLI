#pragma once

using namespace System;

namespace ClassLibrary3 {
	public ref class WrapperClass
	{
	public:
		//int MemCopy(int size);
		int MemCopy(array<int>^ src, array<int>^ dst, int size);
	};
}
