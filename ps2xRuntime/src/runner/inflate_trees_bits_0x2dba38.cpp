#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inflate_trees_bits
// Address: 0x2dba38 - 0x2dbacc
void inflate_trees_bits_0x2dba38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dba38u;

    // 0x2dba38: 0x27bdffd0
    ctx->pc = 0x2dba38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dba3c: 0xffbf0020
    ctx->pc = 0x2dba3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dba40: 0xffb10010
    ctx->pc = 0x2dba40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2dba44: 0xffb00000
    ctx->pc = 0x2dba44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dba48: 0xa0502d
    ctx->pc = 0x2dba48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba4c: 0xc0882d
    ctx->pc = 0x2dba4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba50: 0xe0802d
    ctx->pc = 0x2dba50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba54: 0x24050013
    ctx->pc = 0x2dba54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 19));
    // 0x2dba58: 0x24060013
    ctx->pc = 0x2dba58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 19));
    // 0x2dba5c: 0x382d
    ctx->pc = 0x2dba5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba60: 0x402d
    ctx->pc = 0x2dba60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba64: 0x220482d
    ctx->pc = 0x2dba64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba68: 0xc0b6d0c
    ctx->pc = 0x2DBA68u;
    SET_GPR_U32(ctx, 31, 0x2DBA70u);
    ctx->pc = 0x2DBA6Cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DB430u;
    {
        const uint32_t __entryPc = ctx->pc;
        huft_build_0x2db430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBA70u; }
    }
    if (ctx->pc != 0x2DBA70u) { return; }
    ctx->pc = 0x2DBA70u;
    // 0x2dba70: 0x40182d
    ctx->pc = 0x2dba70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba74: 0x2402fffd
    ctx->pc = 0x2dba74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2dba78: 0x14620005
    ctx->pc = 0x2DBA78u;
    {
        const bool branch_taken_0x2dba78 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2DBA7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        if (branch_taken_0x2dba78) {
            ctx->pc = 0x2DBA90u;
            goto label_2dba90;
        }
    }
    ctx->pc = 0x2DBA80u;
    // 0x2dba80: 0x3c02003c
    ctx->pc = 0x2dba80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2dba84: 0x24428270
    ctx->pc = 0x2dba84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935152));
    // 0x2dba88: 0x1000000a
    ctx->pc = 0x2DBA88u;
    {
        const bool branch_taken_0x2dba88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DBA8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x2dba88) {
            ctx->pc = 0x2DBAB4u;
            goto label_2dbab4;
        }
    }
    ctx->pc = 0x2DBA90u;
label_2dba90:
    // 0x2dba90: 0x14620009
    ctx->pc = 0x2DBA90u;
    {
        const bool branch_taken_0x2dba90 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2DBA94u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dba90) {
            ctx->pc = 0x2DBAB8u;
            goto label_2dbab8;
        }
    }
    ctx->pc = 0x2DBA98u;
    // 0x2dba98: 0x8e240000
    ctx->pc = 0x2dba98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dba9c: 0xc0b6f98
    ctx->pc = 0x2DBA9Cu;
    SET_GPR_U32(ctx, 31, 0x2DBAA4u);
    ctx->pc = 0x2DBAA0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DBE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_trees_free_0x2dbe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBAA4u; }
    }
    if (ctx->pc != 0x2DBAA4u) { return; }
    ctx->pc = 0x2DBAA4u;
    // 0x2dbaa4: 0x3c02003c
    ctx->pc = 0x2dbaa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2dbaa8: 0x24428298
    ctx->pc = 0x2dbaa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935192));
    // 0x2dbaac: 0xae020018
    ctx->pc = 0x2dbaacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2dbab0: 0x2403fffd
    ctx->pc = 0x2dbab0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967293));
label_2dbab4:
    // 0x2dbab4: 0x60102d
    ctx->pc = 0x2dbab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2dbab8:
    // 0x2dbab8: 0xdfbf0020
    ctx->pc = 0x2dbab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dbabc: 0xdfb10010
    ctx->pc = 0x2dbabcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbac0: 0xdfb00000
    ctx->pc = 0x2dbac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbac4: 0x3e00008
    ctx->pc = 0x2DBAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBAC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DBA90u: goto label_2dba90;
            case 0x2DBAB4u: goto label_2dbab4;
            case 0x2DBAB8u: goto label_2dbab8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DBACCu;
}
