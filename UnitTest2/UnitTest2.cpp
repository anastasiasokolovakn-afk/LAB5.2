#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB5.2(1)/LAB5.2(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 0.1;
			double xk = 0.9;
			double dx = 0.3;
			double eps = 0.000001;
			int n = 0;
			double s = 0;
			double R{};
			double M_PI = 3.141592653589793;
			double expected = M_PI / 2 - atan(x) ;
			double actual = S(x, eps, n, R, s);

		}
	};
}
