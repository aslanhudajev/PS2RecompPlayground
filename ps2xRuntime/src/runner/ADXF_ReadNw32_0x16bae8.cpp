#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_ReadNw32
// Address: 0x16bae8 - 0x16bc54
void ADXF_ReadNw32_0x16bae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_ReadNw32");


    ctx->pc = 0x16bae8u;

label_16bae8:
    // 0x16bae8: 0x27bdffa0
    ctx->pc = 0x16bae8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_16baec:
    // 0x16baec: 0xffb40040
    ctx->pc = 0x16baecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_16baf0:
    // 0x16baf0: 0xffb30030
    ctx->pc = 0x16baf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_16baf4:
    // 0x16baf4: 0xc0a02d
    ctx->pc = 0x16baf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16baf8:
    // 0x16baf8: 0xffb00000
    ctx->pc = 0x16baf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16bafc:
    // 0x16bafc: 0xa0982d
    ctx->pc = 0x16bafcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16bb00:
    // 0x16bb00: 0x80802d
    ctx->pc = 0x16bb00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16bb04:
    // 0x16bb04: 0xffbf0050
    ctx->pc = 0x16bb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_16bb08:
    // 0x16bb08: 0xffb20020
    ctx->pc = 0x16bb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_16bb0c:
    // 0x16bb0c: 0x24040004
    ctx->pc = 0x16bb0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
label_16bb10:
    // 0x16bb10: 0xffb10010
    ctx->pc = 0x16bb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_16bb14:
    // 0x16bb14: 0x282d
    ctx->pc = 0x16bb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16bb18:
    // 0x16bb18: 0x200302d
    ctx->pc = 0x16bb18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16bb1c:
    // 0x16bb1c: 0x260382d
    ctx->pc = 0x16bb1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16bb20:
    // 0x16bb20: 0xc05a94a
label_16bb24:
    if (ctx->pc == 0x16BB24u) {
        ctx->pc = 0x16BB24u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BB28u;
        goto label_16bb28;
    }
    ctx->pc = 0x16BB20u;
    SET_GPR_U32(ctx, 31, 0x16BB28u);
    ctx->pc = 0x16BB24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16A528u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_SetCmdHstry_0x16a528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB28u; }
        else if (ctx->pc != 0x16BB28u) { ctx->pc = 0x16BB28u; }
    }
    if (ctx->pc != 0x16BB28u) { return; }
    ctx->pc = 0x16BB28u;
label_16bb28:
    // 0x16bb28: 0x16000003
label_16bb2c:
    if (ctx->pc == 0x16BB2Cu) {
        ctx->pc = 0x16BB2Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x16BB30u;
        goto label_16bb30;
    }
    ctx->pc = 0x16BB28u;
    {
        const bool branch_taken_0x16bb28 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x16BB2Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x16bb28) {
            ctx->pc = 0x16BB38u;
            goto label_16bb38;
        }
    }
    ctx->pc = 0x16BB30u;
label_16bb30:
    // 0x16bb30: 0x10000009
label_16bb34:
    if (ctx->pc == 0x16BB34u) {
        ctx->pc = 0x16BB34u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939880));
        ctx->pc = 0x16BB38u;
        goto label_16bb38;
    }
    ctx->pc = 0x16BB30u;
    {
        const bool branch_taken_0x16bb30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BB34u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939880));
        if (branch_taken_0x16bb30) {
            ctx->pc = 0x16BB58u;
            goto label_16bb58;
        }
    }
    ctx->pc = 0x16BB38u;
label_16bb38:
    // 0x16bb38: 0x6610003
label_16bb3c:
    if (ctx->pc == 0x16BB3Cu) {
        ctx->pc = 0x16BB3Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x16BB40u;
        goto label_16bb40;
    }
    ctx->pc = 0x16BB38u;
    {
        const bool branch_taken_0x16bb38 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x16BB3Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x16bb38) {
            ctx->pc = 0x16BB48u;
            goto label_16bb48;
        }
    }
    ctx->pc = 0x16BB40u;
label_16bb40:
    // 0x16bb40: 0x10000005
