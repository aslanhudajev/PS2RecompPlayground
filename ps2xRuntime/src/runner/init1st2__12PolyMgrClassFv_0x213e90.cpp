#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init1st2__12PolyMgrClassFv
// Address: 0x213e90 - 0x213fb4
void init1st2__12PolyMgrClassFv_0x213e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init1st2__12PolyMgrClassFv");


    ctx->pc = 0x213e90u;

    // 0x213e90: 0x27bdffd0
    ctx->pc = 0x213e90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213e94: 0x7fbf0020
    ctx->pc = 0x213e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x213e98: 0x7fb10010
    ctx->pc = 0x213e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x213e9c: 0xc06b684
    ctx->pc = 0x213E9Cu;
    SET_GPR_U32(ctx, 31, 0x213EA4u);
    ctx->pc = 0x213EA0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1ADA10u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlInitSprite_0x1ada10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213EA4u; }
        else if (ctx->pc != 0x213EA4u) { ctx->pc = 0x213EA4u; }
    }
    if (ctx->pc != 0x213EA4u) { return; }
    ctx->pc = 0x213EA4u;
    // 0x213ea4: 0x3c020051
    ctx->pc = 0x213ea4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x213ea8: 0xc080f38
    ctx->pc = 0x213EA8u;
    SET_GPR_U32(ctx, 31, 0x213EB0u);
    ctx->pc = 0x213EACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13392));
    ctx->pc = 0x203CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initOndemPal__11PalMgrClassFv_0x203ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213EB0u; }
        else if (ctx->pc != 0x213EB0u) { ctx->pc = 0x213EB0u; }
    }
    if (ctx->pc != 0x213EB0u) { return; }
    ctx->pc = 0x213EB0u;
    // 0x213eb0: 0x3c020029
    ctx->pc = 0x213eb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x213eb4: 0x70008628
    ctx->pc = 0x213eb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x213eb8: 0x2451a140
    ctx->pc = 0x213eb8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294943040));
label_213ebc:
    // 0x213ebc: 0x96230004
    ctx->pc = 0x213ebcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213ec0: 0x24020010
    ctx->pc = 0x213ec0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x213ec4: 0x10620002
    ctx->pc = 0x213EC4u;
    {
        const bool branch_taken_0x213ec4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x213EC8u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x213ec4) {
            ctx->pc = 0x213ED0u;
            goto label_213ed0;
        }
    }
    ctx->pc = 0x213ECCu;
    // 0x213ecc: 0x34c60004
    ctx->pc = 0x213eccu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 4));
label_213ed0:
    // 0x213ed0: 0x96230006
    ctx->pc = 0x213ed0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x213ed4: 0x24020001
    ctx->pc = 0x213ed4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x213ed8: 0x14620003
    ctx->pc = 0x213ED8u;
    {
        const bool branch_taken_0x213ed8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x213ed8) {
            ctx->pc = 0x213EE8u;
            goto label_213ee8;
        }
    }
    ctx->pc = 0x213EE0u;
    // 0x213ee0: 0x34c60001
    ctx->pc = 0x213ee0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 1));
    // 0x213ee4: 0x0
    ctx->pc = 0x213ee4u;
    // NOP
