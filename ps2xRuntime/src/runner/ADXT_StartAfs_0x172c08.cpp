#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_StartAfs
// Address: 0x172c08 - 0x172ce8
void ADXT_StartAfs_0x172c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_StartAfs");


    ctx->pc = 0x172c08u;

    // 0x172c08: 0x27bdff90
    ctx->pc = 0x172c08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x172c0c: 0x8f828260
    ctx->pc = 0x172c0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x172c10: 0xffb00020
    ctx->pc = 0x172c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x172c14: 0xffb30050
    ctx->pc = 0x172c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x172c18: 0x80802d
    ctx->pc = 0x172c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c1c: 0xffb20040
    ctx->pc = 0x172c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x172c20: 0xc0982d
    ctx->pc = 0x172c20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c24: 0xffb10030
    ctx->pc = 0x172c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x172c28: 0xffbf0060
    ctx->pc = 0x172c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x172c2c: 0xc05c73a
    ctx->pc = 0x172C2Cu;
    SET_GPR_U32(ctx, 31, 0x172C34u);
    ctx->pc = 0x172C30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Stop_0x171ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C34u; }
        else if (ctx->pc != 0x172C34u) { ctx->pc = 0x172C34u; }
    }
    if (ctx->pc != 0x172C34u) { return; }
    ctx->pc = 0x172C34u;
    // 0x172c34: 0xc05a4e4
    ctx->pc = 0x172C34u;
    SET_GPR_U32(ctx, 31, 0x172C3Cu);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C3Cu; }
        else if (ctx->pc != 0x172C3Cu) { ctx->pc = 0x172C3Cu; }
    }
    if (ctx->pc != 0x172C3Cu) { return; }
    ctx->pc = 0x172C3Cu;
    // 0x172c3c: 0x3c02002e
    ctx->pc = 0x172c3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x172c40: 0x240202d
    ctx->pc = 0x172c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c44: 0x2451f0a8
    ctx->pc = 0x172c44u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294963368));
    // 0x172c48: 0x260282d
    ctx->pc = 0x172c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c4c: 0x220302d
    ctx->pc = 0x172c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c50: 0x27a70010
    ctx->pc = 0x172c50u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x172c54: 0x27a80014
    ctx->pc = 0x172c54u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 20));
    // 0x172c58: 0xc05b0a2
    ctx->pc = 0x172C58u;
    SET_GPR_U32(ctx, 31, 0x172C60u);
    ctx->pc = 0x172C5Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 24));
    ctx->pc = 0x16C288u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetFnameRangeEx_0x16c288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C60u; }
        else if (ctx->pc != 0x172C60u) { ctx->pc = 0x172C60u; }
    }
    if (ctx->pc != 0x172C60u) { return; }
    ctx->pc = 0x172C60u;
    // 0x172c60: 0x14400018
    ctx->pc = 0x172C60u;
    {
        const bool branch_taken_0x172c60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x172C64u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x172c60) {
            ctx->pc = 0x172CC4u;
            goto label_172cc4;
        }
    }
    ctx->pc = 0x172C68u;
    // 0x172c68: 0x220202d
    ctx->pc = 0x172c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c6c: 0x8fa60014
    ctx->pc = 0x172c6cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x172c70: 0x8fa70018
    ctx->pc = 0x172c70u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x172c74: 0xc05c242
    ctx->pc = 0x172C74u;
    SET_GPR_U32(ctx, 31, 0x172C7Cu);
    ctx->pc = 0x172C78u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x170908u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_OpenFileRangeExRt_0x170908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C7Cu; }
        else if (ctx->pc != 0x172C7Cu) { ctx->pc = 0x172C7Cu; }
    }
    if (ctx->pc != 0x172C7Cu) { return; }
    ctx->pc = 0x172C7Cu;
    // 0x172c7c: 0x1440000e
    ctx->pc = 0x172C7Cu;
    {
        const bool branch_taken_0x172c7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x172C80u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x172c7c) {
            ctx->pc = 0x172CB8u;
            goto label_172cb8;
        }
    }
    ctx->pc = 0x172C84u;
    // 0x172c84: 0xc05a4f0
    ctx->pc = 0x172C84u;
    SET_GPR_U32(ctx, 31, 0x172C8Cu);
    ctx->pc = 0x1693C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C8Cu; }
        else if (ctx->pc != 0x172C8Cu) { ctx->pc = 0x172C8Cu; }
    }
    if (ctx->pc != 0x172C8Cu) { return; }
    ctx->pc = 0x172C8Cu;
    // 0x172c8c: 0x240202d
    ctx->pc = 0x172c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c90: 0x260282d
    ctx->pc = 0x172c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c94: 0x3a0302d
    ctx->pc = 0x172c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c98: 0xc05a8c0
    ctx->pc = 0x172C98u;
    SET_GPR_U32(ctx, 31, 0x172CA0u);
    ctx->pc = 0x172C9Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x16A300u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_ItoA2_0x16a300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CA0u; }
        else if (ctx->pc != 0x172CA0u) { ctx->pc = 0x172CA0u; }
    }
    if (ctx->pc != 0x172CA0u) { return; }
    ctx->pc = 0x172CA0u;
    // 0x172ca0: 0x3c04002c
    ctx->pc = 0x172ca0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x172ca4: 0x3a0282d
    ctx->pc = 0x172ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ca8: 0xc05a868
    ctx->pc = 0x172CA8u;
    SET_GPR_U32(ctx, 31, 0x172CB0u);
    ctx->pc = 0x172CACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943424));
    ctx->pc = 0x16A1A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc2_0x16a1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CB0u; }
        else if (ctx->pc != 0x172CB0u) { ctx->pc = 0x172CB0u; }
    }
    if (ctx->pc != 0x172CB0u) { return; }
    ctx->pc = 0x172CB0u;
    // 0x172cb0: 0x10000007
    ctx->pc = 0x172CB0u;
    {
        const bool branch_taken_0x172cb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172CB4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x172cb0) {
            ctx->pc = 0x172CD0u;
            goto label_172cd0;
        }
    }
    ctx->pc = 0x172CB8u;
