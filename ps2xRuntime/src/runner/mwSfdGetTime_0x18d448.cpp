#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdGetTime
// Address: 0x18d448 - 0x18d4b8
void mwSfdGetTime_0x18d448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdGetTime");


    ctx->pc = 0x18d448u;

    // 0x18d448: 0x27bdffd0
    ctx->pc = 0x18d448u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18d44c: 0xffb10010
    ctx->pc = 0x18d44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18d450: 0xffb00000
    ctx->pc = 0x18d450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18d454: 0xc0882d
    ctx->pc = 0x18d454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d458: 0xffbf0020
    ctx->pc = 0x18d458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18d45c: 0xa0802d
    ctx->pc = 0x18d45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d460: 0xc067768
    ctx->pc = 0x18D460u;
    SET_GPR_U32(ctx, 31, 0x18D468u);
    ctx->pc = 0x18D464u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->pc = 0x19DDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_GetTime_0x19dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D468u; }
        else if (ctx->pc != 0x18D468u) { ctx->pc = 0x18D468u; }
    }
    if (ctx->pc != 0x18D468u) { return; }
    ctx->pc = 0x18D468u;
    // 0x18d468: 0x5040000a
    ctx->pc = 0x18D468u;
    {
        const bool branch_taken_0x18d468 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18d468) {
            ctx->pc = 0x18D46Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x18D494u;
            goto label_18d494;
        }
    }
    ctx->pc = 0x18D470u;
    // 0x18d470: 0xc0633b4
    ctx->pc = 0x18D470u;
    SET_GPR_U32(ctx, 31, 0x18D478u);
    ctx->pc = 0x18D474u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966987));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D478u; }
        else if (ctx->pc != 0x18D478u) { ctx->pc = 0x18D478u; }
    }
    if (ctx->pc != 0x18D478u) { return; }
    ctx->pc = 0x18D478u;
    // 0x18d478: 0x3c04002c
    ctx->pc = 0x18d478u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18d47c: 0xc063dda
    ctx->pc = 0x18D47Cu;
    SET_GPR_U32(ctx, 31, 0x18D484u);
    ctx->pc = 0x18D480u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954512));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D484u; }
        else if (ctx->pc != 0x18D484u) { ctx->pc = 0x18D484u; }
    }
    if (ctx->pc != 0x18D484u) { return; }
    ctx->pc = 0x18D484u;
    // 0x18d484: 0xae000000
    ctx->pc = 0x18d484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x18d488: 0x24020001
    ctx->pc = 0x18d488u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d48c: 0xae220000
    ctx->pc = 0x18d48cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x18d490: 0x8e020000
    ctx->pc = 0x18d490u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18d494:
    // 0x18d494: 0x4410004
    ctx->pc = 0x18D494u;
    {
        const bool branch_taken_0x18d494 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18D498u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x18d494) {
            ctx->pc = 0x18D4A8u;
            goto label_18d4a8;
        }
    }
    ctx->pc = 0x18D49Cu;
    // 0x18d49c: 0xae000000
    ctx->pc = 0x18d49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x18d4a0: 0x24020001
    ctx->pc = 0x18d4a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d4a4: 0xae220000
    ctx->pc = 0x18d4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_18d4a8:
    // 0x18d4a8: 0xdfb10010
    ctx->pc = 0x18d4a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d4ac: 0xdfb00000
    ctx->pc = 0x18d4acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d4b0: 0x3e00008
    ctx->pc = 0x18D4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D4B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D494u: goto label_18d494;
            case 0x18D4A8u: goto label_18d4a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D4B8u;
}
