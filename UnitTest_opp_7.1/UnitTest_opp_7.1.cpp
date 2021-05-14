#include "pch.h"
#include "CppUnitTest.h"
#include "../Project_opp_7.1/project_opp_7_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestopp71
{
	TEST_CLASS(UnitTestopp71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			array<int, 100> arr = { 0 };
			for (int i = 0; i < 5; i++)
				arr[i] = 1;
			c = sum(arr, 5);
			Assert::AreEqual(c, 2.0);
		}
	};
}
