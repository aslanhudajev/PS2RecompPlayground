#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _waitIpuIdle64
// Address: 0x2f2410 - 0x2f24c0
void _waitIpuIdle64_0x2f2410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f2410u;

    // 0x2f2410: 0x27bdffc0
    ctx->pc = 0x2f2410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f2414: 0x3c021000
    ctx->pc = 0x2f2414u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f2418: 0xffbf0030
    ctx->pc = 0x2f2418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f241c: 0x34422000
    ctx->pc = 0x2f241cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x2f2420: 0xffb20020
    ctx->pc = 0x2f2420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f2424: 0x282d
    ctx->pc = 0x2f2424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2428: 0xffb10010
    ctx->pc = 0x2f2428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f242c: 0xffb00000
    ctx->pc = 0x2f242cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f2430: 0xdc440000
    ctx->pc = 0x2f2430u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f2434: 0x481001c
    ctx->pc = 0x2F2434u;
    {
        const bool branch_taken_0x2f2434 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2F2438u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2f2434) {
            ctx->pc = 0x2F24A8u;
            goto label_2f24a8;
        }
    }
    ctx->pc = 0x2F243Cu;
    // 0x2f243c: 0x3c021000
    ctx->pc = 0x2f243cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f2440: 0x34422010
    ctx->pc = 0x2f2440u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x2f2444: 0x8c430000
    ctx->pc = 0x2f2444u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2f2448: 0x30634000
    ctx->pc = 0x2f2448u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16384));
    // 0x2f244c: 0x14600017
    ctx->pc = 0x2F244Cu;
    {
        const bool branch_taken_0x2f244c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F2450u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f244c) {
            ctx->pc = 0x2F24ACu;
            goto label_2f24ac;
        }
    }
    ctx->pc = 0x2F2454u;
    // 0x2f2454: 0x3c111000
    ctx->pc = 0x2f2454u;
    SET_GPR_U32(ctx, 17, ((uint32_t)4096 << 16));
    // 0x2f2458: 0x3c101000
    ctx->pc = 0x2f2458u;
    SET_GPR_U32(ctx, 16, ((uint32_t)4096 << 16));
    // 0x2f245c: 0x3c12003a
    ctx->pc = 0x2f245cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2f2460: 0x36312000
    ctx->pc = 0x2f2460u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 8192));
    // 0x2f2464: 0x36102010
    ctx->pc = 0x2f2464u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 8208));
    // 0x2f2468: 0xa0102d
    ctx->pc = 0x2f2468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f246c: 0x0
    ctx->pc = 0x2f246cu;
    // NOP
label_2f2470:
    // 0x2f2470: 0x28421389
    ctx->pc = 0x2f2470u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x2f2474: 0x14400004
    ctx->pc = 0x2F2474u;
    {
        const bool branch_taken_0x2f2474 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F2478u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x2f2474) {
            ctx->pc = 0x2F2488u;
            goto label_2f2488;
        }
    }
    ctx->pc = 0x2F247Cu;
    // 0x2f247c: 0xc0bb848
    ctx->pc = 0x2F247Cu;
    SET_GPR_U32(ctx, 31, 0x2F2484u);
    ctx->pc = 0x2F2480u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12324)));
    ctx->pc = 0x2EE120u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x2ee120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2484u; }
    }
    if (ctx->pc != 0x2F2484u) { return; }
    ctx->pc = 0x2F2484u;
    // 0x2f2484: 0x282d
    ctx->pc = 0x2f2484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2488:
    // 0x2f2488: 0xde240000
    ctx->pc = 0x2f2488u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f248c: 0x4810006
    ctx->pc = 0x2F248Cu;
    {
        const bool branch_taken_0x2f248c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2F2490u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2f248c) {
            ctx->pc = 0x2F24A8u;
            goto label_2f24a8;
        }
    }
    ctx->pc = 0x2F2494u;
    // 0x2f2494: 0x8e020000
    ctx->pc = 0x2f2494u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f2498: 0x30424000
    ctx->pc = 0x2f2498u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x2f249c: 0x1040fff4
    ctx->pc = 0x2F249Cu;
    {
        const bool branch_taken_0x2f249c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F24A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f249c) {
            ctx->pc = 0x2F2470u;
            goto label_2f2470;
        }
    }
    ctx->pc = 0x2F24A4u;
    // 0x2f24a4: 0xdfbf0030
    ctx->pc = 0x2f24a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f24a8:
    // 0x2f24a8: 0x80102d
    ctx->pc = 0x2f24a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f24ac:
    // 0x2f24ac: 0xdfb20020
    ctx->pc = 0x2f24acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f24b0: 0xdfb10010
    ctx->pc = 0x2f24b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f24b4: 0xdfb00000
    ctx->pc = 0x2f24b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f24b8: 0x3e00008
    ctx->pc = 0x2F24B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F24BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F2470u: goto label_2f2470;
            case 0x2F2488u: goto label_2f2488;
            case 0x2F24A8u: goto label_2f24a8;
            case 0x2F24ACu: goto label_2f24ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F24C0u;
}
