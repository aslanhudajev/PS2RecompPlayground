#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_Close
// Address: 0x16b830 - 0x16b8dc
void ADXF_Close_0x16b830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_Close");


    ctx->pc = 0x16b830u;

    // 0x16b830: 0x27bdffe0
    ctx->pc = 0x16b830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b834: 0x282d
    ctx->pc = 0x16b834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b838: 0xffb00000
    ctx->pc = 0x16b838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b83c: 0x2407ffff
    ctx->pc = 0x16b83cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b840: 0x80802d
    ctx->pc = 0x16b840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b844: 0xffbf0010
    ctx->pc = 0x16b844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16b848: 0x24040003
    ctx->pc = 0x16b848u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b84c: 0x200302d
    ctx->pc = 0x16b84cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b850: 0xc05a94a
    ctx->pc = 0x16B850u;
    SET_GPR_U32(ctx, 31, 0x16B858u);
    ctx->pc = 0x16B854u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x16A528u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_SetCmdHstry_0x16a528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B858u; }
        else if (ctx->pc != 0x16B858u) { ctx->pc = 0x16B858u; }
    }
    if (ctx->pc != 0x16B858u) { return; }
    ctx->pc = 0x16B858u;
    // 0x16b858: 0x1200001d
    ctx->pc = 0x16B858u;
    {
        const bool branch_taken_0x16b858 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B85Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x16b858) {
            ctx->pc = 0x16B8D0u;
            goto label_16b8d0;
        }
    }
    ctx->pc = 0x16B860u;
    // 0x16b860: 0xc05a4e4
    ctx->pc = 0x16B860u;
    SET_GPR_U32(ctx, 31, 0x16B868u);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B868u; }
        else if (ctx->pc != 0x16B868u) { ctx->pc = 0x16B868u; }
    }
    if (ctx->pc != 0x16B868u) { return; }
    ctx->pc = 0x16B868u;
    // 0x16b868: 0x82030001
    ctx->pc = 0x16b868u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x16b86c: 0x24020002
    ctx->pc = 0x16b86cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b870: 0x54620004
    ctx->pc = 0x16B870u;
    {
        const bool branch_taken_0x16b870 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x16b870) {
            ctx->pc = 0x16B874u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x16B884u;
            goto label_16b884;
        }
    }
    ctx->pc = 0x16B878u;
    // 0x16b878: 0xc05af24
    ctx->pc = 0x16B878u;
    SET_GPR_U32(ctx, 31, 0x16B880u);
    ctx->pc = 0x16B87Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16BC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Stop_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B880u; }
        else if (ctx->pc != 0x16B880u) { ctx->pc = 0x16B880u; }
    }
    if (ctx->pc != 0x16B880u) { return; }
    ctx->pc = 0x16B880u;
    // 0x16b880: 0x8e040004
    ctx->pc = 0x16b880u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_16b884:
    // 0x16b884: 0x50800004
    ctx->pc = 0x16B884u;
    {
        const bool branch_taken_0x16b884 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x16b884) {
            ctx->pc = 0x16B888u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x16B898u;
            goto label_16b898;
        }
    }
    ctx->pc = 0x16B88Cu;
    // 0x16b88c: 0xc05c2ca
    ctx->pc = 0x16B88Cu;
    SET_GPR_U32(ctx, 31, 0x16B894u);
    ctx->pc = 0x170B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Close_0x170b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B894u; }
        else if (ctx->pc != 0x16B894u) { ctx->pc = 0x16B894u; }
    }
    if (ctx->pc != 0x16B894u) { return; }
    ctx->pc = 0x16B894u;
    // 0x16b894: 0x200202d
    ctx->pc = 0x16b894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16b898:
    // 0x16b898: 0x282d
    ctx->pc = 0x16b898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b89c: 0xc050cfe
    ctx->pc = 0x16B89Cu;
    SET_GPR_U32(ctx, 31, 0x16B8A4u);
    ctx->pc = 0x16B8A0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 312));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8A4u; }
        else if (ctx->pc != 0x16B8A4u) { ctx->pc = 0x16B8A4u; }
    }
    if (ctx->pc != 0x16B8A4u) { return; }
    ctx->pc = 0x16B8A4u;
    // 0x16b8a4: 0xc05a4f0
    ctx->pc = 0x16B8A4u;
    SET_GPR_U32(ctx, 31, 0x16B8ACu);
    ctx->pc = 0x1693C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8ACu; }
        else if (ctx->pc != 0x16B8ACu) { ctx->pc = 0x16B8ACu; }
    }
    if (ctx->pc != 0x16B8ACu) { return; }
    ctx->pc = 0x16B8ACu;
    // 0x16b8ac: 0x200302d
    ctx->pc = 0x16b8acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b8b0: 0xdfbf0010
    ctx->pc = 0x16b8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b8b4: 0xdfb00000
    ctx->pc = 0x16b8b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b8b8: 0x24040003
    ctx->pc = 0x16b8b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b8bc: 0x24050001
    ctx->pc = 0x16b8bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b8c0: 0x2407ffff
    ctx->pc = 0x16b8c0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b8c4: 0x2408ffff
    ctx->pc = 0x16b8c4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b8c8: 0x805a94a
    ctx->pc = 0x16B8C8u;
    ctx->pc = 0x16B8CCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x16A528u;
    adxf_SetCmdHstry_0x16a528(rdram, ctx, runtime); return;
    ctx->pc = 0x16B8D0u;
label_16b8d0:
    // 0x16b8d0: 0xdfb00000
    ctx->pc = 0x16b8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b8d4: 0x3e00008
    ctx->pc = 0x16B8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B8D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B884u: goto label_16b884;
            case 0x16B898u: goto label_16b898;
            case 0x16B8D0u: goto label_16b8d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B8DCu;
}
