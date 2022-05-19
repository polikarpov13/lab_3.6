#include "pch.h"
#include "CppUnitTest.h"
#include "../../../../../політех/ооп/3/lab_3.6/lab_3.6/B1.cpp"
#include "../../../../../політех/ооп/3/lab_3.6/lab_3.6/B2.cpp"
#include "../../../../../політех/ооп/3/lab_3.6/lab_3.6/D1.cpp"
#include "../../../../../політех/ооп/3/lab_3.6/lab_3.6/D2.cpp"
#include "../../../../../політех/ооп/3/lab_3.6/lab_3.6/D3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			D2 Test(1000, 2000, 3000);
			Assert::AreEqual(sizeof(D2), size_t(12));
		}
	};
}
