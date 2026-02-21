#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: topThread
// Address: 0x115090 - 0x115168
void topThread_0x115090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115090u;

    // 0x115090: 0x27bdff80
    ctx->pc = 0x115090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x115094: 0xffb10010
    ctx->pc = 0x115094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x115098: 0x80882d
    ctx->pc = 0x115098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11509c: 0xffb60060
    ctx->pc = 0x11509cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1150a0: 0xffb50050
    ctx->pc = 0x1150a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1150a4: 0x3c160018
    ctx->pc = 0x1150a4u;
    SET_GPR_U32(ctx, 22, ((uint32_t)24 << 16));
    // 0x1150a8: 0xffb40040
    ctx->pc = 0x1150a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1150ac: 0x3c150017
    ctx->pc = 0x1150acu;
    SET_GPR_U32(ctx, 21, ((uint32_t)23 << 16));
    // 0x1150b0: 0xffb30030
    ctx->pc = 0x1150b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1150b4: 0x24140001
    ctx->pc = 0x1150b4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1150b8: 0xffb20020
    ctx->pc = 0x1150b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1150bc: 0x24130002
    ctx->pc = 0x1150bcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1150c0: 0xffb00000
    ctx->pc = 0x1150c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1150c4: 0x26320008
    ctx->pc = 0x1150c4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
    // 0x1150c8: 0xffbf0070
    ctx->pc = 0x1150c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1150cc: 0x26300009
    ctx->pc = 0x1150ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 9));
label_1150d0:
    // 0x1150d0: 0xc0438b8
    ctx->pc = 0x1150D0u;
    SET_GPR_U32(ctx, 31, 0x1150D8u);
    ctx->pc = 0x1150D4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 4294943472)));
    ctx->pc = 0x10E2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1150D8u; }
    }
    if (ctx->pc != 0x1150D8u) { return; }
    ctx->pc = 0x1150D8u;
    // 0x1150d8: 0x8e230000
    ctx->pc = 0x1150d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1150dc: 0x306301ff
    ctx->pc = 0x1150dcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 511));
    // 0x1150e0: 0x24640001
    ctx->pc = 0x1150e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1150e4: 0x31840
    ctx->pc = 0x1150e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1150e8: 0xae240000
    ctx->pc = 0x1150e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1150ec: 0x2431021
    ctx->pc = 0x1150ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1150f0: 0x2033021
    ctx->pc = 0x1150f0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1150f4: 0x90420000
    ctx->pc = 0x1150f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1150f8: 0x1054000f
    ctx->pc = 0x1150F8u;
    {
        const bool branch_taken_0x1150f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 20));
        ctx->pc = 0x1150FCu;
        SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 2), 2));
        if (branch_taken_0x1150f8) {
            ctx->pc = 0x115138u;
            goto label_115138;
        }
    }
    ctx->pc = 0x115100u;
    // 0x115100: 0x10a00005
    ctx->pc = 0x115100u;
    {
        const bool branch_taken_0x115100 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x115104u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 16416));
        if (branch_taken_0x115100) {
            ctx->pc = 0x115118u;
            goto label_115118;
        }
    }
    ctx->pc = 0x115108u;
    // 0x115108: 0x10400007
    ctx->pc = 0x115108u;
    {
        const bool branch_taken_0x115108 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11510Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x115108) {
            ctx->pc = 0x115128u;
            goto label_115128;
        }
    }
    ctx->pc = 0x115110u;
    // 0x115110: 0x10000011
    ctx->pc = 0x115110u;
    {
        const bool branch_taken_0x115110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x115110) {
            ctx->pc = 0x115158u;
            goto label_115158;
        }
    }
    ctx->pc = 0x115118u;
label_115118:
    // 0x115118: 0x1053000b
    ctx->pc = 0x115118u;
    {
        const bool branch_taken_0x115118 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        ctx->pc = 0x11511Cu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        if (branch_taken_0x115118) {
            ctx->pc = 0x115148u;
            goto label_115148;
        }
    }
    ctx->pc = 0x115120u;
    // 0x115120: 0x1000000d
    ctx->pc = 0x115120u;
    {
        const bool branch_taken_0x115120 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x115120) {
            ctx->pc = 0x115158u;
            goto label_115158;
        }
    }
    ctx->pc = 0x115128u;
label_115128:
    // 0x115128: 0xc043874
    ctx->pc = 0x115128u;
    SET_GPR_U32(ctx, 31, 0x115130u);
    ctx->pc = 0x11512Cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x10E1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WakeupThread_0x10e1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115130u; }
    }
    if (ctx->pc != 0x115130u) { return; }
    ctx->pc = 0x115130u;
    // 0x115130: 0x1000ffe7
    ctx->pc = 0x115130u;
    {
        const bool branch_taken_0x115130 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x115130) {
            ctx->pc = 0x1150D0u;
            goto label_1150d0;
        }
    }
    ctx->pc = 0x115138u;
label_115138:
    // 0x115138: 0xc043854
    ctx->pc = 0x115138u;
    SET_GPR_U32(ctx, 31, 0x115140u);
    ctx->pc = 0x11513Cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->pc = 0x10E150u;
    {
        const uint32_t __entryPc = ctx->pc;
        RotateThreadReadyQueue_0x10e150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115140u; }
    }
    if (ctx->pc != 0x115140u) { return; }
    ctx->pc = 0x115140u;
    // 0x115140: 0x1000ffe3
    ctx->pc = 0x115140u;
    {
        const bool branch_taken_0x115140 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x115140) {
            ctx->pc = 0x1150D0u;
            goto label_1150d0;
        }
    }
    ctx->pc = 0x115148u;
label_115148:
    // 0x115148: 0xc043884
    ctx->pc = 0x115148u;
    SET_GPR_U32(ctx, 31, 0x115150u);
    ctx->pc = 0x11514Cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x10E210u;
    {
        const uint32_t __entryPc = ctx->pc;
        SuspendThread_0x10e210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115150u; }
    }
    if (ctx->pc != 0x115150u) { return; }
    ctx->pc = 0x115150u;
    // 0x115150: 0x1000ffdf
    ctx->pc = 0x115150u;
    {
        const bool branch_taken_0x115150 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x115150) {
            ctx->pc = 0x1150D0u;
            goto label_1150d0;
        }
    }
    ctx->pc = 0x115158u;
label_115158:
    // 0x115158: 0xc043eea
    ctx->pc = 0x115158u;
    SET_GPR_U32(ctx, 31, 0x115160u);
    ctx->pc = 0x10FBA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        kprintf_0x10fba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115160u; }
    }
    if (ctx->pc != 0x115160u) { return; }
    ctx->pc = 0x115160u;
    // 0x115160: 0x1000ffdb
    ctx->pc = 0x115160u;
    {
        const bool branch_taken_0x115160 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x115160) {
            ctx->pc = 0x1150D0u;
            goto label_1150d0;
        }
    }
    ctx->pc = 0x115168u;
}