label_16bb44:
    if (ctx->pc == 0x16BB44u) {
        ctx->pc = 0x16BB44u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939920));
        ctx->pc = 0x16BB48u;
        goto label_16bb48;
    }
    ctx->pc = 0x16BB40u;
    {
        const bool branch_taken_0x16bb40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BB44u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939920));
        if (branch_taken_0x16bb40) {
            ctx->pc = 0x16BB58u;
            goto label_16bb58;
        }
    }
    ctx->pc = 0x16BB48u;
label_16bb48:
    // 0x16bb48: 0x56800007
label_16bb4c:
    if (ctx->pc == 0x16BB4Cu) {
        ctx->pc = 0x16BB4Cu;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->pc = 0x16BB50u;
        goto label_16bb50;
    }
    ctx->pc = 0x16BB48u;
    {
        const bool branch_taken_0x16bb48 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x16bb48) {
            ctx->pc = 0x16BB4Cu;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->pc = 0x16BB68u;
            goto label_16bb68;
        }
    }
    ctx->pc = 0x16BB50u;
label_16bb50:
    // 0x16bb50: 0x3c04002c
    ctx->pc = 0x16bb50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_16bb54:
    // 0x16bb54: 0x24849540
    ctx->pc = 0x16bb54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939968));
label_16bb58:
    // 0x16bb58: 0xc05a854
label_16bb5c:
    if (ctx->pc == 0x16BB5Cu) {
        ctx->pc = 0x16BB60u;
        goto label_16bb60;
    }
    ctx->pc = 0x16BB58u;
    SET_GPR_U32(ctx, 31, 0x16BB60u);
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB60u; }
        else if (ctx->pc != 0x16BB60u) { ctx->pc = 0x16BB60u; }
    }
    if (ctx->pc != 0x16BB60u) { return; }
    ctx->pc = 0x16BB60u;
label_16bb60:
    // 0x16bb60: 0x10000034
label_16bb64:
    if (ctx->pc == 0x16BB64u) {
        ctx->pc = 0x16BB64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x16BB68u;
        goto label_16bb68;
    }
    ctx->pc = 0x16BB60u;
    {
        const bool branch_taken_0x16bb60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BB64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x16bb60) {
            ctx->pc = 0x16BC34u;
            goto label_16bc34;
        }
    }
    ctx->pc = 0x16BB68u;
label_16bb68:
    // 0x16bb68: 0x24020002
    ctx->pc = 0x16bb68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_16bb6c:
    // 0x16bb6c: 0x54620003
label_16bb70:
    if (ctx->pc == 0x16BB70u) {
        ctx->pc = 0x16BB70u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x16BB74u;
        goto label_16bb74;
    }
    ctx->pc = 0x16BB6Cu;
    {
        const bool branch_taken_0x16bb6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x16bb6c) {
            ctx->pc = 0x16BB70u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x16BB7Cu;
            goto label_16bb7c;
        }
    }
    ctx->pc = 0x16BB74u;
label_16bb74:
    // 0x16bb74: 0x1000002f
label_16bb78:
    if (ctx->pc == 0x16BB78u) {
        ctx->pc = 0x16BB78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BB7Cu;
        goto label_16bb7c;
    }
    ctx->pc = 0x16BB74u;
    {
        const bool branch_taken_0x16bb74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BB78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16bb74) {
            ctx->pc = 0x16BC34u;
            goto label_16bc34;
        }
    }
    ctx->pc = 0x16BB7Cu;
label_16bb7c:
    // 0x16bb7c: 0x10400005
label_16bb80:
    if (ctx->pc == 0x16BB80u) {
        ctx->pc = 0x16BB80u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x16BB84u;
        goto label_16bb84;
    }
    ctx->pc = 0x16BB7Cu;
    {
        const bool branch_taken_0x16bb7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BB80u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x16bb7c) {
            ctx->pc = 0x16BB94u;
            goto label_16bb94;
        }
    }
    ctx->pc = 0x16BB84u;
label_16bb84:
    // 0x16bb84: 0xc05a854
