#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iWakeupThread
// Address: 0x115240 - 0x1152d4
void iWakeupThread_0x115240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115240u;

    // 0x115240: 0x27bdffe0
    ctx->pc = 0x115240u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115244: 0xffbf0010
    ctx->pc = 0x115244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115248: 0xffb00000
    ctx->pc = 0x115248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11524c: 0x2403ffd1
    ctx->pc = 0x11524cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x115250: 0xc
    ctx->pc = 0x115250u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x115254: 0x40802d
    ctx->pc = 0x115254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115258: 0x12040005
    ctx->pc = 0x115258u;
    {
        const bool branch_taken_0x115258 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x11525Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 256));
        if (branch_taken_0x115258) {
            ctx->pc = 0x115270u;
            goto label_115270;
        }
    }
    ctx->pc = 0x115260u;
    // 0x115260: 0xc043878
    ctx->pc = 0x115260u;
    SET_GPR_U32(ctx, 31, 0x115268u);
    ctx->pc = 0x10E1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _iWakeupThread_0x10e1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115268u; }
    }
    if (ctx->pc != 0x115268u) { return; }
    ctx->pc = 0x115268u;
    // 0x115268: 0x10000017
    ctx->pc = 0x115268u;
    {
        const bool branch_taken_0x115268 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11526Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x115268) {
            ctx->pc = 0x1152C8u;
            goto label_1152c8;
        }
    }
    ctx->pc = 0x115270u;
label_115270:
    // 0x115270: 0x10400004
    ctx->pc = 0x115270u;
    {
        const bool branch_taken_0x115270 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x115274u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x115270) {
            ctx->pc = 0x115284u;
            goto label_115284;
        }
    }
    ctx->pc = 0x115278u;
    // 0x115278: 0x8c43fbd8
    ctx->pc = 0x115278u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966232)));
    // 0x11527c: 0x14600003
    ctx->pc = 0x11527Cu;
    {
        const bool branch_taken_0x11527c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x115280u;
        SET_GPR_S32(ctx, 3, ((uint32_t)24 << 16));
        if (branch_taken_0x11527c) {
            ctx->pc = 0x11528Cu;
            goto label_11528c;
        }
    }
    ctx->pc = 0x115284u;
label_115284:
    // 0x115284: 0x1000000f
    ctx->pc = 0x115284u;
    {
        const bool branch_taken_0x115284 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x115288u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x115284) {
            ctx->pc = 0x1152C4u;
            goto label_1152c4;
        }
    }
    ctx->pc = 0x11528Cu;
label_11528c:
    // 0x11528c: 0x3c050018
    ctx->pc = 0x11528cu;
    SET_GPR_S32(ctx, 5, ((uint32_t)24 << 16));
    // 0x115290: 0x2463a2f8
    ctx->pc = 0x115290u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943480));
    // 0x115294: 0x8ca4a2f0
    ctx->pc = 0x115294u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4294943472)));
    // 0x115298: 0x8c620004
    ctx->pc = 0x115298u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11529c: 0x304201ff
    ctx->pc = 0x11529cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 511));
    // 0x1152a0: 0x23040
    ctx->pc = 0x1152a0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1152a4: 0x24420001
    ctx->pc = 0x1152a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1152a8: 0x662821
    ctx->pc = 0x1152a8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1152ac: 0xac620004
    ctx->pc = 0x1152acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1152b0: 0xa0182d
    ctx->pc = 0x1152b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152b4: 0xa0a00008
    ctx->pc = 0x1152b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1152b8: 0xc0438b4
    ctx->pc = 0x1152B8u;
    SET_GPR_U32(ctx, 31, 0x1152C0u);
    ctx->pc = 0x1152BCu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->pc = 0x10E2D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x10e2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1152C0u; }
    }
    if (ctx->pc != 0x1152C0u) { return; }
    ctx->pc = 0x1152C0u;
    // 0x1152c0: 0x200102d
    ctx->pc = 0x1152c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1152c4:
    // 0x1152c4: 0xdfbf0010
    ctx->pc = 0x1152c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1152c8:
    // 0x1152c8: 0xdfb00000
    ctx->pc = 0x1152c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1152cc: 0x3e00008
    ctx->pc = 0x1152CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1152D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115270u: goto label_115270;
            case 0x115284u: goto label_115284;
            case 0x11528Cu: goto label_11528c;
            case 0x1152C4u: goto label_1152c4;
            case 0x1152C8u: goto label_1152c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1152D4u;
}
