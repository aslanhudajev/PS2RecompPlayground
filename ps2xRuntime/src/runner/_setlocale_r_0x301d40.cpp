#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _setlocale_r
// Address: 0x301d40 - 0x301dc4
void _setlocale_r_0x301d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x301d40u;

    // 0x301d40: 0x27bdffb0
    ctx->pc = 0x301d40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x301d44: 0xffb20020
    ctx->pc = 0x301d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x301d48: 0xffb10010
    ctx->pc = 0x301d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x301d4c: 0xa0902d
    ctx->pc = 0x301d4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301d50: 0xffb00000
    ctx->pc = 0x301d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x301d54: 0x80882d
    ctx->pc = 0x301d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301d58: 0xffbf0040
    ctx->pc = 0x301d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x301d5c: 0xc0802d
    ctx->pc = 0x301d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301d60: 0x1200000f
    ctx->pc = 0x301D60u;
    {
        const bool branch_taken_0x301d60 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x301D64u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        if (branch_taken_0x301d60) {
            ctx->pc = 0x301DA0u;
            goto label_301da0;
        }
    }
    ctx->pc = 0x301D68u;
    // 0x301d68: 0x3c13003c
    ctx->pc = 0x301d68u;
    SET_GPR_U32(ctx, 19, ((uint32_t)60 << 16));
    // 0x301d6c: 0x200202d
    ctx->pc = 0x301d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301d70: 0xc0bf270
    ctx->pc = 0x301D70u;
    SET_GPR_U32(ctx, 31, 0x301D78u);
    ctx->pc = 0x301D74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294945800));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301D78u; }
    }
    if (ctx->pc != 0x301D78u) { return; }
    ctx->pc = 0x301D78u;
    // 0x301d78: 0x10400006
    ctx->pc = 0x301D78u;
    {
        const bool branch_taken_0x301d78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x301D7Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
        if (branch_taken_0x301d78) {
            ctx->pc = 0x301D94u;
            goto label_301d94;
        }
    }
    ctx->pc = 0x301D80u;
    // 0x301d80: 0x200202d
    ctx->pc = 0x301d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301d84: 0xc0bf270
    ctx->pc = 0x301D84u;
    SET_GPR_U32(ctx, 31, 0x301D8Cu);
    ctx->pc = 0x301D88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294945784));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301D8Cu; }
    }
    if (ctx->pc != 0x301D8Cu) { return; }
    ctx->pc = 0x301D8Cu;
    // 0x301d8c: 0x14400006
    ctx->pc = 0x301D8Cu;
    {
        const bool branch_taken_0x301d8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x301D90u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x301d8c) {
            ctx->pc = 0x301DA8u;
            goto label_301da8;
        }
    }
    ctx->pc = 0x301D94u;
label_301d94:
    // 0x301d94: 0xae300034
    ctx->pc = 0x301d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x301d98: 0x10000002
    ctx->pc = 0x301D98u;
    {
        const bool branch_taken_0x301d98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x301D9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        if (branch_taken_0x301d98) {
            ctx->pc = 0x301DA4u;
            goto label_301da4;
        }
    }
    ctx->pc = 0x301DA0u;
label_301da0:
    // 0x301da0: 0x3c13003c
    ctx->pc = 0x301da0u;
    SET_GPR_U32(ctx, 19, ((uint32_t)60 << 16));
label_301da4:
    // 0x301da4: 0x2662ac08
    ctx->pc = 0x301da4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294945800));
label_301da8:
    // 0x301da8: 0xdfbf0040
    ctx->pc = 0x301da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x301dac: 0xdfb30030
    ctx->pc = 0x301dacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x301db0: 0xdfb20020
    ctx->pc = 0x301db0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x301db4: 0xdfb10010
    ctx->pc = 0x301db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x301db8: 0xdfb00000
    ctx->pc = 0x301db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301dbc: 0x3e00008
    ctx->pc = 0x301DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301DC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x301D94u: goto label_301d94;
            case 0x301DA0u: goto label_301da0;
            case 0x301DA4u: goto label_301da4;
            case 0x301DA8u: goto label_301da8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x301DC4u;
}
