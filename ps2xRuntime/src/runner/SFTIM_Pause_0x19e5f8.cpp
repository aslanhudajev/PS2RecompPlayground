#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_Pause
// Address: 0x19e5f8 - 0x19e664
void SFTIM_Pause_0x19e5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_Pause");


    ctx->pc = 0x19e5f8u;

    // 0x19e5f8: 0x27bdffc0
    ctx->pc = 0x19e5f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19e5fc: 0xffb10020
    ctx->pc = 0x19e5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19e600: 0xffb00010
    ctx->pc = 0x19e600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19e604: 0x80882d
    ctx->pc = 0x19e604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e608: 0xa0802d
    ctx->pc = 0x19e608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e60c: 0xffbf0030
    ctx->pc = 0x19e60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19e610: 0xc064f3a
    ctx->pc = 0x19E610u;
    SET_GPR_U32(ctx, 31, 0x19E618u);
    ctx->pc = 0x19E614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E618u; }
        else if (ctx->pc != 0x19E618u) { ctx->pc = 0x19E618u; }
    }
    if (ctx->pc != 0x19E618u) { return; }
    ctx->pc = 0x19E618u;
    // 0x19e618: 0x2e020002
    ctx->pc = 0x19e618u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 2));
    // 0x19e61c: 0x1440000a
    ctx->pc = 0x19E61Cu;
    {
        const bool branch_taken_0x19e61c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E620u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x19e61c) {
            ctx->pc = 0x19E648u;
            goto label_19e648;
        }
    }
    ctx->pc = 0x19E624u;
    // 0x19e624: 0x16020008
    ctx->pc = 0x19E624u;
    {
        const bool branch_taken_0x19e624 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x19E628u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19e624) {
            ctx->pc = 0x19E648u;
            goto label_19e648;
        }
    }
    ctx->pc = 0x19E62Cu;
    // 0x19e62c: 0x37a50004
    ctx->pc = 0x19e62cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 4));
    // 0x19e630: 0xc0679ac
    ctx->pc = 0x19E630u;
    SET_GPR_U32(ctx, 31, 0x19E638u);
    ctx->pc = 0x19E634u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x19E6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_GetTimeOneFrmVideo_0x19e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E638u; }
        else if (ctx->pc != 0x19E638u) { ctx->pc = 0x19E638u; }
    }
    if (ctx->pc != 0x19E638u) { return; }
    ctx->pc = 0x19E638u;
    // 0x19e638: 0x8fa50004
    ctx->pc = 0x19e638u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19e63c: 0x220202d
    ctx->pc = 0x19e63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e640: 0xc06799a
    ctx->pc = 0x19E640u;
    SET_GPR_U32(ctx, 31, 0x19E648u);
    ctx->pc = 0x19E644u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x19E668u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftim_AddHnVbIn_0x19e668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E648u; }
        else if (ctx->pc != 0x19E648u) { ctx->pc = 0x19E648u; }
    }
    if (ctx->pc != 0x19E648u) { return; }
    ctx->pc = 0x19E648u;
label_19e648:
    // 0x19e648: 0xc064f44
    ctx->pc = 0x19E648u;
    SET_GPR_U32(ctx, 31, 0x19E650u);
    ctx->pc = 0x19E64Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E650u; }
        else if (ctx->pc != 0x19E650u) { ctx->pc = 0x19E650u; }
    }
    if (ctx->pc != 0x19E650u) { return; }
    ctx->pc = 0x19E650u;
    // 0x19e650: 0xdfbf0030
    ctx->pc = 0x19e650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e654: 0xdfb10020
    ctx->pc = 0x19e654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e658: 0xdfb00010
    ctx->pc = 0x19e658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e65c: 0x3e00008
    ctx->pc = 0x19E65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E660u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E648u: goto label_19e648;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E664u;
}
