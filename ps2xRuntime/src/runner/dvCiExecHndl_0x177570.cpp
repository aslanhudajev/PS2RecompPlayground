#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiExecHndl
// Address: 0x177570 - 0x1775fc
void dvCiExecHndl_0x177570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiExecHndl");


    ctx->pc = 0x177570u;

    // 0x177570: 0x27bdffe0
    ctx->pc = 0x177570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177574: 0x24030002
    ctx->pc = 0x177574u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x177578: 0xffb00000
    ctx->pc = 0x177578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17757c: 0xffbf0010
    ctx->pc = 0x17757cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177580: 0x80802d
    ctx->pc = 0x177580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177584: 0x82020002
    ctx->pc = 0x177584u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x177588: 0x14430019
    ctx->pc = 0x177588u;
    {
        const bool branch_taken_0x177588 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x17758Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x177588) {
            ctx->pc = 0x1775F0u;
            goto label_1775f0;
        }
    }
    ctx->pc = 0x177590u;
    // 0x177590: 0xc05d7f0
    ctx->pc = 0x177590u;
    SET_GPR_U32(ctx, 31, 0x177598u);
    ctx->pc = 0x175FC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_GetStat_0x175fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177598u; }
        else if (ctx->pc != 0x177598u) { ctx->pc = 0x177598u; }
    }
    if (ctx->pc != 0x177598u) { return; }
    ctx->pc = 0x177598u;
    // 0x177598: 0x40182d
    ctx->pc = 0x177598u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17759c: 0x24020009
    ctx->pc = 0x17759cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1775a0: 0x14620004
    ctx->pc = 0x1775A0u;
    {
        const bool branch_taken_0x1775a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1775A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1775a0) {
            ctx->pc = 0x1775B4u;
            goto label_1775b4;
        }
    }
    ctx->pc = 0x1775A8u;
    // 0x1775a8: 0x24020003
    ctx->pc = 0x1775a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1775ac: 0xa2020002
    ctx->pc = 0x1775acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1775b0: 0x24020003
    ctx->pc = 0x1775b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1775b4:
    // 0x1775b4: 0x1462000e
    ctx->pc = 0x1775B4u;
    {
        const bool branch_taken_0x1775b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1775B8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1775b4) {
            ctx->pc = 0x1775F0u;
            goto label_1775f0;
        }
    }
    ctx->pc = 0x1775BCu;
    // 0x1775bc: 0x8e050010
    ctx->pc = 0x1775bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1775c0: 0x8e040014
    ctx->pc = 0x1775c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1775c4: 0x52ac0
    ctx->pc = 0x1775c4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 11));
    // 0x1775c8: 0x852821
    ctx->pc = 0x1775c8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1775cc: 0xc05549c
    ctx->pc = 0x1775CCu;
    SET_GPR_U32(ctx, 31, 0x1775D4u);
    ctx->pc = 0x1775D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->pc = 0x155270u;
    {
        const uint32_t __entryPc = ctx->pc;
        InvalidDCache_0x155270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775D4u; }
        else if (ctx->pc != 0x1775D4u) { ctx->pc = 0x1775D4u; }
    }
    if (ctx->pc != 0x1775D4u) { return; }
    ctx->pc = 0x1775D4u;
    // 0x1775d4: 0x8e02000c
    ctx->pc = 0x1775d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1775d8: 0x24030001
    ctx->pc = 0x1775d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1775dc: 0x8e040010
    ctx->pc = 0x1775dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1775e0: 0xa2030002
    ctx->pc = 0x1775e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1775e4: 0x441021
    ctx->pc = 0x1775e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1775e8: 0xae02000c
    ctx->pc = 0x1775e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1775ec: 0xdfbf0010
    ctx->pc = 0x1775ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1775f0:
    // 0x1775f0: 0xdfb00000
    ctx->pc = 0x1775f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1775f4: 0x3e00008
    ctx->pc = 0x1775F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1775F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1775B4u: goto label_1775b4;
            case 0x1775F0u: goto label_1775f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1775FCu;
}
