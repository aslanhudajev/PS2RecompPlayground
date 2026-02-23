#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: chgAdxStagePartitionImm__12FileMgrClassFi
// Address: 0x1e99f0 - 0x1e9aa0
void chgAdxStagePartitionImm__12FileMgrClassFi_0x1e99f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("chgAdxStagePartitionImm__12FileMgrClassFi");


    ctx->pc = 0x1e99f0u;

    // 0x1e99f0: 0x27bdffd0
    ctx->pc = 0x1e99f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e99f4: 0x7fbf0020
    ctx->pc = 0x1e99f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e99f8: 0x7fb10010
    ctx->pc = 0x1e99f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e99fc: 0x7fb00000
    ctx->pc = 0x1e99fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9a00: 0x8083010c
    ctx->pc = 0x1e9a00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x1e9a04: 0x70a08628
    ctx->pc = 0x1e9a04u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e9a08: 0x10700020
    ctx->pc = 0x1E9A08u;
    {
        const bool branch_taken_0x1e9a08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 16));
        ctx->pc = 0x1E9A0Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e9a08) {
            ctx->pc = 0x1E9A8Cu;
            goto label_1e9a8c;
        }
    }
    ctx->pc = 0x1E9A10u;
    // 0x1e9a10: 0x3c020027
    ctx->pc = 0x1e9a10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e9a14: 0x101880
    ctx->pc = 0x1e9a14u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e9a18: 0x2442bf10
    ctx->pc = 0x1e9a18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950672));
    // 0x1e9a1c: 0x431021
    ctx->pc = 0x1e9a1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e9a20: 0x8c460000
    ctx->pc = 0x1e9a20u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9a24: 0x3c020050
    ctx->pc = 0x1e9a24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e9a28: 0x24440b40
    ctx->pc = 0x1e9a28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2880));
    // 0x1e9a2c: 0x3c020027
    ctx->pc = 0x1e9a2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e9a30: 0xc07a5ac
    ctx->pc = 0x1E9A30u;
    SET_GPR_U32(ctx, 31, 0x1E9A38u);
    ctx->pc = 0x1E9A34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950480));
    ctx->pc = 0x1E96B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFileName__12FileMgrClassFPCcPCc_0x1e96b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A38u; }
        else if (ctx->pc != 0x1E9A38u) { ctx->pc = 0x1E9A38u; }
    }
    if (ctx->pc != 0x1E9A38u) { return; }
    ctx->pc = 0x1E9A38u;
    // 0x1e9a38: 0x70402e28
    ctx->pc = 0x1e9a38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e9a3c: 0x3c02004a
    ctx->pc = 0x1e9a3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x1e9a40: 0x2447d070
    ctx->pc = 0x1e9a40u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294955120));
    // 0x1e9a44: 0x70002628
    ctx->pc = 0x1e9a44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9a48: 0xc05ab34
    ctx->pc = 0x1E9A48u;
    SET_GPR_U32(ctx, 31, 0x1E9A50u);
    ctx->pc = 0x1E9A4Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16ACD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_LoadPartitionNw_0x16acd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A50u; }
        else if (ctx->pc != 0x1E9A50u) { ctx->pc = 0x1E9A50u; }
    }
    if (ctx->pc != 0x1E9A50u) { return; }
    ctx->pc = 0x1E9A50u;
    // 0x1e9a50: 0xc05abb0
    ctx->pc = 0x1E9A50u;
    SET_GPR_U32(ctx, 31, 0x1E9A58u);
    ctx->pc = 0x1E9A54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16AEC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetPtStat_0x16aec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A58u; }
        else if (ctx->pc != 0x1E9A58u) { ctx->pc = 0x1E9A58u; }
    }
    if (ctx->pc != 0x1E9A58u) { return; }
    ctx->pc = 0x1E9A58u;
    // 0x1e9a58: 0x10000006
    ctx->pc = 0x1E9A58u;
    {
        const bool branch_taken_0x1e9a58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E9A5Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e9a58) {
            ctx->pc = 0x1E9A74u;
            goto label_1e9a74;
        }
    }
    ctx->pc = 0x1E9A60u;
label_1e9a60:
    // 0x1e9a60: 0xc07a720
    ctx->pc = 0x1E9A60u;
    SET_GPR_U32(ctx, 31, 0x1E9A68u);
    ctx->pc = 0x1E9C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXPS2_UpdateStatus__Fv_0x1e9c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A68u; }
        else if (ctx->pc != 0x1E9A68u) { ctx->pc = 0x1E9A68u; }
    }
    if (ctx->pc != 0x1E9A68u) { return; }
    ctx->pc = 0x1E9A68u;
    // 0x1e9a68: 0xc05abb0
    ctx->pc = 0x1E9A68u;
    SET_GPR_U32(ctx, 31, 0x1E9A70u);
    ctx->pc = 0x1E9A6Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16AEC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetPtStat_0x16aec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A70u; }
        else if (ctx->pc != 0x1E9A70u) { ctx->pc = 0x1E9A70u; }
    }
    if (ctx->pc != 0x1E9A70u) { return; }
    ctx->pc = 0x1E9A70u;
    // 0x1e9a70: 0x24030001
    ctx->pc = 0x1e9a70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1e9a74:
    // 0x1e9a74: 0x10430004
    ctx->pc = 0x1E9A74u;
    {
        const bool branch_taken_0x1e9a74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E9A78u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1e9a74) {
            ctx->pc = 0x1E9A88u;
            goto label_1e9a88;
        }
    }
    ctx->pc = 0x1E9A7Cu;
    // 0x1e9a7c: 0x1443fff8
    ctx->pc = 0x1E9A7Cu;
    {
        const bool branch_taken_0x1e9a7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e9a7c) {
            ctx->pc = 0x1E9A60u;
            goto label_1e9a60;
        }
    }
    ctx->pc = 0x1E9A84u;
    // 0x1e9a84: 0x0
    ctx->pc = 0x1e9a84u;
    // NOP
label_1e9a88:
    // 0x1e9a88: 0xa230010c
    ctx->pc = 0x1e9a88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 268), (uint8_t)GPR_U32(ctx, 16));
label_1e9a8c:
    // 0x1e9a8c: 0x7bbf0020
    ctx->pc = 0x1e9a8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9a90: 0x7bb10010
    ctx->pc = 0x1e9a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9a94: 0x7bb00000
    ctx->pc = 0x1e9a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9a98: 0x3e00008
    ctx->pc = 0x1E9A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9A9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9A60u: goto label_1e9a60;
            case 0x1E9A74u: goto label_1e9a74;
            case 0x1E9A88u: goto label_1e9a88;
            case 0x1E9A8Cu: goto label_1e9a8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E9AA0u;
}
