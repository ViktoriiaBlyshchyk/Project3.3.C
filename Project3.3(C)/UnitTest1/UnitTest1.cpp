﻿#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project3.3(C)\Project3.3(C)\Complex.cpp"
#include "D:\Study\ООП\Project3.3(C)\Project3.3(C)\Complex.h"
#include "D:\Study\ООП\Project3.3(C)\Project3.3(C)\Object.cpp"
#include "D:\Study\ООП\Project3.3(C)\Project3.3(C)\Object.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool a;
			Complex b(2, 1);
			Complex c(2, 1);
			a = equ(b, c);
			Assert::IsTrue(a);
		}
	};
}
