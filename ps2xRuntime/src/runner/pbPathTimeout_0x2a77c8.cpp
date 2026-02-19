#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbPathTimeout
// Address: 0x2a77c8 - 0x2a78e8
void pbPathTimeout_0x2a77c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a77c8u;

    // 0x2a77c8: 0x27bdffd0
    ctx->pc = 0x2a77c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a77cc: 0xffbf0020
    ctx->pc = 0x2a77ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a77d0: 0xffbe0010
    ctx->pc = 0x2a77d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2a77d4: 0x3a0f02d
    ctx->pc = 0x2a77d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a77d8: 0xafc40000
    ctx->pc = 0x2a77d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a77dc: 0xafc50004
    ctx->pc = 0x2a77dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x2a77e0: 0x3c04003b
    ctx->pc = 0x2a77e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a77e4: 0x2484f2d0
    ctx->pc = 0x2a77e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963920));
    // 0x2a77e8: 0xc0b4a34
    ctx->pc = 0x2A77E8u;
    SET_GPR_U32(ctx, 31, 0x2A77F0u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A77F0u; }
    }
    if (ctx->pc != 0x2A77F0u) { return; }
    ctx->pc = 0x2A77F0u;
    // 0x2a77f0: 0x3c04003b
    ctx->pc = 0x2a77f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a77f4: 0x2484f308
    ctx->pc = 0x2a77f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963976));
    // 0x2a77f8: 0x8fc50004
    ctx->pc = 0x2a77f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a77fc: 0xc0b4a34
    ctx->pc = 0x2A77FCu;
    SET_GPR_U32(ctx, 31, 0x2A7804u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7804u; }
    }
    if (ctx->pc != 0x2A7804u) { return; }
    ctx->pc = 0x2A7804u;
    // 0x2a7804: 0x3c04003b
    ctx->pc = 0x2a7804u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7808: 0x2484f328
    ctx->pc = 0x2a7808u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964008));
    // 0x2a780c: 0xc0b4a34
    ctx->pc = 0x2A780Cu;
    SET_GPR_U32(ctx, 31, 0x2A7814u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7814u; }
    }
    if (ctx->pc != 0x2A7814u) { return; }
    ctx->pc = 0x2A7814u;
    // 0x2a7814: 0xafc00008
    ctx->pc = 0x2a7814u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
label_2a7818:
    // 0x2a7818: 0x8fc20008
    ctx->pc = 0x2a7818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a781c: 0x28430010
    ctx->pc = 0x2a781cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 16));
    // 0x2a7820: 0x14600003
    ctx->pc = 0x2A7820u;
    {
        const bool branch_taken_0x2a7820 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a7820) {
            ctx->pc = 0x2A7830u;
            goto label_2a7830;
        }
    }
    ctx->pc = 0x2A7828u;
    // 0x2a7828: 0x10000018
    ctx->pc = 0x2A7828u;
    {
        const bool branch_taken_0x2a7828 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7828) {
            ctx->pc = 0x2A788Cu;
            goto label_2a788c;
        }
    }
    ctx->pc = 0x2A7830u;
label_2a7830:
    // 0x2a7830: 0x24020001
    ctx->pc = 0x2a7830u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7834: 0x8fc30008
    ctx->pc = 0x2a7834u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7838: 0x621004
    ctx->pc = 0x2a7838u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2a783c: 0x8fc30000
    ctx->pc = 0x2a783cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7840: 0x431024
    ctx->pc = 0x2a7840u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7844: 0x1040000c
    ctx->pc = 0x2A7844u;
    {
        const bool branch_taken_0x2a7844 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7844) {
            ctx->pc = 0x2A7878u;
            goto label_2a7878;
        }
    }
    ctx->pc = 0x2A784Cu;
    // 0x2a784c: 0x8fc20008
    ctx->pc = 0x2a784cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7850: 0x40182d
    ctx->pc = 0x2a7850u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7854: 0x31080
    ctx->pc = 0x2a7854u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a7858: 0x3c030037
    ctx->pc = 0x2a7858u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a785c: 0x24638080
    ctx->pc = 0x2a785cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294934656));
    // 0x2a7860: 0x621021
    ctx->pc = 0x2a7860u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a7864: 0x3c04003b
    ctx->pc = 0x2a7864u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7868: 0x2484f338
    ctx->pc = 0x2a7868u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964024));
    // 0x2a786c: 0x8c450000
    ctx->pc = 0x2a786cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7870: 0xc0b4a34
    ctx->pc = 0x2A7870u;
    SET_GPR_U32(ctx, 31, 0x2A7878u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7878u; }
    }
    if (ctx->pc != 0x2A7878u) { return; }
    ctx->pc = 0x2A7878u;