label_213ee8:
    // 0x213ee8: 0x8e270000
    ctx->pc = 0x213ee8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x213eec: 0x3c020051
    ctx->pc = 0x213eecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x213ef0: 0x24443450
    ctx->pc = 0x213ef0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13392));
    // 0x213ef4: 0x72002e28
    ctx->pc = 0x213ef4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x213ef8: 0x70004628
    ctx->pc = 0x213ef8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x213efc: 0xc080fe8
    ctx->pc = 0x213EFCu;
    SET_GPR_U32(ctx, 31, 0x213F04u);
    ctx->pc = 0x213F00u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x203FA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initPal__11PalMgrClassFiiPvii_0x203fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F04u; }
        else if (ctx->pc != 0x213F04u) { ctx->pc = 0x213F04u; }
    }
    if (ctx->pc != 0x213F04u) { return; }
    ctx->pc = 0x213F04u;
    // 0x213f04: 0x3c020051
    ctx->pc = 0x213f04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x213f08: 0x24443450
    ctx->pc = 0x213f08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13392));
    // 0x213f0c: 0xc081058
    ctx->pc = 0x213F0Cu;
    SET_GPR_U32(ctx, 31, 0x213F14u);
    ctx->pc = 0x213F10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x204160u;
    {
        const uint32_t __entryPc = ctx->pc;
        reqTrans__11PalMgrClassFi_0x204160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F14u; }
        else if (ctx->pc != 0x213F14u) { ctx->pc = 0x213F14u; }
    }
    if (ctx->pc != 0x213F14u) { return; }
    ctx->pc = 0x213F14u;
    // 0x213f14: 0x26100001
    ctx->pc = 0x213f14u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x213f18: 0x2a02009a
    ctx->pc = 0x213f18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 154));
    // 0x213f1c: 0x1440ffe7
    ctx->pc = 0x213F1Cu;
    {
        const bool branch_taken_0x213f1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x213F20u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x213f1c) {
            ctx->pc = 0x213EBCu;
            goto label_213ebc;
        }
    }
    ctx->pc = 0x213F24u;
    // 0x213f24: 0xc0552d8
    ctx->pc = 0x213F24u;
    SET_GPR_U32(ctx, 31, 0x213F2Cu);
    ctx->pc = 0x213F28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F2Cu; }
        else if (ctx->pc != 0x213F2Cu) { ctx->pc = 0x213F2Cu; }
    }
    if (ctx->pc != 0x213F2Cu) { return; }
    ctx->pc = 0x213F2Cu;
    // 0x213f2c: 0x3c020051
    ctx->pc = 0x213f2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x213f30: 0xc081048
    ctx->pc = 0x213F30u;
    SET_GPR_U32(ctx, 31, 0x213F38u);
    ctx->pc = 0x213F34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13392));
    ctx->pc = 0x204120u;
    {
        const uint32_t __entryPc = ctx->pc;
        transfer__11PalMgrClassFv_0x204120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F38u; }
        else if (ctx->pc != 0x213F38u) { ctx->pc = 0x213F38u; }
    }
    if (ctx->pc != 0x213F38u) { return; }
    ctx->pc = 0x213F38u;
    // 0x213f38: 0xc0854a8
    ctx->pc = 0x213F38u;
    SET_GPR_U32(ctx, 31, 0x213F40u);
    ctx->pc = 0x2152A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEntryObjLnk__Fv_0x2152a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F40u; }
        else if (ctx->pc != 0x213F40u) { ctx->pc = 0x213F40u; }
    }
    if (ctx->pc != 0x213F40u) { return; }
    ctx->pc = 0x213F40u;
    // 0x213f40: 0x3c010050
    ctx->pc = 0x213f40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x213f44: 0x8423e504
    ctx->pc = 0x213f44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x213f48: 0x24020016
    ctx->pc = 0x213f48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 22));
    // 0x213f4c: 0x14620009
    ctx->pc = 0x213F4Cu;
    {
        const bool branch_taken_0x213f4c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x213F50u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x213f4c) {
            ctx->pc = 0x213F74u;
            goto label_213f74;
        }
    }
    ctx->pc = 0x213F54u;
    // 0x213f54: 0x3c020050
    ctx->pc = 0x213f54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x213f58: 0x2444e540
    ctx->pc = 0x213f58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    // 0x213f5c: 0x3c020020
    ctx->pc = 0x213f5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x213f60: 0x3c05001e
    ctx->pc = 0x213f60u;
    SET_GPR_U32(ctx, 5, ((uint32_t)30 << 16));
    // 0x213f64: 0xc086994
    ctx->pc = 0x213F64u;
    SET_GPR_U32(ctx, 31, 0x213F6Cu);
    ctx->pc = 0x213F68u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 28416));
    ctx->pc = 0x21A650u;
    {
        const uint32_t __entryPc = ctx->pc;
        init2__11TexMgrClassFii_0x21a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F6Cu; }
        else if (ctx->pc != 0x213F6Cu) { ctx->pc = 0x213F6Cu; }
    }
    if (ctx->pc != 0x213F6Cu) { return; }
    ctx->pc = 0x213F6Cu;
    // 0x213f6c: 0x10000006
    ctx->pc = 0x213F6Cu;
    {
        const bool branch_taken_0x213f6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x213f6c) {
            ctx->pc = 0x213F88u;
            goto label_213f88;
        }
    }
    ctx->pc = 0x213F74u;
label_213f74:
    // 0x213f74: 0x2444e540
    ctx->pc = 0x213f74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    // 0x213f78: 0x3c020020
    ctx->pc = 0x213f78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x213f7c: 0x3c05001e
    ctx->pc = 0x213f7cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)30 << 16));
    // 0x213f80: 0xc086994
    ctx->pc = 0x213F80u;
    SET_GPR_U32(ctx, 31, 0x213F88u);
    ctx->pc = 0x213F84u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 28416));
    ctx->pc = 0x21A650u;
    {
        const uint32_t __entryPc = ctx->pc;
        init2__11TexMgrClassFii_0x21a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F88u; }
        else if (ctx->pc != 0x213F88u) { ctx->pc = 0x213F88u; }
    }
    if (ctx->pc != 0x213F88u) { return; }
    ctx->pc = 0x213F88u;
label_213f88:
    // 0x213f88: 0x3c010051
    ctx->pc = 0x213f88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x213f8c: 0x8c26345c
    ctx->pc = 0x213f8cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 13404)));
    // 0x213f90: 0x3c020050
    ctx->pc = 0x213f90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x213f94: 0x2444e540
    ctx->pc = 0x213f94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    // 0x213f98: 0xc0869d8
    ctx->pc = 0x213F98u;
    SET_GPR_U32(ctx, 31, 0x213FA0u);
    ctx->pc = 0x213F9Cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)4 << 16));
    ctx->pc = 0x21A760u;
    {
        const uint32_t __entryPc = ctx->pc;
        initOndemandTex__11TexMgrClassFii_0x21a760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FA0u; }
        else if (ctx->pc != 0x213FA0u) { ctx->pc = 0x213FA0u; }
    }
    if (ctx->pc != 0x213FA0u) { return; }
    ctx->pc = 0x213FA0u;
    // 0x213fa0: 0x7bbf0020
    ctx->pc = 0x213fa0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213fa4: 0x7bb10010
    ctx->pc = 0x213fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213fa8: 0x7bb00000
    ctx->pc = 0x213fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213fac: 0x3e00008
    ctx->pc = 0x213FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213FB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213EBCu: goto label_213ebc;
            case 0x213ED0u: goto label_213ed0;
            case 0x213EE8u: goto label_213ee8;
            case 0x213F74u: goto label_213f74;
            case 0x213F88u: goto label_213f88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213FB4u;
}
