#include <gtest/gtest.h>

#include <nnpack.h>

#include <testers/winograd.h>

/**
 * Test 1D input Winograd gransform F(6, 3).
 */

TEST(F6k3, input) {
	auto tester = WinogradTransformTester()
		.kernelSize(3)
		.outputSize(6)
		.simdWidth(4)
		.errorLimit(1.0e-6f);
	const float inputTransformMatrix[8 * 8] = {
		1.0f,  0.0f, -5.25f,  0.00f,  5.25f,  0.00f, -1.0f, 0.0f,
		0.0f,  1.0f,  1.00f, -4.25f, -4.25f,  1.00f,  1.0f, 0.0f,
		0.0f, -1.0f,  1.00f,  4.25f, -4.25f, -1.00f,  1.0f, 0.0f,
		0.0f,  0.5f,  0.25f, -2.50f, -1.25f,  2.00f,  1.0f, 0.0f,
		0.0f, -0.5f,  0.25f,  2.50f, -1.25f, -2.00f,  1.0f, 0.0f,
		0.0f,  2.0f,  4.00f, -2.50f, -5.00f,  0.50f,  1.0f, 0.0f,
		0.0f, -2.0f,  4.00f,  2.50f, -5.00f, -0.50f,  1.0f, 0.0f,
		0.0f, -1.0f,  0.00f,  5.25f,  0.00f, -5.25f,  0.0f, 1.0f
	};
	tester.testInputTransform(nnp_iwt_f6k3__psimd, inputTransformMatrix);
}

/**
 * Test 1D kernel Winograd gransform F(6, 3).
 */

TEST(F6k3, kernel) {
	auto tester = WinogradTransformTester()
		.kernelSize(3)
		.outputSize(6)
		.simdWidth(4)
		.errorLimit(1.0e-6f);
	const float kernelTransformMatrix[8 * 3] = {
		 1.0f,     0.0f,     0.0f,
		-2.0f/9,  -2.0f/9,  -2.0f/9,
		-2.0f/9,   2.0f/9,  -2.0f/9,
		 1.0f/90,  1.0f/45,  2.0f/45,
		 1.0f/90, -1.0f/45,  2.0f/45,
		 1.0f/45,  1.0f/90,  1.0f/180,
		 1.0f/45, -1.0f/90,  1.0f/180,
		 0.0f,     0.0f,     1.0f
	};
	tester.testKernelTransform(nnp_kwt_f6k3__psimd, kernelTransformMatrix);
}

/**
 * Test 1D output Winograd gransform F(6, 3).
 */

TEST(F6k3, output) {
	const float outputTransformMatrix[6 * 8] = {
		1.0f, 1.0f,  1.0f,  1.0f,   1.0f,  32.0f,   32.0f, 0.0f,
		0.0f, 1.0f, -1.0f,  2.0f,  -2.0f,  16.0f,  -16.0f, 0.0f,
		0.0f, 1.0f,  1.0f,  4.0f,   4.0f,   8.0f,    8.0f, 0.0f,
		0.0f, 1.0f, -1.0f,  8.0f,  -8.0f,   4.0f,   -4.0f, 0.0f,
		0.0f, 1.0f,  1.0f, 16.0f,  16.0f,   2.0f,    2.0f, 0.0f,
		0.0f, 1.0f, -1.0f, 32.0f, -32.0f,   1.0f,   -1.0f, 1.0f
	};
	WinogradTransformTester()
		.kernelSize(3)
		.outputSize(6)
		.simdWidth(4)
		.errorLimit(1.0e-6f)
		.testOutputTransform(nnp_owt_f6k3__psimd, outputTransformMatrix);
}

int main(int argc, char* argv[]) {
	setenv("TERM", "xterm-256color", 0);
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}