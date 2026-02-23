#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_EntrySeek
// Address: 0x19c490 - 0x19c4e4
void SFD_EntrySeek_0x19c490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_EntrySeek");


    ctx->pc = 0x19c490u;

    // 0x19c490: 0x27bdffd0
    ctx->pc = 0x19c490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c494: 0xffb00000
    ctx->pc = 0x19c494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c498: 0xffb10010
    ctx->pc = 0x19c498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19c49c: 0x80802d
    ctx->pc = 0x19c49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c4a0: 0xffbf0020
    ctx->pc = 0x19c4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19c4a4: 0xc064f1e
    ctx->pc = 0x19C4A4u;
    SET_GPR_U32(ctx, 31, 0x19C4ACu);
    ctx->pc = 0x19C4A8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4ACu; }
        else if (ctx->pc != 0x19C4ACu) { ctx->pc = 0x19C4ACu; }
    }
    if (ctx->pc != 0x19C4ACu) { return; }
    ctx->pc = 0x19C4ACu;
    // 0x19c4ac: 0x10400006
    ctx->pc = 0x19C4ACu;
    {
        const bool branch_taken_0x19c4ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C4B0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19c4ac) {
            ctx->pc = 0x19C4C8u;
            goto label_19c4c8;
        }
    }
    ctx->pc = 0x19C4B4u;
    // 0x19c4b4: 0x3c05ff00
    ctx->pc = 0x19c4b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19c4b8: 0xc064ea0
    ctx->pc = 0x19C4B8u;
    SET_GPR_U32(ctx, 31, 0x19C4C0u);
    ctx->pc = 0x19C4BCu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 337));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4C0u; }
        else if (ctx->pc != 0x19C4C0u) { ctx->pc = 0x19C4C0u; }
    }
    if (ctx->pc != 0x19C4C0u) { return; }
    ctx->pc = 0x19C4C0u;
    // 0x19c4c0: 0x10000004
    ctx->pc = 0x19C4C0u;
    {
        const bool branch_taken_0x19c4c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C4C4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19c4c0) {
            ctx->pc = 0x19C4D4u;
            goto label_19c4d4;
        }
    }
    ctx->pc = 0x19C4C8u;
label_19c4c8:
    // 0x19c4c8: 0xae116758
    ctx->pc = 0x19c4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26456), GPR_U32(ctx, 17));
    // 0x19c4cc: 0x102d
    ctx->pc = 0x19c4ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c4d0: 0xdfbf0020
    ctx->pc = 0x19c4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19c4d4:
    // 0x19c4d4: 0xdfb10010
    ctx->pc = 0x19c4d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c4d8: 0xdfb00000
    ctx->pc = 0x19c4d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c4dc: 0x3e00008
    ctx->pc = 0x19C4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C4E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C4C8u: goto label_19c4c8;
            case 0x19C4D4u: goto label_19c4d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C4E4u;
}
