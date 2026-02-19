#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_memory.h"
#include <iostream>
#include <cstring>
#include <miniz.h>

// Native replacement for recompiled uncompress.
//
// PS2 calling convention at entry:
//   a0 (reg4) = dest       (PS2 pointer to output buffer)
//   a1 (reg5) = destLen    (PS2 pointer to uint32 holding output buffer size; written back with actual size)
//   a2 (reg6) = source     (PS2 pointer to compressed data)
//   a3 (reg7) = sourceLen  (uint32 compressed size)
//
// Returns in v0 (reg2):
//   0 = Z_OK, 1 = Z_STREAM_END, negative = error
//
// The original PS2 code builds a z_stream on the stack, calls inflateInit_/inflate/inflateEnd.
// The recompiled inflate state machine has bugs. Using host zlib (via miniz) is correct and fast.

void uncompress_0x2d7408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d7408u;

    const uint32_t destAddr    = getRegU32(ctx, 4);
    const uint32_t destLenAddr = getRegU32(ctx, 5);
    const uint32_t srcAddr     = getRegU32(ctx, 6);
    const uint32_t srcLen      = getRegU32(ctx, 7);

    uint8_t *destHost    = getMemPtr(rdram, destAddr);
    uint8_t *destLenHost = getMemPtr(rdram, destLenAddr);
    const uint8_t *srcHost = static_cast<const uint8_t*>(getMemPtr(rdram, srcAddr));

    if (!destHost || !destLenHost || !srcHost || srcLen == 0) {
        std::cerr << "[uncompress-native] BAD ARGS dest=0x" << std::hex << destAddr
                  << " destLen=0x" << destLenAddr << " src=0x" << srcAddr
                  << " srcLen=0x" << srcLen << std::dec << "\n";
        SET_GPR_S32(ctx, 2, -2);
        return;
    }

    uint32_t destLenVal;
    std::memcpy(&destLenVal, destLenHost, sizeof(uint32_t));

    {
        static int s_logCount = 0;
        if (s_logCount < 15) {
            std::cerr << "[uncompress-native] #" << (s_logCount + 1)
                      << " dest=0x" << std::hex << destAddr << " destLen=" << destLenVal
                      << " src=0x" << srcAddr << " srcLen=0x" << srcLen;
            if (srcLen >= 2) {
                std::cerr << " first2: " << (unsigned)srcHost[0] << " " << (unsigned)srcHost[1];
            }
            std::cerr << std::dec << "\n";
            ++s_logCount;
        }
    }

    mz_ulong mzDestLen = static_cast<mz_ulong>(destLenVal);
    int ret = mz_uncompress(destHost, &mzDestLen, srcHost, static_cast<mz_ulong>(srcLen));

    uint32_t writtenLen = static_cast<uint32_t>(mzDestLen);
    std::memcpy(destLenHost, &writtenLen, sizeof(uint32_t));

    {
        static int s_retLogCount = 0;
        if (s_retLogCount < 15) {
            std::cerr << "[uncompress-native] #" << (s_retLogCount + 1) << " result=" << ret
                      << " written=" << writtenLen << "\n";
            ++s_retLogCount;
        }
    }

    SET_GPR_S32(ctx, 2, ret);
    // Leave ctx->pc at the entry point (0x2D7408) so the caller's
    // "if (ctx->pc == __entryPc)" check triggers and resumes correctly.
}
