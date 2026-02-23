#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetVideoCh
// Address: 0x19aa70 - 0x19aad0
void SFD_SetVideoCh_0x19aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetVideoCh");


    ctx->pc = 0x19aa70u;

    // 0x19aa70: 0x27bdffd0
    ctx->pc = 0x19aa70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19aa74: 0xffb00000
    ctx->pc = 0x19aa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19aa78: 0xffb10010
    ctx->pc = 0x19aa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19aa7c: 0x80802d
    ctx->pc = 0x19aa7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa80: 0xffbf0020
    ctx->pc = 0x19aa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19aa84: 0xc064f1e
    ctx->pc = 0x19AA84u;
    SET_GPR_U32(ctx, 31, 0x19AA8Cu);
    ctx->pc = 0x19AA88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AA8Cu; }
        else if (ctx->pc != 0x19AA8Cu) { ctx->pc = 0x19AA8Cu; }
    }
    if (ctx->pc != 0x19AA8Cu) { return; }
    ctx->pc = 0x19AA8Cu;
    // 0x19aa8c: 0x10400006
    ctx->pc = 0x19AA8Cu;
    {
        const bool branch_taken_0x19aa8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AA90u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19aa8c) {
            ctx->pc = 0x19AAA8u;
            goto label_19aaa8;
        }
    }
    ctx->pc = 0x19AA94u;
    // 0x19aa94: 0x3c05ff00
    ctx->pc = 0x19aa94u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19aa98: 0xc064ea0
    ctx->pc = 0x19AA98u;
    SET_GPR_U32(ctx, 31, 0x19AAA0u);
    ctx->pc = 0x19AA9Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 326));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AAA0u; }
        else if (ctx->pc != 0x19AAA0u) { ctx->pc = 0x19AAA0u; }
    }
    if (ctx->pc != 0x19AAA0u) { return; }
    ctx->pc = 0x19AAA0u;
    // 0x19aaa0: 0x10000007
    ctx->pc = 0x19AAA0u;
    {
        const bool branch_taken_0x19aaa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AAA4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19aaa0) {
            ctx->pc = 0x19AAC0u;
            goto label_19aac0;
        }
    }
    ctx->pc = 0x19AAA8u;
label_19aaa8:
    // 0x19aaa8: 0x200202d
    ctx->pc = 0x19aaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aaac: 0x220302d
    ctx->pc = 0x19aaacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aab0: 0xc067464
    ctx->pc = 0x19AAB0u;
    SET_GPR_U32(ctx, 31, 0x19AAB8u);
    ctx->pc = 0x19AAB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 29));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AAB8u; }
        else if (ctx->pc != 0x19AAB8u) { ctx->pc = 0x19AAB8u; }
    }
    if (ctx->pc != 0x19AAB8u) { return; }
    ctx->pc = 0x19AAB8u;
    // 0x19aab8: 0x102d
    ctx->pc = 0x19aab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aabc: 0xdfbf0020
    ctx->pc = 0x19aabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19aac0:
    // 0x19aac0: 0xdfb10010
    ctx->pc = 0x19aac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19aac4: 0xdfb00000
    ctx->pc = 0x19aac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aac8: 0x3e00008
    ctx->pc = 0x19AAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AACCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19AAA8u: goto label_19aaa8;
            case 0x19AAC0u: goto label_19aac0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19AAD0u;
}