label_16bb88:
    if (ctx->pc == 0x16BB88u) {
        ctx->pc = 0x16BB88u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940008));
        ctx->pc = 0x16BB8Cu;
        goto label_16bb8c;
    }
    ctx->pc = 0x16BB84u;
    SET_GPR_U32(ctx, 31, 0x16BB8Cu);
    ctx->pc = 0x16BB88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940008));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB8Cu; }
        else if (ctx->pc != 0x16BB8Cu) { ctx->pc = 0x16BB8Cu; }
    }
    if (ctx->pc != 0x16BB8Cu) { return; }
    ctx->pc = 0x16BB8Cu;
label_16bb8c:
    // 0x16bb8c: 0x10000029
label_16bb90:
    if (ctx->pc == 0x16BB90u) {
        ctx->pc = 0x16BB90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x16BB94u;
        goto label_16bb94;
    }
    ctx->pc = 0x16BB8Cu;
    {
        const bool branch_taken_0x16bb8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BB90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x16bb8c) {
            ctx->pc = 0x16BC34u;
            goto label_16bc34;
        }
    }
    ctx->pc = 0x16BB94u;
label_16bb94:
    // 0x16bb94: 0x1392c0
    ctx->pc = 0x16bb94u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 19), 11));
label_16bb98:
    // 0x16bb98: 0x280202d
    ctx->pc = 0x16bb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16bb9c:
    // 0x16bb9c: 0x240282d
    ctx->pc = 0x16bb9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16bba0:
    // 0x16bba0: 0xc05f128
label_16bba4:
    if (ctx->pc == 0x16BBA4u) {
        ctx->pc = 0x16BBA4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BBA8u;
        goto label_16bba8;
    }
    ctx->pc = 0x16BBA0u;
    SET_GPR_U32(ctx, 31, 0x16BBA8u);
    ctx->pc = 0x16BBA4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17C4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRBF_Create_0x17c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BBA8u; }
        else if (ctx->pc != 0x16BBA8u) { ctx->pc = 0x16BBA8u; }
    }
    if (ctx->pc != 0x16BBA8u) { return; }
    ctx->pc = 0x16BBA8u;
label_16bba8:
    // 0x16bba8: 0x40882d
    ctx->pc = 0x16bba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16bbac:
    // 0x16bbac: 0x56200003
label_16bbb0:
    if (ctx->pc == 0x16BBB0u) {
        ctx->pc = 0x16BBB0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
        ctx->pc = 0x16BBB4u;
        goto label_16bbb4;
    }
    ctx->pc = 0x16BBACu;
    {
        const bool branch_taken_0x16bbac = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x16bbac) {
            ctx->pc = 0x16BBB0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
            ctx->pc = 0x16BBBCu;
            goto label_16bbbc;
        }
    }
    ctx->pc = 0x16BBB4u;
label_16bbb4:
    // 0x16bbb4: 0x1000001f
label_16bbb8:
    if (ctx->pc == 0x16BBB8u) {
        ctx->pc = 0x16BBB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x16BBBCu;
        goto label_16bbbc;
    }
    ctx->pc = 0x16BBB4u;
    {
        const bool branch_taken_0x16bbb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BBB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x16bbb4) {
            ctx->pc = 0x16BC34u;
            goto label_16bc34;
        }
    }
    ctx->pc = 0x16BBBCu;
label_16bbbc:
    // 0x16bbbc: 0xc05a4e4
label_16bbc0:
    if (ctx->pc == 0x16BBC0u) {
        ctx->pc = 0x16BBC0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
        ctx->pc = 0x16BBC4u;
        goto label_16bbc4;
    }
    ctx->pc = 0x16BBBCu;
    SET_GPR_U32(ctx, 31, 0x16BBC4u);
    ctx->pc = 0x16BBC0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BBC4u; }
        else if (ctx->pc != 0x16BBC4u) { ctx->pc = 0x16BBC4u; }
    }
    if (ctx->pc != 0x16BBC4u) { return; }
    ctx->pc = 0x16BBC4u;
label_16bbc4:
    // 0x16bbc4: 0x3c020023
    ctx->pc = 0x16bbc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_16bbc8:
    // 0x16bbc8: 0x24040001
    ctx->pc = 0x16bbc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_16bbcc:
    // 0x16bbcc: 0x8c43cd18
    ctx->pc = 0x16bbccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294954264)));
