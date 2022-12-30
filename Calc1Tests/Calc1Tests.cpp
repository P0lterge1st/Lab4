 #include "pch.h"
#include "CppUnitTest.h"
#include "..\Calc1\Calc1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Calc1Tests
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Add_3Plus3_Returned6)
		{
			double arg1 = 3;
			double arg2 = 3;
			double expected = 6;

			double result = operation(arg1, arg2, '+');
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(Sub_7Minus3_Returned4)
		{
			double arg1 = 7;
			double arg2 = 3;
			double expected = 4;

			double result = operation(arg1, arg2, '-');
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(Multip_3Multip5_Returned15)
		{
			double arg1 = 3;
			double arg2 = 5;
			double expected = 15;

			double result = operation(arg1, arg2, '*');
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(Div_8Div2_Returned4)
		{
			double arg1 = 8;
			double arg2 = 2;
			double expected = 4;

			double result = operation(arg1, arg2, '/');
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(Div_9Div0_ExeptionReturned0)
		{
			double arg1 = 9;
			double arg2 = 0;
			double expected = 0;

			double result = operation(arg1, arg2, '/');
			Assert::AreEqual(expected, result);
		}
	};
}
