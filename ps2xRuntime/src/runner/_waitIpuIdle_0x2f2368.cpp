#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _waitIpuIdle
// Address: 0x2f2368 - 0x2f240c
void _waitIpuIdle_0x2f2368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f2368u;

    // 0x2f2368: 0x27bdffb0
    ctx->pc = 0x2f2368u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f236c: 0x3c021000
    ctx->pc = 0x2f236cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f2370: 0xffbf0040
    ctx->pc = 0x2f2370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f2374: 0x34422010
    ctx->pc = 0x2f2374u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x2f2378: 0xffb30030
    ctx->pc = 0x2f2378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f237c: 0x3c048000
    ctx->pc = 0x2f237cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x2f2380: 0xffb20020
    ctx->pc = 0x2f2380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f2384: 0x34844000
    ctx->pc = 0x2f2384u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 16384));
    // 0x2f2388: 0xffb10010
    ctx->pc = 0x2f2388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f238c: 0x282d
    ctx->pc = 0x2f238cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2390: 0xffb00000
    ctx->pc = 0x2f2390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f2394: 0x8c430000
    ctx->pc = 0x2f2394u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f2398: 0x3c028000
    ctx->pc = 0x2f2398u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x2f239c: 0x641824
    ctx->pc = 0x2f239cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f23a0: 0x14620014
    ctx->pc = 0x2F23A0u;
    {
        const bool branch_taken_0x2f23a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F23A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2f23a0) {
            ctx->pc = 0x2F23F4u;
            goto label_2f23f4;
        }
    }
    ctx->pc = 0x2F23A8u;
    // 0x2f23a8: 0x3c111000
    ctx->pc = 0x2f23a8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)4096 << 16));
    // 0x2f23ac: 0x3c108000
    ctx->pc = 0x2f23acu;
    SET_GPR_U32(ctx, 16, ((uint32_t)32768 << 16));
    // 0x2f23b0: 0x3c13003a
    ctx->pc = 0x2f23b0u;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    // 0x2f23b4: 0x36312010
    ctx->pc = 0x2f23b4u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 8208));
    // 0x2f23b8: 0x36104000
    ctx->pc = 0x2f23b8u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 16384));
    // 0x2f23bc: 0x3c128000
    ctx->pc = 0x2f23bcu;
    SET_GPR_U32(ctx, 18, ((uint32_t)32768 << 16));
    // 0x2f23c0: 0xa0102d
    ctx->pc = 0x2f23c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f23c4: 0x0
    ctx->pc = 0x2f23c4u;
    // NOP
label_2f23c8:
    // 0x2f23c8: 0x28421389
    ctx->pc = 0x2f23c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x2f23cc: 0x14400004
    ctx->pc = 0x2F23CCu;
    {
        const bool branch_taken_0x2f23cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F23D0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x2f23cc) {
            ctx->pc = 0x2F23E0u;
            goto label_2f23e0;
        }
    }
    ctx->pc = 0x2F23D4u;
    // 0x2f23d4: 0xc0bb848
    ctx->pc = 0x2F23D4u;
    SET_GPR_U32(ctx, 31, 0x2F23DCu);
    ctx->pc = 0x2F23D8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12324)));
    ctx->pc = 0x2EE120u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x2ee120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F23DCu; }
    }
    if (ctx->pc != 0x2F23DCu) { return; }
    ctx->pc = 0x2F23DCu;
    // 0x2f23dc: 0x282d
    ctx->pc = 0x2f23dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f23e0:
    // 0x2f23e0: 0x8e220000
    ctx->pc = 0x2f23e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f23e4: 0x501024
    ctx->pc = 0x2f23e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f23e8: 0x1052fff7
    ctx->pc = 0x2F23E8u;
    {
        const bool branch_taken_0x2f23e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        ctx->pc = 0x2F23ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f23e8) {
            ctx->pc = 0x2F23C8u;
            goto label_2f23c8;
        }
    }
    ctx->pc = 0x2F23F0u;
    // 0x2f23f0: 0xdfbf0040
    ctx->pc = 0x2f23f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f23f4:
    // 0x2f23f4: 0xdfb30030
    ctx->pc = 0x2f23f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f23f8: 0xdfb20020
    ctx->pc = 0x2f23f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f23fc: 0xdfb10010
    ctx->pc = 0x2f23fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2400: 0xdfb00000
    ctx->pc = 0x2f2400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2404: 0x3e00008
    ctx->pc = 0x2F2404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2408u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F23C8u: goto label_2f23c8;
            case 0x2F23E0u: goto label_2f23e0;
            case 0x2F23F4u: goto label_2f23f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F240Cu;
}
