#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNewNode
// Address: 0x2cfb00 - 0x2cfb88
void MBNewNode_0x2cfb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cfb00u;

    // 0x2cfb00: 0x27bdffb0
    ctx->pc = 0x2cfb00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cfb04: 0xffbf0040
    ctx->pc = 0x2cfb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cfb08: 0xffb30030
    ctx->pc = 0x2cfb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2cfb0c: 0xffb20020
    ctx->pc = 0x2cfb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cfb10: 0xffb10010
    ctx->pc = 0x2cfb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cfb14: 0xffb00000
    ctx->pc = 0x2cfb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cfb18: 0x80982d
    ctx->pc = 0x2cfb18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb1c: 0xa0902d
    ctx->pc = 0x2cfb1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb20: 0x16400003
    ctx->pc = 0x2CFB20u;
    {
        const bool branch_taken_0x2cfb20 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CFB24u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cfb20) {
            ctx->pc = 0x2CFB30u;
            goto label_2cfb30;
        }
    }
    ctx->pc = 0x2CFB28u;
    // 0x2cfb28: 0x3c02003a
    ctx->pc = 0x2cfb28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cfb2c: 0x24522550
    ctx->pc = 0x2cfb2cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 9552));
label_2cfb30:
    // 0x2cfb30: 0x24020001
    ctx->pc = 0x2cfb30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfb34: 0xc0b3e7e
    ctx->pc = 0x2CFB34u;
    SET_GPR_U32(ctx, 31, 0x2CFB3Cu);
    ctx->pc = 0x2CFB38u;
    if (GPR_U32(ctx, 17) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
    ctx->pc = 0x2CF9F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBCreateNode_0x2cf9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFB3Cu; }
    }
    if (ctx->pc != 0x2CFB3Cu) { return; }
    ctx->pc = 0x2CFB3Cu;
    // 0x2cfb3c: 0x40802d
    ctx->pc = 0x2cfb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb40: 0x12000009
    ctx->pc = 0x2CFB40u;
    {
        const bool branch_taken_0x2cfb40 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFB44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cfb40) {
            ctx->pc = 0x2CFB68u;
            goto label_2cfb68;
        }
    }
    ctx->pc = 0x2CFB48u;
    // 0x2cfb48: 0xc0b3e9e
    ctx->pc = 0x2CFB48u;
    SET_GPR_U32(ctx, 31, 0x2CFB50u);
    ctx->pc = 0x2CFB4Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFA78u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeInit_0x2cfa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFB50u; }
    }
    if (ctx->pc != 0x2CFB50u) { return; }
    ctx->pc = 0x2CFB50u;
    // 0x2cfb50: 0x240202d
    ctx->pc = 0x2cfb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb54: 0xc0b5494
    ctx->pc = 0x2CFB54u;
    SET_GPR_U32(ctx, 31, 0x2CFB5Cu);
    ctx->pc = 0x2CFB58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFB5Cu; }
    }
    if (ctx->pc != 0x2CFB5Cu) { return; }
    ctx->pc = 0x2CFB5Cu;
    // 0x2cfb5c: 0x200202d
    ctx->pc = 0x2cfb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb60: 0xc0b3e64
    ctx->pc = 0x2CFB60u;
    SET_GPR_U32(ctx, 31, 0x2CFB68u);
    ctx->pc = 0x2CFB64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CF990u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeInsert_0x2cf990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFB68u; }
    }
    if (ctx->pc != 0x2CFB68u) { return; }
    ctx->pc = 0x2CFB68u;
label_2cfb68:
    // 0x2cfb68: 0x200102d
    ctx->pc = 0x2cfb68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb6c: 0xdfbf0040
    ctx->pc = 0x2cfb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cfb70: 0xdfb30030
    ctx->pc = 0x2cfb70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cfb74: 0xdfb20020
    ctx->pc = 0x2cfb74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfb78: 0xdfb10010
    ctx->pc = 0x2cfb78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfb7c: 0xdfb00000
    ctx->pc = 0x2cfb7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfb80: 0x3e00008
    ctx->pc = 0x2CFB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFB84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CFB30u: goto label_2cfb30;
            case 0x2CFB68u: goto label_2cfb68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CFB88u;
}