label_16bbd0:
    // 0x16bbd0: 0x14640005
label_16bbd4:
    if (ctx->pc == 0x16BBD4u) {
        ctx->pc = 0x16BBD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BBD8u;
        goto label_16bbd8;
    }
    ctx->pc = 0x16BBD0u;
    {
        const bool branch_taken_0x16bbd0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x16BBD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16bbd0) {
            ctx->pc = 0x16BBE8u;
            goto label_16bbe8;
        }
    }
    ctx->pc = 0x16BBD8u;
label_16bbd8:
    // 0x16bbd8: 0x8e040024
    ctx->pc = 0x16bbd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_16bbdc:
    // 0x16bbdc: 0xc05a8e6
label_16bbe0:
    if (ctx->pc == 0x16BBE0u) {
        ctx->pc = 0x16BBE0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x16BBE4u;
        goto label_16bbe4;
    }
    ctx->pc = 0x16BBDCu;
    SET_GPR_U32(ctx, 31, 0x16BBE4u);
    ctx->pc = 0x16BBE0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x16A398u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Ocbi_0x16a398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BBE4u; }
        else if (ctx->pc != 0x16BBE4u) { ctx->pc = 0x16BBE4u; }
    }
    if (ctx->pc != 0x16BBE4u) { return; }
    ctx->pc = 0x16BBE4u;
label_16bbe4:
    // 0x16bbe4: 0x200202d
    ctx->pc = 0x16bbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16bbe8:
    // 0x16bbe8: 0x260282d
    ctx->pc = 0x16bbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16bbec:
    // 0x16bbec: 0xc05ae50
label_16bbf0:
    if (ctx->pc == 0x16BBF0u) {
        ctx->pc = 0x16BBF0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BBF4u;
        goto label_16bbf4;
    }
    ctx->pc = 0x16BBECu;
    SET_GPR_U32(ctx, 31, 0x16BBF4u);
    ctx->pc = 0x16BBF0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B940u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_read_sj32_0x16b940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BBF4u; }
        else if (ctx->pc != 0x16BBF4u) { ctx->pc = 0x16BBF4u; }
    }
    if (ctx->pc != 0x16BBF4u) { return; }
    ctx->pc = 0x16BBF4u;
label_16bbf4:
    // 0x16bbf4: 0x40902d
    ctx->pc = 0x16bbf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16bbf8:
    // 0x16bbf8: 0x5e400005
label_16bbfc:
    if (ctx->pc == 0x16BBFCu) {
        ctx->pc = 0x16BBFCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->pc = 0x16BC00u;
        goto label_16bc00;
    }
    ctx->pc = 0x16BBF8u;
    {
        const bool branch_taken_0x16bbf8 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x16bbf8) {
            ctx->pc = 0x16BBFCu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
            ctx->pc = 0x16BC10u;
            goto label_16bc10;
        }
    }
    ctx->pc = 0x16BC00u;
label_16bc00:
    // 0x16bc00: 0x8e230000
    ctx->pc = 0x16bc00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16bc04:
    // 0x16bc04: 0x8c62000c
    ctx->pc = 0x16bc04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_16bc08:
    // 0x16bc08: 0x40f809
