#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: InvalidDCache
// Address: 0x155270 - 0x1552ec
void InvalidDCache_0x155270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("InvalidDCache");


    ctx->pc = 0x155270u;

    // 0x155270: 0x27bdffc0
    ctx->pc = 0x155270u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x155274: 0xffb20020
    ctx->pc = 0x155274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x155278: 0xffb10010
    ctx->pc = 0x155278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x15527c: 0x80902d
    ctx->pc = 0x15527cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155280: 0xffbf0030
    ctx->pc = 0x155280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x155284: 0xa0882d
    ctx->pc = 0x155284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155288: 0xffb00000
    ctx->pc = 0x155288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15528c: 0x40106000
    ctx->pc = 0x15528cu;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x155290: 0x3c020001
    ctx->pc = 0x155290u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x155294: 0x2028024
    ctx->pc = 0x155294u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x155298: 0x12000003
    ctx->pc = 0x155298u;
    {
        const bool branch_taken_0x155298 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x155298) {
            ctx->pc = 0x1552A8u;
            goto label_1552a8;
        }
    }
    ctx->pc = 0x1552A0u;
    // 0x1552a0: 0xc05725c
    ctx->pc = 0x1552A0u;
    SET_GPR_U32(ctx, 31, 0x1552A8u);
    ctx->pc = 0x15C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x15c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1552A8u; }
        else if (ctx->pc != 0x1552A8u) { ctx->pc = 0x1552A8u; }
    }
    if (ctx->pc != 0x1552A8u) { return; }
    ctx->pc = 0x1552A8u;
label_1552a8:
    // 0x1552a8: 0x3c04ffff
    ctx->pc = 0x1552a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x1552ac: 0x3484ffc0
    ctx->pc = 0x1552acu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65472));
    // 0x1552b0: 0x2242824
    ctx->pc = 0x1552b0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1552b4: 0xc055472
    ctx->pc = 0x1552B4u;
    SET_GPR_U32(ctx, 31, 0x1552BCu);
    ctx->pc = 0x1552B8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->pc = 0x1551C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceIDC_0x1551c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1552BCu; }
        else if (ctx->pc != 0x1552BCu) { ctx->pc = 0x1552BCu; }
    }
    if (ctx->pc != 0x1552BCu) { return; }
    ctx->pc = 0x1552BCu;
    // 0x1552bc: 0x12000006
    ctx->pc = 0x1552BCu;
    {
        const bool branch_taken_0x1552bc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1552C0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1552bc) {
            ctx->pc = 0x1552D8u;
            goto label_1552d8;
        }
    }
    ctx->pc = 0x1552C4u;
    // 0x1552c4: 0xdfb20020
    ctx->pc = 0x1552c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1552c8: 0xdfb10010
    ctx->pc = 0x1552c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1552cc: 0xdfb00000
    ctx->pc = 0x1552ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1552d0: 0x805726e
    ctx->pc = 0x1552D0u;
    ctx->pc = 0x1552D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x15C9B8u;
    EIntr_0x15c9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1552D8u;
label_1552d8:
    // 0x1552d8: 0xdfb20020
    ctx->pc = 0x1552d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1552dc: 0xdfb10010
    ctx->pc = 0x1552dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1552e0: 0xdfb00000
    ctx->pc = 0x1552e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1552e4: 0x3e00008
    ctx->pc = 0x1552E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1552E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1552A8u: goto label_1552a8;
            case 0x1552D8u: goto label_1552d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1552ECu;
}
