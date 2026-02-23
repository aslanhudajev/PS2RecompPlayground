#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetVideoPts
// Address: 0x19bf58 - 0x19bfd4
void SFD_SetVideoPts_0x19bf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetVideoPts");


    ctx->pc = 0x19bf58u;

    // 0x19bf58: 0x27bdffc0
    ctx->pc = 0x19bf58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19bf5c: 0xffb20020
    ctx->pc = 0x19bf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19bf60: 0xffb10010
    ctx->pc = 0x19bf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19bf64: 0xc0902d
    ctx->pc = 0x19bf64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf68: 0xffb00000
    ctx->pc = 0x19bf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19bf6c: 0xa0882d
    ctx->pc = 0x19bf6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf70: 0xffbf0030
    ctx->pc = 0x19bf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19bf74: 0x12200010
    ctx->pc = 0x19BF74u;
    {
        const bool branch_taken_0x19bf74 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BF78u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19bf74) {
            ctx->pc = 0x19BFB8u;
            goto label_19bfb8;
        }
    }
    ctx->pc = 0x19BF7Cu;
    // 0x19bf7c: 0x1a40000f
    ctx->pc = 0x19BF7Cu;
    {
        const bool branch_taken_0x19bf7c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x19BF80u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19bf7c) {
            ctx->pc = 0x19BFBCu;
            goto label_19bfbc;
        }
    }
    ctx->pc = 0x19BF84u;
    // 0x19bf84: 0xc064f1e
    ctx->pc = 0x19BF84u;
    SET_GPR_U32(ctx, 31, 0x19BF8Cu);
    ctx->pc = 0x19BF88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BF8Cu; }
        else if (ctx->pc != 0x19BF8Cu) { ctx->pc = 0x19BF8Cu; }
    }
    if (ctx->pc != 0x19BF8Cu) { return; }
    ctx->pc = 0x19BF8Cu;
    // 0x19bf8c: 0x10400006
    ctx->pc = 0x19BF8Cu;
    {
        const bool branch_taken_0x19bf8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BF90u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19bf8c) {
            ctx->pc = 0x19BFA8u;
            goto label_19bfa8;
        }
    }
    ctx->pc = 0x19BF94u;
    // 0x19bf94: 0x3c05ff00
    ctx->pc = 0x19bf94u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19bf98: 0xc064ea0
    ctx->pc = 0x19BF98u;
    SET_GPR_U32(ctx, 31, 0x19BFA0u);
    ctx->pc = 0x19BF9Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 357));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFA0u; }
        else if (ctx->pc != 0x19BFA0u) { ctx->pc = 0x19BFA0u; }
    }
    if (ctx->pc != 0x19BFA0u) { return; }
    ctx->pc = 0x19BFA0u;
    // 0x19bfa0: 0x10000007
    ctx->pc = 0x19BFA0u;
    {
        const bool branch_taken_0x19bfa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BFA4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19bfa0) {
            ctx->pc = 0x19BFC0u;
            goto label_19bfc0;
        }
    }
    ctx->pc = 0x19BFA8u;
label_19bfa8:
    // 0x19bfa8: 0x260410fc
    ctx->pc = 0x19bfa8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4348));
    // 0x19bfac: 0x220282d
    ctx->pc = 0x19bfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bfb0: 0xc066ff6
    ctx->pc = 0x19BFB0u;
    SET_GPR_U32(ctx, 31, 0x19BFB8u);
    ctx->pc = 0x19BFB4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19BFD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfpts_SetupPtsQue_0x19bfd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFB8u; }
        else if (ctx->pc != 0x19BFB8u) { ctx->pc = 0x19BFB8u; }
    }
    if (ctx->pc != 0x19BFB8u) { return; }
    ctx->pc = 0x19BFB8u;
label_19bfb8:
    // 0x19bfb8: 0x102d
    ctx->pc = 0x19bfb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19bfbc:
    // 0x19bfbc: 0xdfbf0030
    ctx->pc = 0x19bfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19bfc0:
    // 0x19bfc0: 0xdfb20020
    ctx->pc = 0x19bfc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19bfc4: 0xdfb10010
    ctx->pc = 0x19bfc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bfc8: 0xdfb00000
    ctx->pc = 0x19bfc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bfcc: 0x3e00008
    ctx->pc = 0x19BFCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BFD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BFA8u: goto label_19bfa8;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19BFBCu: goto label_19bfbc;
            case 0x19BFC0u: goto label_19bfc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BFD4u;
}
