#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryStage__11MotMgrClassFv
// Address: 0x1fc890 - 0x1fc950
void entryStage__11MotMgrClassFv_0x1fc890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryStage__11MotMgrClassFv");


    ctx->pc = 0x1fc890u;

    // 0x1fc890: 0x27bdffe0
    ctx->pc = 0x1fc890u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fc894: 0x7fbf0010
    ctx->pc = 0x1fc894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fc898: 0x7fb00000
    ctx->pc = 0x1fc898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fc89c: 0x3c010050
    ctx->pc = 0x1fc89cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fc8a0: 0x8424e504
    ctx->pc = 0x1fc8a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1fc8a4: 0x24030009
    ctx->pc = 0x1fc8a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1fc8a8: 0x50830003
    ctx->pc = 0x1FC8A8u;
    {
        const bool branch_taken_0x1fc8a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1fc8a8) {
            ctx->pc = 0x1FC8ACu;
            SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
            ctx->pc = 0x1FC8B8u;
            goto label_1fc8b8;
        }
    }
    ctx->pc = 0x1FC8B0u;
    // 0x1fc8b0: 0x10000013
    ctx->pc = 0x1FC8B0u;
    {
        const bool branch_taken_0x1fc8b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FC8B4u;
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
        if (branch_taken_0x1fc8b0) {
            ctx->pc = 0x1FC900u;
            goto label_1fc900;
        }
    }
    ctx->pc = 0x1FC8B8u;
label_1fc8b8:
    // 0x1fc8b8: 0xc2839ac
    ctx->pc = 0x1FC8B8u;
    SET_GPR_U32(ctx, 31, 0x1FC8C0u);
    ctx->pc = 0x1FC8BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 720));
    ctx->pc = 0xA0E6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDemoNo__12DemoMgrClassFv_0xa0e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC8C0u; }
        else if (ctx->pc != 0x1FC8C0u) { ctx->pc = 0x1FC8C0u; }
    }
    if (ctx->pc != 0x1FC8C0u) { return; }
    ctx->pc = 0x1FC8C0u;
    // 0x1fc8c0: 0x24030002
    ctx->pc = 0x1fc8c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc8c4: 0x1043000c
    ctx->pc = 0x1FC8C4u;
    {
        const bool branch_taken_0x1fc8c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1FC8C8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        if (branch_taken_0x1fc8c4) {
            ctx->pc = 0x1FC8F8u;
            goto label_1fc8f8;
        }
    }
    ctx->pc = 0x1FC8CCu;
    // 0x1fc8cc: 0x24030001
    ctx->pc = 0x1fc8ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc8d0: 0x10430007
    ctx->pc = 0x1FC8D0u;
    {
        const bool branch_taken_0x1fc8d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1FC8D4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        if (branch_taken_0x1fc8d0) {
            ctx->pc = 0x1FC8F0u;
            goto label_1fc8f0;
        }
    }
    ctx->pc = 0x1FC8D8u;
    // 0x1fc8d8: 0x10400003
    ctx->pc = 0x1FC8D8u;
    {
        const bool branch_taken_0x1fc8d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FC8DCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        if (branch_taken_0x1fc8d8) {
            ctx->pc = 0x1FC8E8u;
            goto label_1fc8e8;
        }
    }
    ctx->pc = 0x1FC8E0u;
    // 0x1fc8e0: 0x10000014
    ctx->pc = 0x1FC8E0u;
    {
        const bool branch_taken_0x1fc8e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FC8E4u;
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x1fc8e0) {
            ctx->pc = 0x1FC934u;
            goto label_1fc934;
        }
    }
    ctx->pc = 0x1FC8E8u;
label_1fc8e8:
    // 0x1fc8e8: 0x10000011
    ctx->pc = 0x1FC8E8u;
    {
        const bool branch_taken_0x1fc8e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FC8ECu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294966608));
        if (branch_taken_0x1fc8e8) {
            ctx->pc = 0x1FC930u;
            goto label_1fc930;
        }
    }
    ctx->pc = 0x1FC8F0u;
label_1fc8f0:
    // 0x1fc8f0: 0x1000000f
    ctx->pc = 0x1FC8F0u;
    {
        const bool branch_taken_0x1fc8f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FC8F4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294966640));
        if (branch_taken_0x1fc8f0) {
            ctx->pc = 0x1FC930u;
            goto label_1fc930;
        }
    }
    ctx->pc = 0x1FC8F8u;
label_1fc8f8:
    // 0x1fc8f8: 0x1000000d
    ctx->pc = 0x1FC8F8u;
    {
        const bool branch_taken_0x1fc8f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FC8FCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294966672));
        if (branch_taken_0x1fc8f8) {
            ctx->pc = 0x1FC930u;
            goto label_1fc930;
        }
    }
    ctx->pc = 0x1FC900u;
label_1fc900:
    // 0x1fc900: 0x3c03002c
    ctx->pc = 0x1fc900u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1fc904: 0x2463fdb0
    ctx->pc = 0x1fc904u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966704));
    // 0x1fc908: 0x42080
    ctx->pc = 0x1fc908u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fc90c: 0x641821
    ctx->pc = 0x1fc90cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fc910: 0x10000007
    ctx->pc = 0x1FC910u;
    {
        const bool branch_taken_0x1fc910 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FC914u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x1fc910) {
            ctx->pc = 0x1FC930u;
            goto label_1fc930;
        }
    }
    ctx->pc = 0x1FC918u;
label_1fc918:
    // 0x1fc918: 0x86050000
    ctx->pc = 0x1fc918u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fc91c: 0x3c020051
    ctx->pc = 0x1fc91cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1fc920: 0x244437a0
    ctx->pc = 0x1fc920u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    // 0x1fc924: 0xc086558
    ctx->pc = 0x1FC924u;
    SET_GPR_U32(ctx, 31, 0x1FC92Cu);
    ctx->pc = 0x1FC928u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x219560u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankMot__13EntryDatClassFi_0x219560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC92Cu; }
        else if (ctx->pc != 0x1FC92Cu) { ctx->pc = 0x1FC92Cu; }
    }
    if (ctx->pc != 0x1FC92Cu) { return; }
    ctx->pc = 0x1FC92Cu;
    // 0x1fc92c: 0x0
    ctx->pc = 0x1fc92cu;
    // NOP
label_1fc930:
    // 0x1fc930: 0x86040000
    ctx->pc = 0x1fc930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1fc934:
    // 0x1fc934: 0x2403ffff
    ctx->pc = 0x1fc934u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fc938: 0x1483fff7
    ctx->pc = 0x1FC938u;
    {
        const bool branch_taken_0x1fc938 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1fc938) {
            ctx->pc = 0x1FC918u;
            goto label_1fc918;
        }
    }
    ctx->pc = 0x1FC940u;
    // 0x1fc940: 0x7bbf0010
    ctx->pc = 0x1fc940u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc944: 0x7bb00000
    ctx->pc = 0x1fc944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc948: 0x3e00008
    ctx->pc = 0x1FC948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC94Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FC8B8u: goto label_1fc8b8;
            case 0x1FC8E8u: goto label_1fc8e8;
            case 0x1FC8F0u: goto label_1fc8f0;
            case 0x1FC8F8u: goto label_1fc8f8;
            case 0x1FC900u: goto label_1fc900;
            case 0x1FC918u: goto label_1fc918;
            case 0x1FC930u: goto label_1fc930;
            case 0x1FC934u: goto label_1fc934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FC950u;
}
