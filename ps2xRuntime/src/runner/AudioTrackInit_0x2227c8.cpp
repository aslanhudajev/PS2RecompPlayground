#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioTrackInit
// Address: 0x2227c8 - 0x222868
void AudioTrackInit_0x2227c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2227c8u;

    // 0x2227c8: 0x182d
    ctx->pc = 0x2227c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2227cc: 0x24040014
    ctx->pc = 0x2227ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
    // 0x2227d0: 0x3c020032
    ctx->pc = 0x2227d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2227d4: 0x2446fe3c
    ctx->pc = 0x2227d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294966844));
label_2227d8:
    // 0x2227d8: 0x642818
    ctx->pc = 0x2227d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2227dc: 0xa61021
    ctx->pc = 0x2227dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2227e0: 0xac400000
    ctx->pc = 0x2227e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2227e4: 0x24630001
    ctx->pc = 0x2227e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2227e8: 0x2862000c
    ctx->pc = 0x2227e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 12));
    // 0x2227ec: 0x0
    ctx->pc = 0x2227ecu;
    // NOP
    // 0x2227f0: 0x1440fff9
    ctx->pc = 0x2227F0u;
    {
        const bool branch_taken_0x2227f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2227f0) {
            ctx->pc = 0x2227D8u;
            goto label_2227d8;
        }
    }
    ctx->pc = 0x2227F8u;
    // 0x2227f8: 0x182d
    ctx->pc = 0x2227f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2227fc: 0x3c020032
    ctx->pc = 0x2227fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222800: 0x2446ff28
    ctx->pc = 0x222800u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294967080));
    // 0x222804: 0x24040038
    ctx->pc = 0x222804u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 56));
label_222808:
    // 0x222808: 0x642818
    ctx->pc = 0x222808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22280c: 0xa61021
    ctx->pc = 0x22280cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x222810: 0xac400004
    ctx->pc = 0x222810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x222814: 0x24630001
    ctx->pc = 0x222814u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x222818: 0x28620020
    ctx->pc = 0x222818u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 32));
    // 0x22281c: 0x0
    ctx->pc = 0x22281cu;
    // NOP
    // 0x222820: 0x1440fff9
    ctx->pc = 0x222820u;
    {
        const bool branch_taken_0x222820 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x222820) {
            ctx->pc = 0x222808u;
            goto label_222808;
        }
    }
    ctx->pc = 0x222828u;
    // 0x222828: 0x182d
    ctx->pc = 0x222828u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22282c: 0x3c020032
    ctx->pc = 0x22282cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222830: 0x24470628
    ctx->pc = 0x222830u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 1576));
    // 0x222834: 0x24050030
    ctx->pc = 0x222834u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    // 0x222838: 0x2404ffff
    ctx->pc = 0x222838u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22283c: 0x0
    ctx->pc = 0x22283cu;
    // NOP
label_222840:
    // 0x222840: 0x653018
    ctx->pc = 0x222840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x222844: 0xc71021
    ctx->pc = 0x222844u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x222848: 0xac440000
    ctx->pc = 0x222848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x22284c: 0x24630001
    ctx->pc = 0x22284cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x222850: 0x28620004
    ctx->pc = 0x222850u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x222854: 0x0
    ctx->pc = 0x222854u;
    // NOP
    // 0x222858: 0x1440fff9
    ctx->pc = 0x222858u;
    {
        const bool branch_taken_0x222858 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x222858) {
            ctx->pc = 0x222840u;
            goto label_222840;
        }
    }
    ctx->pc = 0x222860u;
    // 0x222860: 0x8087fb6
    ctx->pc = 0x222860u;
    ctx->pc = 0x21FED8u;
    init_chinfo_0x21fed8(rdram, ctx, runtime); return;
    ctx->pc = 0x222868u;
}
