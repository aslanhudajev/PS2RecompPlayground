#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_CalcAudioTotTime
// Address: 0x1967f8 - 0x196898
void sfmpv_CalcAudioTotTime_0x1967f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_CalcAudioTotTime");


    ctx->pc = 0x1967f8u;

    // 0x1967f8: 0x27bdffc0
    ctx->pc = 0x1967f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1967fc: 0x3c02002c
    ctx->pc = 0x1967fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x196800: 0xffb10020
    ctx->pc = 0x196800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x196804: 0x2442d2c0
    ctx->pc = 0x196804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955712));
    // 0x196808: 0xffbf0030
    ctx->pc = 0x196808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19680c: 0x80882d
    ctx->pc = 0x19680cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196810: 0xffb00010
    ctx->pc = 0x196810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x196814: 0x8e240000
    ctx->pc = 0x196814u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x196818: 0x8c83000c
    ctx->pc = 0x196818u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x19681c: 0x14620009
    ctx->pc = 0x19681Cu;
    {
        const bool branch_taken_0x19681c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x196820u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 44100));
        if (branch_taken_0x19681c) {
            ctx->pc = 0x196844u;
            goto label_196844;
        }
    }
    ctx->pc = 0x196824u;
    // 0x196824: 0x220202d
    ctx->pc = 0x196824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196828: 0x3a0282d
    ctx->pc = 0x196828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19682c: 0xc064af8
    ctx->pc = 0x19682Cu;
    SET_GPR_U32(ctx, 31, 0x196834u);
    ctx->pc = 0x196830u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x192BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFCON_ReadTotSmplQue_0x192be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196834u; }
        else if (ctx->pc != 0x196834u) { ctx->pc = 0x196834u; }
    }
    if (ctx->pc != 0x196834u) { return; }
    ctx->pc = 0x196834u;
    // 0x196834: 0x14400006
    ctx->pc = 0x196834u;
    {
        const bool branch_taken_0x196834 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x196838u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 2708));
        if (branch_taken_0x196834) {
            ctx->pc = 0x196850u;
            goto label_196850;
        }
    }
    ctx->pc = 0x19683Cu;
    // 0x19683c: 0x10000011
    ctx->pc = 0x19683Cu;
    {
        const bool branch_taken_0x19683c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196840u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x19683c) {
            ctx->pc = 0x196884u;
            goto label_196884;
        }
    }
    ctx->pc = 0x196844u;
label_196844:
    // 0x196844: 0xafa00000
    ctx->pc = 0x196844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x196848: 0xafa20004
    ctx->pc = 0x196848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x19684c: 0x26300a94
    ctx->pc = 0x19684cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 2708));
label_196850:
    // 0x196850: 0x8fa30000
    ctx->pc = 0x196850u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196854: 0x8e0201a4
    ctx->pc = 0x196854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x196858: 0x8e250ad0
    ctx->pc = 0x196858u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 2768)));
    // 0x19685c: 0x431021
    ctx->pc = 0x19685cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196860: 0x8fa60004
    ctx->pc = 0x196860u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x196864: 0x40202d
    ctx->pc = 0x196864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196868: 0xc063132
    ctx->pc = 0x196868u;
    SET_GPR_U32(ctx, 31, 0x196870u);
    ctx->pc = 0x19686Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
    ctx->pc = 0x18C4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MulAbDivC_0x18c4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196870u; }
        else if (ctx->pc != 0x196870u) { ctx->pc = 0x196870u; }
    }
    if (ctx->pc != 0x196870u) { return; }
    ctx->pc = 0x196870u;
    // 0x196870: 0x8e040118
    ctx->pc = 0x196870u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x196874: 0x2403ffff
    ctx->pc = 0x196874u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196878: 0x441023
    ctx->pc = 0x196878u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19687c: 0x62182a
    ctx->pc = 0x19687cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x196880: 0x3100a
    ctx->pc = 0x196880u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_196884:
    // 0x196884: 0xdfbf0030
    ctx->pc = 0x196884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196888: 0xdfb10020
    ctx->pc = 0x196888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19688c: 0xdfb00010
    ctx->pc = 0x19688cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196890: 0x3e00008
    ctx->pc = 0x196890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196894u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196844u: goto label_196844;
            case 0x196850u: goto label_196850;
            case 0x196884u: goto label_196884;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196898u;
}
