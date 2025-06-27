/* llvm-config.h stub */

#ifndef __STUB__LLVMCONFIG_H__
#define __STUB__LLVMCONFIG_H__

#if   (__riscv_xlen == 64)
# include "llvm-config-64.h"
#elif (__riscv_xlen == 32)
# include "llvm-config-32.h"
#else
# error "Unsupported RISC-V XLEN"
#endif

#endif
