#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iSuspendThread
// Address: 0x115358 - 0x1153f0
void iSuspendThread_0x115358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115358u;

    // 0x115358: 0x27bdffe0
    ctx->pc = 0x115358u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11535c: 0xffbf0010
    ctx->pc = 0x11535cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115360: 0xffb00000
    ctx->pc = 0x115360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115364: 0x2403ffd1
    ctx->pc = 0x115364u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x115368: 0xc
    ctx->pc = 0x115368u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x11536c: 0x40802d
    ctx->pc = 0x11536cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115370: 0x12040005
    ctx->pc = 0x115370u;
    {
        const bool branch_taken_0x115370 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x115374u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 256));
        if (branch_taken_0x115370) {
            ctx->pc = 0x115388u;
            goto label_115388;
        }
    }
    ctx->pc = 0x115378u;
    // 0x115378: 0xc043888
    ctx->pc = 0x115378u;
    SET_GPR_U32(ctx, 31, 0x115380u);
    ctx->pc = 0x10E220u;
    {
        const uint32_t __entryPc = ctx->pc;
        _iSuspendThread_0x10e220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115380u; }
    }
    if (ctx->pc != 0x115380u) { return; }
    ctx->pc = 0x115380u;
    // 0x115380: 0x10000018
    ctx->pc = 0x115380u;
    {
        const bool branch_taken_0x115380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x115384u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x115380) {
            ctx->pc = 0x1153E4u;
            goto label_1153e4;
        }
    }
    ctx->pc = 0x115388u;
label_115388:
    // 0x115388: 0x10400004
    ctx->pc = 0x115388u;
    {
        const bool branch_taken_0x115388 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11538Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x115388) {
            ctx->pc = 0x11539Cu;
            goto label_11539c;
        }
    }
    ctx->pc = 0x115390u;
    // 0x115390: 0x8c43fbd8
    ctx->pc = 0x115390u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966232)));
    // 0x115394: 0x14600003
    ctx->pc = 0x115394u;
    {
        const bool branch_taken_0x115394 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x115398u;
        SET_GPR_U32(ctx, 3, ((uint32_t)24 << 16));
        if (branch_taken_0x115394) {
            ctx->pc = 0x1153A4u;
            goto label_1153a4;
        }
    }
    ctx->pc = 0x11539Cu;
label_11539c:
    // 0x11539c: 0x10000010
    ctx->pc = 0x11539Cu;
    {
        const bool branch_taken_0x11539c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1153A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x11539c) {
            ctx->pc = 0x1153E0u;
            goto label_1153e0;
        }
    }
    ctx->pc = 0x1153A4u;
label_1153a4:
    // 0x1153a4: 0x3c050018
    ctx->pc = 0x1153a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)24 << 16));
    // 0x1153a8: 0x2463a2f8
    ctx->pc = 0x1153a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943480));
    // 0x1153ac: 0x8ca4a2f0
    ctx->pc = 0x1153acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4294943472)));
    // 0x1153b0: 0x8c620004
    ctx->pc = 0x1153b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1153b4: 0x24070002
    ctx->pc = 0x1153b4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1153b8: 0x304201ff
    ctx->pc = 0x1153b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 511));
    // 0x1153bc: 0x23040
    ctx->pc = 0x1153bcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1153c0: 0x24420001
    ctx->pc = 0x1153c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1153c4: 0x662821
    ctx->pc = 0x1153c4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1153c8: 0xac620004
    ctx->pc = 0x1153c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1153cc: 0xa0a70008
    ctx->pc = 0x1153ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x1153d0: 0xa0182d
    ctx->pc = 0x1153d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1153d4: 0xc0438b4
    ctx->pc = 0x1153D4u;
    SET_GPR_U32(ctx, 31, 0x1153DCu);
    ctx->pc = 0x1153D8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->pc = 0x10E2D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x10e2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1153DCu; }
    }
    if (ctx->pc != 0x1153DCu) { return; }
    ctx->pc = 0x1153DCu;
    // 0x1153dc: 0x200102d
    ctx->pc = 0x1153dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1153e0:
    // 0x1153e0: 0xdfbf0010
    ctx->pc = 0x1153e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1153e4:
    // 0x1153e4: 0xdfb00000
    ctx->pc = 0x1153e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1153e8: 0x3e00008
    ctx->pc = 0x1153E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1153ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115388u: goto label_115388;
            case 0x11539Cu: goto label_11539c;
            case 0x1153A4u: goto label_1153a4;
            case 0x1153E0u: goto label_1153e0;
            case 0x1153E4u: goto label_1153e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1153F0u;
}