label_16bc0c:
    if (ctx->pc == 0x16BC0Cu) {
        ctx->pc = 0x16BC0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BC10u;
        goto label_16bc10;
    }
    ctx->pc = 0x16BC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16BC10u);
        ctx->pc = 0x16BC0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BAE8u: goto label_16bae8;
            case 0x16BAECu: goto label_16baec;
            case 0x16BAF0u: goto label_16baf0;
            case 0x16BAF4u: goto label_16baf4;
            case 0x16BAF8u: goto label_16baf8;
            case 0x16BAFCu: goto label_16bafc;
            case 0x16BB00u: goto label_16bb00;
            case 0x16BB04u: goto label_16bb04;
            case 0x16BB08u: goto label_16bb08;
            case 0x16BB0Cu: goto label_16bb0c;
            case 0x16BB10u: goto label_16bb10;
            case 0x16BB14u: goto label_16bb14;
            case 0x16BB18u: goto label_16bb18;
            case 0x16BB1Cu: goto label_16bb1c;
            case 0x16BB20u: goto label_16bb20;
            case 0x16BB24u: goto label_16bb24;
            case 0x16BB28u: goto label_16bb28;
            case 0x16BB2Cu: goto label_16bb2c;
            case 0x16BB30u: goto label_16bb30;
            case 0x16BB34u: goto label_16bb34;
            case 0x16BB38u: goto label_16bb38;
            case 0x16BB3Cu: goto label_16bb3c;
            case 0x16BB40u: goto label_16bb40;
            case 0x16BB44u: goto label_16bb44;
            case 0x16BB48u: goto label_16bb48;
            case 0x16BB4Cu: goto label_16bb4c;
            case 0x16BB50u: goto label_16bb50;
            case 0x16BB54u: goto label_16bb54;
            case 0x16BB58u: goto label_16bb58;
            case 0x16BB5Cu: goto label_16bb5c;
            case 0x16BB60u: goto label_16bb60;
            case 0x16BB64u: goto label_16bb64;
            case 0x16BB68u: goto label_16bb68;
            case 0x16BB6Cu: goto label_16bb6c;
            case 0x16BB70u: goto label_16bb70;
            case 0x16BB74u: goto label_16bb74;
            case 0x16BB78u: goto label_16bb78;
            case 0x16BB7Cu: goto label_16bb7c;
            case 0x16BB80u: goto label_16bb80;
            case 0x16BB84u: goto label_16bb84;
            case 0x16BB88u: goto label_16bb88;
            case 0x16BB8Cu: goto label_16bb8c;
            case 0x16BB90u: goto label_16bb90;
            case 0x16BB94u: goto label_16bb94;
            case 0x16BB98u: goto label_16bb98;
            case 0x16BB9Cu: goto label_16bb9c;
            case 0x16BBA0u: goto label_16bba0;
            case 0x16BBA4u: goto label_16bba4;
            case 0x16BBA8u: goto label_16bba8;
            case 0x16BBACu: goto label_16bbac;
            case 0x16BBB0u: goto label_16bbb0;
            case 0x16BBB4u: goto label_16bbb4;
            case 0x16BBB8u: goto label_16bbb8;
            case 0x16BBBCu: goto label_16bbbc;
            case 0x16BBC0u: goto label_16bbc0;
            case 0x16BBC4u: goto label_16bbc4;
            case 0x16BBC8u: goto label_16bbc8;
            case 0x16BBCCu: goto label_16bbcc;
            case 0x16BBD0u: goto label_16bbd0;
            case 0x16BBD4u: goto label_16bbd4;
            case 0x16BBD8u: goto label_16bbd8;
            case 0x16BBDCu: goto label_16bbdc;
            case 0x16BBE0u: goto label_16bbe0;
            case 0x16BBE4u: goto label_16bbe4;
            case 0x16BBE8u: goto label_16bbe8;
            case 0x16BBECu: goto label_16bbec;
            case 0x16BBF0u: goto label_16bbf0;
            case 0x16BBF4u: goto label_16bbf4;
            case 0x16BBF8u: goto label_16bbf8;
            case 0x16BBFCu: goto label_16bbfc;
            case 0x16BC00u: goto label_16bc00;
            case 0x16BC04u: goto label_16bc04;
            case 0x16BC08u: goto label_16bc08;
            case 0x16BC0Cu: goto label_16bc0c;
            case 0x16BC10u: goto label_16bc10;
            case 0x16BC14u: goto label_16bc14;
            case 0x16BC18u: goto label_16bc18;
            case 0x16BC1Cu: goto label_16bc1c;
            case 0x16BC20u: goto label_16bc20;
            case 0x16BC24u: goto label_16bc24;
            case 0x16BC28u: goto label_16bc28;
            case 0x16BC2Cu: goto label_16bc2c;
            case 0x16BC30u: goto label_16bc30;
            case 0x16BC34u: goto label_16bc34;
            case 0x16BC38u: goto label_16bc38;
            case 0x16BC3Cu: goto label_16bc3c;
            case 0x16BC40u: goto label_16bc40;
            case 0x16BC44u: goto label_16bc44;
            case 0x16BC48u: goto label_16bc48;
            case 0x16BC4Cu: goto label_16bc4c;
            case 0x16BC50u: goto label_16bc50;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16BC10u; }
            if (ctx->pc != 0x16BC10u) { return; }
        }
    }
    ctx->pc = 0x16BC10u;