label_172cb8:
    // 0x172cb8: 0xc05c692
    ctx->pc = 0x172CB8u;
    SET_GPR_U32(ctx, 31, 0x172CC0u);
    ctx->pc = 0x172CBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxt_start_stm_0x171a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CC0u; }
        else if (ctx->pc != 0x172CC0u) { ctx->pc = 0x172CC0u; }
    }
    if (ctx->pc != 0x172CC0u) { return; }
    ctx->pc = 0x172CC0u;
    // 0x172cc0: 0xa2000098
    ctx->pc = 0x172cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 0));
label_172cc4:
    // 0x172cc4: 0xc05a4f0
    ctx->pc = 0x172CC4u;
    SET_GPR_U32(ctx, 31, 0x172CCCu);
    ctx->pc = 0x1693C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CCCu; }
        else if (ctx->pc != 0x172CCCu) { ctx->pc = 0x172CCCu; }
    }
    if (ctx->pc != 0x172CCCu) { return; }
    ctx->pc = 0x172CCCu;
    // 0x172ccc: 0xdfbf0060
    ctx->pc = 0x172cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_172cd0:
    // 0x172cd0: 0xdfb30050
    ctx->pc = 0x172cd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172cd4: 0xdfb20040
    ctx->pc = 0x172cd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172cd8: 0xdfb10030
    ctx->pc = 0x172cd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172cdc: 0xdfb00020
    ctx->pc = 0x172cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172ce0: 0x3e00008
    ctx->pc = 0x172CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172CE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172CB8u: goto label_172cb8;
            case 0x172CC4u: goto label_172cc4;
            case 0x172CD0u: goto label_172cd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172CE8u;
}
