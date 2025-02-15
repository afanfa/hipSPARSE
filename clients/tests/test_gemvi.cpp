/* ************************************************************************
 * Copyright (c) 2021 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * ************************************************************************ */

#include "testing_gemvi.hpp"

#include <hipsparse.h>

TEST(gemvi_bad_arg, gemvi_float)
{
    testing_gemvi_bad_arg();
}

TEST(gemvi, gemvi_float)
{
    hipsparseStatus_t status = testing_gemvi<float>();
    EXPECT_EQ(status, HIPSPARSE_STATUS_SUCCESS);
}

TEST(gemvi, gemvi_double)
{
    hipsparseStatus_t status = testing_gemvi<double>();
    EXPECT_EQ(status, HIPSPARSE_STATUS_SUCCESS);
}

TEST(gemvi, gemvi_hipFloatComplex)
{
    hipsparseStatus_t status = testing_gemvi<hipComplex>();
    EXPECT_EQ(status, HIPSPARSE_STATUS_SUCCESS);
}

TEST(gemvi, gemvi_hipDoubleComplex)
{
    hipsparseStatus_t status = testing_gemvi<hipDoubleComplex>();
    EXPECT_EQ(status, HIPSPARSE_STATUS_SUCCESS);
}