label_16bc10:
    // 0x16bc10: 0xc05a4f0
label_16bc14:
    if (ctx->pc == 0x16BC14u) {
        ctx->pc = 0x16BC14u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x16BC18u;
        goto label_16bc18;
    }
    ctx->pc = 0x16BC10u;
    SET_GPR_U32(ctx, 31, 0x16BC18u);
    ctx->pc = 0x16BC14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1693C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC18u; }
        else if (ctx->pc != 0x16BC18u) { ctx->pc = 0x16BC18u; }
    }
    if (ctx->pc != 0x16BC18u) { return; }
    ctx->pc = 0x16BC18u;
label_16bc18:
    // 0x16bc18: 0x200302d
    ctx->pc = 0x16bc18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16bc1c:
    // 0x16bc1c: 0x260382d
    ctx->pc = 0x16bc1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16bc20:
    // 0x16bc20: 0x280402d
    ctx->pc = 0x16bc20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16bc24:
    // 0x16bc24: 0x24040004
    ctx->pc = 0x16bc24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
label_16bc28:
    // 0x16bc28: 0xc05a94a
label_16bc2c:
    if (ctx->pc == 0x16BC2Cu) {
        ctx->pc = 0x16BC2Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16BC30u;
        goto label_16bc30;
    }
    ctx->pc = 0x16BC28u;
    SET_GPR_U32(ctx, 31, 0x16BC30u);
    ctx->pc = 0x16BC2Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16A528u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_SetCmdHstry_0x16a528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC30u; }
        else if (ctx->pc != 0x16BC30u) { ctx->pc = 0x16BC30u; }
    }
    if (ctx->pc != 0x16BC30u) { return; }
    ctx->pc = 0x16BC30u;
label_16bc30:
    // 0x16bc30: 0x240102d
    ctx->pc = 0x16bc30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16bc34:
    // 0x16bc34: 0xdfbf0050
    ctx->pc = 0x16bc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16bc38:
    // 0x16bc38: 0xdfb40040
    ctx->pc = 0x16bc38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16bc3c:
    // 0x16bc3c: 0xdfb30030
    ctx->pc = 0x16bc3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16bc40:
    // 0x16bc40: 0xdfb20020
    ctx->pc = 0x16bc40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16bc44:
    // 0x16bc44: 0xdfb10010
    ctx->pc = 0x16bc44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16bc48:
    // 0x16bc48: 0xdfb00000
    ctx->pc = 0x16bc48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16bc4c:
    // 0x16bc4c: 0x3e00008
