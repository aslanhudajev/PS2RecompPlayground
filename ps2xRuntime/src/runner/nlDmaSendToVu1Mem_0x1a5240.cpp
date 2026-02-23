#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDmaSendToVu1Mem
// Address: 0x1a5240 - 0x1a52b4
void nlDmaSendToVu1Mem_0x1a5240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDmaSendToVu1Mem");


    ctx->pc = 0x1a5240u;

    // 0x1a5240: 0x27bdfff0
    ctx->pc = 0x1a5240u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a5244: 0x7fbf0000
    ctx->pc = 0x1a5244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a5248: 0x3c010030
    ctx->pc = 0x1a5248u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a524c: 0xac2621a0
    ctx->pc = 0x1a524cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8608), GPR_U32(ctx, 6));
    // 0x1a5250: 0x3c010030
    ctx->pc = 0x1a5250u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a5254: 0xac2521a4
    ctx->pc = 0x1a5254u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8612), GPR_U32(ctx, 5));
    // 0x1a5258: 0x3c010030
    ctx->pc = 0x1a5258u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a525c: 0xac2021a8
    ctx->pc = 0x1a525cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8616), GPR_U32(ctx, 0));
    // 0x1a5260: 0x4810003
    ctx->pc = 0x1A5260u;
    {
        const bool branch_taken_0x1a5260 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A5264u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        if (branch_taken_0x1a5260) {
            ctx->pc = 0x1A5270u;
            goto label_1a5270;
        }
    }
    ctx->pc = 0x1A5268u;
    // 0x1a5268: 0x2482000f
    ctx->pc = 0x1a5268u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 15));
    // 0x1a526c: 0x21903
    ctx->pc = 0x1a526cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_1a5270:
    // 0x1a5270: 0x61400
    ctx->pc = 0x1a5270u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 16));
    // 0x1a5274: 0x621825
    ctx->pc = 0x1a5274u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5278: 0x3c026c00
    ctx->pc = 0x1a5278u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27648 << 16));
    // 0x1a527c: 0x621025
    ctx->pc = 0x1a527cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5280: 0x3c010030
    ctx->pc = 0x1a5280u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a5284: 0xac2221ac
    ctx->pc = 0x1a5284u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8620), GPR_U32(ctx, 2));
    // 0x1a5288: 0xc0552d8
    ctx->pc = 0x1A5288u;
    SET_GPR_U32(ctx, 31, 0x1A5290u);
    ctx->pc = 0x1A528Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5290u; }
        else if (ctx->pc != 0x1A5290u) { ctx->pc = 0x1A5290u; }
    }
    if (ctx->pc != 0x1A5290u) { return; }
    ctx->pc = 0x1A5290u;
    // 0x1a5290: 0xc0547e4
    ctx->pc = 0x1A5290u;
    SET_GPR_U32(ctx, 31, 0x1A5298u);
    ctx->pc = 0x1A5294u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x151F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x151f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5298u; }
        else if (ctx->pc != 0x1A5298u) { ctx->pc = 0x1A5298u; }
    }
    if (ctx->pc != 0x1A5298u) { return; }
    ctx->pc = 0x1A5298u;
    // 0x1a5298: 0x3c030030
    ctx->pc = 0x1a5298u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1a529c: 0x246521a0
    ctx->pc = 0x1a529cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 8608));
    // 0x1a52a0: 0xc0548b8
    ctx->pc = 0x1A52A0u;
    SET_GPR_U32(ctx, 31, 0x1A52A8u);
    ctx->pc = 0x1A52A4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1522E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x1522e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A52A8u; }
        else if (ctx->pc != 0x1A52A8u) { ctx->pc = 0x1A52A8u; }
    }
    if (ctx->pc != 0x1A52A8u) { return; }
    ctx->pc = 0x1A52A8u;
    // 0x1a52a8: 0x7bbf0000
    ctx->pc = 0x1a52a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a52ac: 0x3e00008
    ctx->pc = 0x1A52ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A52B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5270u: goto label_1a5270;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A52B4u;
}
