#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_ExecServerSub
// Address: 0x195a50 - 0x195ac4
void sfmpv_ExecServerSub_0x195a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_ExecServerSub");


    ctx->pc = 0x195a50u;

    // 0x195a50: 0x27bdffd0
    ctx->pc = 0x195a50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195a54: 0x24050005
    ctx->pc = 0x195a54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x195a58: 0xffb10010
    ctx->pc = 0x195a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x195a5c: 0x80882d
    ctx->pc = 0x195a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a60: 0xffbf0020
    ctx->pc = 0x195a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x195a64: 0xc0674c2
    ctx->pc = 0x195A64u;
    SET_GPR_U32(ctx, 31, 0x195A6Cu);
    ctx->pc = 0x195A68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A6Cu; }
        else if (ctx->pc != 0x195A6Cu) { ctx->pc = 0x195A6Cu; }
    }
    if (ctx->pc != 0x195A6Cu) { return; }
    ctx->pc = 0x195A6Cu;
    // 0x195a6c: 0x10400010
    ctx->pc = 0x195A6Cu;
    {
        const bool branch_taken_0x195a6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x195A70u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195a6c) {
            ctx->pc = 0x195AB0u;
            goto label_195ab0;
        }
    }
    ctx->pc = 0x195A74u;
    // 0x195a74: 0xc0656d4
    ctx->pc = 0x195A74u;
    SET_GPR_U32(ctx, 31, 0x195A7Cu);
    ctx->pc = 0x195A78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195B50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_GetTermDst_0x195b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A7Cu; }
        else if (ctx->pc != 0x195A7Cu) { ctx->pc = 0x195A7Cu; }
    }
    if (ctx->pc != 0x195A7Cu) { return; }
    ctx->pc = 0x195A7Cu;
    // 0x195a7c: 0x24030001
    ctx->pc = 0x195a7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x195a80: 0x1043000b
    ctx->pc = 0x195A80u;
    {
        const bool branch_taken_0x195a80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x195A84u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195a80) {
            ctx->pc = 0x195AB0u;
            goto label_195ab0;
        }
    }
    ctx->pc = 0x195A88u;
    // 0x195a88: 0xc0656b2
    ctx->pc = 0x195A88u;
    SET_GPR_U32(ctx, 31, 0x195A90u);
    ctx->pc = 0x195A8Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_SetCondY16_0x195ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A90u; }
        else if (ctx->pc != 0x195A90u) { ctx->pc = 0x195A90u; }
    }
    if (ctx->pc != 0x195A90u) { return; }
    ctx->pc = 0x195A90u;
    // 0x195a90: 0xc06576c
    ctx->pc = 0x195A90u;
    SET_GPR_U32(ctx, 31, 0x195A98u);
    ctx->pc = 0x195A94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_DecodeSomePic_0x195db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A98u; }
        else if (ctx->pc != 0x195A98u) { ctx->pc = 0x195A98u; }
    }
    if (ctx->pc != 0x195A98u) { return; }
    ctx->pc = 0x195A98u;
    // 0x195a98: 0x40802d
    ctx->pc = 0x195a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a9c: 0xc0656dc
    ctx->pc = 0x195A9Cu;
    SET_GPR_U32(ctx, 31, 0x195AA4u);
    ctx->pc = 0x195AA0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195B70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_ChkPrepFlg_0x195b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195AA4u; }
        else if (ctx->pc != 0x195AA4u) { ctx->pc = 0x195AA4u; }
    }
    if (ctx->pc != 0x195AA4u) { return; }
    ctx->pc = 0x195AA4u;
    // 0x195aa4: 0xc065750
    ctx->pc = 0x195AA4u;
    SET_GPR_U32(ctx, 31, 0x195AACu);
    ctx->pc = 0x195AA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_ChkTermFlg_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195AACu; }
        else if (ctx->pc != 0x195AACu) { ctx->pc = 0x195AACu; }
    }
    if (ctx->pc != 0x195AACu) { return; }
    ctx->pc = 0x195AACu;
    // 0x195aac: 0x200102d
    ctx->pc = 0x195aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195ab0:
    // 0x195ab0: 0xdfbf0020
    ctx->pc = 0x195ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195ab4: 0xdfb10010
    ctx->pc = 0x195ab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195ab8: 0xdfb00000
    ctx->pc = 0x195ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195abc: 0x3e00008
    ctx->pc = 0x195ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195AC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195AB0u: goto label_195ab0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195AC4u;
}
