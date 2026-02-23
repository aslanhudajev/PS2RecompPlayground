#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPD_ExecHndl
// Address: 0x174080 - 0x174148
void ADXPD_ExecHndl_0x174080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPD_ExecHndl");


    ctx->pc = 0x174080u;

    // 0x174080: 0x27bdffd0
    ctx->pc = 0x174080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x174084: 0xffb10010
    ctx->pc = 0x174084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x174088: 0xffb00000
    ctx->pc = 0x174088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17408c: 0x24110001
    ctx->pc = 0x17408cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x174090: 0xffbf0020
    ctx->pc = 0x174090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x174094: 0x80802d
    ctx->pc = 0x174094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174098: 0x8e03000c
    ctx->pc = 0x174098u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17409c: 0x14710004
    ctx->pc = 0x17409Cu;
    {
        const bool branch_taken_0x17409c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 17));
        ctx->pc = 0x1740A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x17409c) {
            ctx->pc = 0x1740B0u;
            goto label_1740b0;
        }
    }
    ctx->pc = 0x1740A4u;
    // 0x1740a4: 0x24030002
    ctx->pc = 0x1740a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1740a8: 0xae02000c
    ctx->pc = 0x1740a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1740ac: 0x24020002
    ctx->pc = 0x1740acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1740b0:
    // 0x1740b0: 0x14620021
    ctx->pc = 0x1740B0u;
    {
        const bool branch_taken_0x1740b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1740B4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1740b0) {
            ctx->pc = 0x174138u;
            goto label_174138;
        }
    }
    ctx->pc = 0x1740B8u;
    // 0x1740b8: 0x8e020014
    ctx->pc = 0x1740b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1740bc: 0x14510009
    ctx->pc = 0x1740BCu;
    {
        const bool branch_taken_0x1740bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x1740C0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        if (branch_taken_0x1740bc) {
            ctx->pc = 0x1740E4u;
            goto label_1740e4;
        }
    }
    ctx->pc = 0x1740C4u;
    // 0x1740c4: 0x26070028
    ctx->pc = 0x1740c4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 40));
    // 0x1740c8: 0x8e05001c
    ctx->pc = 0x1740c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1740cc: 0x8e060020
    ctx->pc = 0x1740ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1740d0: 0x86080030
    ctx->pc = 0x1740d0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1740d4: 0xc05a674
    ctx->pc = 0x1740D4u;
    SET_GPR_U32(ctx, 31, 0x1740DCu);
    ctx->pc = 0x1740D8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    ctx->pc = 0x1699D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADX_DecodeMonoFloat_0x1699d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1740DCu; }
        else if (ctx->pc != 0x1740DCu) { ctx->pc = 0x1740DCu; }
    }
    if (ctx->pc != 0x1740DCu) { return; }
    ctx->pc = 0x1740DCu;
    // 0x1740dc: 0x10000013
    ctx->pc = 0x1740DCu;
    {
        const bool branch_taken_0x1740dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1740E0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1740dc) {
            ctx->pc = 0x17412Cu;
            goto label_17412c;
        }
    }
    ctx->pc = 0x1740E4u;
label_1740e4:
    // 0x1740e4: 0x26070028
    ctx->pc = 0x1740e4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 40));
    // 0x1740e8: 0x8e05001c
    ctx->pc = 0x1740e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1740ec: 0x2609002c
    ctx->pc = 0x1740ecu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 44));
    // 0x1740f0: 0x8e060020
    ctx->pc = 0x1740f0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1740f4: 0x8e080024
    ctx->pc = 0x1740f4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1740f8: 0x860a0030
    ctx->pc = 0x1740f8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1740fc: 0xc05a824
    ctx->pc = 0x1740FCu;
    SET_GPR_U32(ctx, 31, 0x174104u);
    ctx->pc = 0x174100u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    ctx->pc = 0x16A090u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADX_DecodeSteFloat_0x16a090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174104u; }
        else if (ctx->pc != 0x174104u) { ctx->pc = 0x174104u; }
    }
    if (ctx->pc != 0x174104u) { return; }
    ctx->pc = 0x174104u;
    // 0x174104: 0x21fc2
    ctx->pc = 0x174104u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x174108: 0xae020010
    ctx->pc = 0x174108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x17410c: 0x431821
    ctx->pc = 0x17410cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174110: 0x31843
    ctx->pc = 0x174110u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x174114: 0x31840
    ctx->pc = 0x174114u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x174118: 0x431023
    ctx->pc = 0x174118u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17411c: 0x14510004
    ctx->pc = 0x17411Cu;
    {
        const bool branch_taken_0x17411c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x174120u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x17411c) {
            ctx->pc = 0x174130u;
            goto label_174130;
        }
    }
    ctx->pc = 0x174124u;
    // 0x174124: 0xc05d01c
    ctx->pc = 0x174124u;
    SET_GPR_U32(ctx, 31, 0x17412Cu);
    ctx->pc = 0x174070u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxpd_error_0x174070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17412Cu; }
        else if (ctx->pc != 0x17412Cu) { ctx->pc = 0x17412Cu; }
    }
    if (ctx->pc != 0x17412Cu) { return; }
    ctx->pc = 0x17412Cu;
label_17412c:
    // 0x17412c: 0x24020003
    ctx->pc = 0x17412cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_174130:
    // 0x174130: 0xae02000c
    ctx->pc = 0x174130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x174134: 0xdfbf0020
    ctx->pc = 0x174134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_174138:
    // 0x174138: 0xdfb10010
    ctx->pc = 0x174138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17413c: 0xdfb00000
    ctx->pc = 0x17413cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174140: 0x3e00008
    ctx->pc = 0x174140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174144u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1740B0u: goto label_1740b0;
            case 0x1740E4u: goto label_1740e4;
            case 0x17412Cu: goto label_17412c;
            case 0x174130u: goto label_174130;
            case 0x174138u: goto label_174138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174148u;
}
