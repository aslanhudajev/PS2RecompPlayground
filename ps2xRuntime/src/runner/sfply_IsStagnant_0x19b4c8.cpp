#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_IsStagnant
// Address: 0x19b4c8 - 0x19b514
void sfply_IsStagnant_0x19b4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_IsStagnant");


    ctx->pc = 0x19b4c8u;

    // 0x19b4c8: 0x27bdffe0
    ctx->pc = 0x19b4c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b4cc: 0x24030004
    ctx->pc = 0x19b4ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b4d0: 0xffbf0010
    ctx->pc = 0x19b4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b4d4: 0xffb00000
    ctx->pc = 0x19b4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b4d8: 0x8c820040
    ctx->pc = 0x19b4d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x19b4dc: 0x14430009
    ctx->pc = 0x19B4DCu;
    {
        const bool branch_taken_0x19b4dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x19B4E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b4dc) {
            ctx->pc = 0x19B504u;
            goto label_19b504;
        }
    }
    ctx->pc = 0x19B4E4u;
    // 0x19b4e4: 0x8c820048
    ctx->pc = 0x19b4e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19b4e8: 0x24100001
    ctx->pc = 0x19b4e8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b4ec: 0x10500005
    ctx->pc = 0x19B4ECu;
    {
        const bool branch_taken_0x19b4ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x19B4F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b4ec) {
            ctx->pc = 0x19B504u;
            goto label_19b504;
        }
    }
    ctx->pc = 0x19B4F4u;
    // 0x19b4f4: 0xc067702
    ctx->pc = 0x19B4F4u;
    SET_GPR_U32(ctx, 31, 0x19B4FCu);
    ctx->pc = 0x19DC08u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_IsStagnant_0x19dc08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B4FCu; }
        else if (ctx->pc != 0x19B4FCu) { ctx->pc = 0x19B4FCu; }
    }
    if (ctx->pc != 0x19B4FCu) { return; }
    ctx->pc = 0x19B4FCu;
    // 0x19b4fc: 0x2800a
    ctx->pc = 0x19b4fcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
    // 0x19b500: 0x200102d
    ctx->pc = 0x19b500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b504:
    // 0x19b504: 0xdfbf0010
    ctx->pc = 0x19b504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b508: 0xdfb00000
    ctx->pc = 0x19b508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b50c: 0x3e00008
    ctx->pc = 0x19B50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B510u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B504u: goto label_19b504;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B514u;
}
