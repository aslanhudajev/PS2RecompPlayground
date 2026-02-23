#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _lf_version
// Address: 0x15ba60 - 0x15baec
void _lf_version_0x15ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_lf_version");


    ctx->pc = 0x15ba60u;

    // 0x15ba60: 0x27bdffb0
    ctx->pc = 0x15ba60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15ba64: 0x3c020023
    ctx->pc = 0x15ba64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15ba68: 0xffb30030
    ctx->pc = 0x15ba68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x15ba6c: 0x3c03002e
    ctx->pc = 0x15ba6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
    // 0x15ba70: 0xffb10010
    ctx->pc = 0x15ba70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x15ba74: 0x2453986c
    ctx->pc = 0x15ba74u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294940780));
    // 0x15ba78: 0xffb20020
    ctx->pc = 0x15ba78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15ba7c: 0x2471aaa8
    ctx->pc = 0x15ba7cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294945448));
    // 0x15ba80: 0xffbf0040
    ctx->pc = 0x15ba80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15ba84: 0x902d
    ctx->pc = 0x15ba84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ba88: 0xffb00000
    ctx->pc = 0x15ba88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15ba8c: 0x220202d
    ctx->pc = 0x15ba8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ba90: 0x260282d
    ctx->pc = 0x15ba90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ba94: 0xc050c6a
    ctx->pc = 0x15BA94u;
    SET_GPR_U32(ctx, 31, 0x15BA9Cu);
    ctx->pc = 0x15BA98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA9Cu; }
        else if (ctx->pc != 0x15BA9Cu) { ctx->pc = 0x15BA9Cu; }
    }
    if (ctx->pc != 0x15BA9Cu) { return; }
    ctx->pc = 0x15BA9Cu;
    // 0x15ba9c: 0x1040000b
    ctx->pc = 0x15BA9Cu;
    {
        const bool branch_taken_0x15ba9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15BAA0u;
        SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
        if (branch_taken_0x15ba9c) {
            ctx->pc = 0x15BACCu;
            goto label_15bacc;
        }
    }
    ctx->pc = 0x15BAA4u;
    // 0x15baa4: 0x220202d
    ctx->pc = 0x15baa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15baa8: 0x8e05a0e4
    ctx->pc = 0x15baa8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294942948)));
    // 0x15baac: 0xc050c6a
    ctx->pc = 0x15BAACu;
    SET_GPR_U32(ctx, 31, 0x15BAB4u);
    ctx->pc = 0x15BAB0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BAB4u; }
        else if (ctx->pc != 0x15BAB4u) { ctx->pc = 0x15BAB4u; }
    }
    if (ctx->pc != 0x15BAB4u) { return; }
    ctx->pc = 0x15BAB4u;
    // 0x15bab4: 0x10400005
    ctx->pc = 0x15BAB4u;
    {
        const bool branch_taken_0x15bab4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15BAB8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294942948)));
        if (branch_taken_0x15bab4) {
            ctx->pc = 0x15BACCu;
            goto label_15bacc;
        }
    }
    ctx->pc = 0x15BABCu;
    // 0x15babc: 0x260202d
    ctx->pc = 0x15babcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bac0: 0xc050c6a
    ctx->pc = 0x15BAC0u;
    SET_GPR_U32(ctx, 31, 0x15BAC8u);
    ctx->pc = 0x15BAC4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BAC8u; }
        else if (ctx->pc != 0x15BAC8u) { ctx->pc = 0x15BAC8u; }
    }
    if (ctx->pc != 0x15BAC8u) { return; }
    ctx->pc = 0x15BAC8u;
    // 0x15bac8: 0x2902b
    ctx->pc = 0x15bac8u;
    SET_GPR_U32(ctx, 18, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_15bacc:
    // 0x15bacc: 0x240102d
    ctx->pc = 0x15baccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bad0: 0xdfbf0040
    ctx->pc = 0x15bad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15bad4: 0xdfb30030
    ctx->pc = 0x15bad4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15bad8: 0xdfb20020
    ctx->pc = 0x15bad8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15badc: 0xdfb10010
    ctx->pc = 0x15badcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bae0: 0xdfb00000
    ctx->pc = 0x15bae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bae4: 0x3e00008
    ctx->pc = 0x15BAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BAE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15BACCu: goto label_15bacc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15BAECu;
}