label_2a7878:
    // 0x2a7878: 0x8fc20008
    ctx->pc = 0x2a7878u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a787c: 0x24430001
    ctx->pc = 0x2a787cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a7880: 0xafc30008
    ctx->pc = 0x2a7880u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
    // 0x2a7884: 0x1000ffe4
    ctx->pc = 0x2A7884u;
    {
        const bool branch_taken_0x2a7884 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7884) {
            ctx->pc = 0x2A7818u;
            goto label_2a7818;
        }
    }
    ctx->pc = 0x2A788Cu;
label_2a788c:
    // 0x2a788c: 0x3c04003b
    ctx->pc = 0x2a788cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a7890: 0x2484f350
    ctx->pc = 0x2a7890u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964048));
    // 0x2a7894: 0xc0b4a34
    ctx->pc = 0x2A7894u;
    SET_GPR_U32(ctx, 31, 0x2A789Cu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A789Cu; }
    }
    if (ctx->pc != 0x2A789Cu) { return; }
    ctx->pc = 0x2A789Cu;
    // 0x2a789c: 0x3c04003b
    ctx->pc = 0x2a789cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a78a0: 0x2484f358
    ctx->pc = 0x2a78a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964056));
    // 0x2a78a4: 0xc0a9b54
    ctx->pc = 0x2A78A4u;
    SET_GPR_U32(ctx, 31, 0x2A78ACu);
    ctx->pc = 0x2A6D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbShowPathInfo_0x2a6d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A78ACu; }
    }
    if (ctx->pc != 0x2A78ACu) { return; }
    ctx->pc = 0x2A78ACu;
    // 0x2a78ac: 0x3c04003b
    ctx->pc = 0x2a78acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a78b0: 0x2484f2d0
    ctx->pc = 0x2a78b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963920));
    // 0x2a78b4: 0xc0b4a34
    ctx->pc = 0x2A78B4u;
    SET_GPR_U32(ctx, 31, 0x2A78BCu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A78BCu; }
    }
    if (ctx->pc != 0x2A78BCu) { return; }
    ctx->pc = 0x2A78BCu;
    // 0x2a78bc: 0x3c04003b
    ctx->pc = 0x2a78bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a78c0: 0x2484f360
    ctx->pc = 0x2a78c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964064));
    // 0x2a78c4: 0x3c050080
    ctx->pc = 0x2a78c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x2a78c8: 0xc0b49a6
    ctx->pc = 0x2A78C8u;
    SET_GPR_U32(ctx, 31, 0x2A78D0u);
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A78D0u; }
    }
    if (ctx->pc != 0x2A78D0u) { return; }
    ctx->pc = 0x2A78D0u;
    // 0x2a78d0: 0x3c0e82d
    ctx->pc = 0x2a78d0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78d4: 0xdfbf0020
    ctx->pc = 0x2a78d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a78d8: 0xdfbe0010
    ctx->pc = 0x2a78d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a78dc: 0x27bd0030
    ctx->pc = 0x2a78dcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a78e0: 0x3e00008
    ctx->pc = 0x2A78E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A7818u: goto label_2a7818;
            case 0x2A7830u: goto label_2a7830;
            case 0x2A7878u: goto label_2a7878;
            case 0x2A788Cu: goto label_2a788c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A78E8u;
}
