#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int a = 4;
			int c[a] = { 0, 1, 1, 1 };
			t = arrCount(c, a, 0 ,0);
			Assert::AreEqual(t, 1);
		}
	};
}
