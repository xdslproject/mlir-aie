//===- AIEPasses.h ----------------------------------------------*- C++ -*-===//
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
// (c) Copyright 2021 Xilinx Inc.
//
//===----------------------------------------------------------------------===//

#ifndef AIEX_PASSES_H
#define AIEX_PASSES_H

#include "aie/Dialect/AIEX/IR/AIEXDialect.h"

#include "mlir/Pass/Pass.h"

namespace xilinx::AIE {

//===----------------------------------------------------------------------===//
// Registration
//===----------------------------------------------------------------------===//

/// Generate the code for registering passes.
#define GEN_PASS_REGISTRATION
#include "aie/Dialect/AIEX/Transforms/AIEXPasses.h.inc"

} // namespace xilinx::AIE

#endif // AIEX_PASSES_H