label_16bc50:
    if (ctx->pc == 0x16BC50u) {
        ctx->pc = 0x16BC50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x16BC54u;
        goto label_fallthrough_0x16bc4c;
    }
    ctx->pc = 0x16BC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BC50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BAE8u: goto label_16bae8;
            case 0x16BAECu: goto label_16baec;
            case 0x16BAF0u: goto label_16baf0;
            case 0x16BAF4u: goto label_16baf4;
            case 0x16BAF8u: goto label_16baf8;
            case 0x16BAFCu: goto label_16bafc;
            case 0x16BB00u: goto label_16bb00;
            case 0x16BB04u: goto label_16bb04;
            case 0x16BB08u: goto label_16bb08;
            case 0x16BB0Cu: goto label_16bb0c;
            case 0x16BB10u: goto label_16bb10;
            case 0x16BB14u: goto label_16bb14;
            case 0x16BB18u: goto label_16bb18;
            case 0x16BB1Cu: goto label_16bb1c;
            case 0x16BB20u: goto label_16bb20;
            case 0x16BB24u: goto label_16bb24;
            case 0x16BB28u: goto label_16bb28;
            case 0x16BB2Cu: goto label_16bb2c;
            case 0x16BB30u: goto label_16bb30;
            case 0x16BB34u: goto label_16bb34;
            case 0x16BB38u: goto label_16bb38;
            case 0x16BB3Cu: goto label_16bb3c;
            case 0x16BB40u: goto label_16bb40;
            case 0x16BB44u: goto label_16bb44;
            case 0x16BB48u: goto label_16bb48;
            case 0x16BB4Cu: goto label_16bb4c;
            case 0x16BB50u: goto label_16bb50;
            case 0x16BB54u: goto label_16bb54;
            case 0x16BB58u: goto label_16bb58;
            case 0x16BB5Cu: goto label_16bb5c;
            case 0x16BB60u: goto label_16bb60;
            case 0x16BB64u: goto label_16bb64;
            case 0x16BB68u: goto label_16bb68;
            case 0x16BB6Cu: goto label_16bb6c;
            case 0x16BB70u: goto label_16bb70;
            case 0x16BB74u: goto label_16bb74;
            case 0x16BB78u: goto label_16bb78;
            case 0x16BB7Cu: goto label_16bb7c;
            case 0x16BB80u: goto label_16bb80;
            case 0x16BB84u: goto label_16bb84;
            case 0x16BB88u: goto label_16bb88;
            case 0x16BB8Cu: goto label_16bb8c;
            case 0x16BB90u: goto label_16bb90;
            case 0x16BB94u: goto label_16bb94;
            case 0x16BB98u: goto label_16bb98;
            case 0x16BB9Cu: goto label_16bb9c;
            case 0x16BBA0u: goto label_16bba0;
            case 0x16BBA4u: goto label_16bba4;
            case 0x16BBA8u: goto label_16bba8;
            case 0x16BBACu: goto label_16bbac;
            case 0x16BBB0u: goto label_16bbb0;
            case 0x16BBB4u: goto label_16bbb4;
            case 0x16BBB8u: goto label_16bbb8;
            case 0x16BBBCu: goto label_16bbbc;
            case 0x16BBC0u: goto label_16bbc0;
            case 0x16BBC4u: goto label_16bbc4;
            case 0x16BBC8u: goto label_16bbc8;
            case 0x16BBCCu: goto label_16bbcc;
            case 0x16BBD0u: goto label_16bbd0;
            case 0x16BBD4u: goto label_16bbd4;
            case 0x16BBD8u: goto label_16bbd8;
            case 0x16BBDCu: goto label_16bbdc;
            case 0x16BBE0u: goto label_16bbe0;
            case 0x16BBE4u: goto label_16bbe4;
            case 0x16BBE8u: goto label_16bbe8;
            case 0x16BBECu: goto label_16bbec;
            case 0x16BBF0u: goto label_16bbf0;
            case 0x16BBF4u: goto label_16bbf4;
            case 0x16BBF8u: goto label_16bbf8;
            case 0x16BBFCu: goto label_16bbfc;
            case 0x16BC00u: goto label_16bc00;
            case 0x16BC04u: goto label_16bc04;
            case 0x16BC08u: goto label_16bc08;
            case 0x16BC0Cu: goto label_16bc0c;
            case 0x16BC10u: goto label_16bc10;
            case 0x16BC14u: goto label_16bc14;
            case 0x16BC18u: goto label_16bc18;
            case 0x16BC1Cu: goto label_16bc1c;
            case 0x16BC20u: goto label_16bc20;
            case 0x16BC24u: goto label_16bc24;
            case 0x16BC28u: goto label_16bc28;
            case 0x16BC2Cu: goto label_16bc2c;
            case 0x16BC30u: goto label_16bc30;
            case 0x16BC34u: goto label_16bc34;
            case 0x16BC38u: goto label_16bc38;
            case 0x16BC3Cu: goto label_16bc3c;
            case 0x16BC40u: goto label_16bc40;
            case 0x16BC44u: goto label_16bc44;
            case 0x16BC48u: goto label_16bc48;
            case 0x16BC4Cu: goto label_16bc4c;
            case 0x16BC50u: goto label_16bc50;
            default: break;
        }
        return;
    }
label_fallthrough_0x16bc4c:
    ctx->pc = 0x16BC54u;
}
