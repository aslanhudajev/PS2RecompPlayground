#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVHDEC_DecPicture
// Address: 0x187970 - 0x187a14
void MPVHDEC_DecPicture_0x187970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVHDEC_DecPicture");


    ctx->pc = 0x187970u;

    // 0x187970: 0x27bdffb0
    ctx->pc = 0x187970u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x187974: 0xffb20030
    ctx->pc = 0x187974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x187978: 0xffb10020
    ctx->pc = 0x187978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x18797c: 0xe0902d
    ctx->pc = 0x18797cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187980: 0xffbf0040
    ctx->pc = 0x187980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x187984: 0x80882d
    ctx->pc = 0x187984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187988: 0xffb00010
    ctx->pc = 0x187988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x18798c: 0xafa50000
    ctx->pc = 0x18798cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x187990: 0xafa60004
    ctx->pc = 0x187990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x187994: 0xae400000
    ctx->pc = 0x187994u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x187998: 0x10000005
    ctx->pc = 0x187998u;
    {
        const bool branch_taken_0x187998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18799Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 4));
        if (branch_taken_0x187998) {
            ctx->pc = 0x1879B0u;
            goto label_1879b0;
        }
    }
    ctx->pc = 0x1879A0u;
label_1879a0:
    // 0x1879a0: 0x3a0282d
    ctx->pc = 0x1879a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879a4: 0x200302d
    ctx->pc = 0x1879a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879a8: 0xc061ee0
    ctx->pc = 0x1879A8u;
    SET_GPR_U32(ctx, 31, 0x1879B0u);
    ctx->pc = 0x1879ACu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvhdec_DecSlice_0x187b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879B0u; }
        else if (ctx->pc != 0x1879B0u) { ctx->pc = 0x1879B0u; }
    }
    if (ctx->pc != 0x1879B0u) { return; }
    ctx->pc = 0x1879B0u;
label_1879b0:
    // 0x1879b0: 0x3c05ffff
    ctx->pc = 0x1879b0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x1879b4: 0x220202d
    ctx->pc = 0x1879b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879b8: 0x34a5ffff
    ctx->pc = 0x1879b8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x1879bc: 0x3a0302d
    ctx->pc = 0x1879bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879c0: 0x200382d
    ctx->pc = 0x1879c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879c4: 0xc061e86
    ctx->pc = 0x1879C4u;
    SET_GPR_U32(ctx, 31, 0x1879CCu);
    ctx->pc = 0x1879C8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvhdec_Recover_0x187a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879CCu; }
        else if (ctx->pc != 0x1879CCu) { ctx->pc = 0x1879CCu; }
    }
    if (ctx->pc != 0x1879CCu) { return; }
    ctx->pc = 0x1879CCu;
    // 0x1879cc: 0x10400005
    ctx->pc = 0x1879CCu;
    {
        const bool branch_taken_0x1879cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1879D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1879cc) {
            ctx->pc = 0x1879E4u;
            goto label_1879e4;
        }
    }
    ctx->pc = 0x1879D4u;
    // 0x1879d4: 0xc061846
    ctx->pc = 0x1879D4u;
    SET_GPR_U32(ctx, 31, 0x1879DCu);
    ctx->pc = 0x1879D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186118u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVERR_SetCode_0x186118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879DCu; }
        else if (ctx->pc != 0x1879DCu) { ctx->pc = 0x1879DCu; }
    }
    if (ctx->pc != 0x1879DCu) { return; }
    ctx->pc = 0x1879DCu;
    // 0x1879dc: 0x10000008
    ctx->pc = 0x1879DCu;
    {
        const bool branch_taken_0x1879dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1879E0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1879dc) {
            ctx->pc = 0x187A00u;
            goto label_187a00;
        }
    }
    ctx->pc = 0x1879E4u;
label_1879e4:
    // 0x1879e4: 0xc061610
    ctx->pc = 0x1879E4u;
    SET_GPR_U32(ctx, 31, 0x1879ECu);
    ctx->pc = 0x1879E8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x185840u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_CheckDelim_0x185840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879ECu; }
        else if (ctx->pc != 0x1879ECu) { ctx->pc = 0x1879ECu; }
    }
    if (ctx->pc != 0x1879ECu) { return; }
    ctx->pc = 0x1879ECu;
    // 0x1879ec: 0x30420001
    ctx->pc = 0x1879ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1879f0: 0x5440ffeb
    ctx->pc = 0x1879F0u;
    {
        const bool branch_taken_0x1879f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1879f0) {
            ctx->pc = 0x1879F4u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1879A0u;
            goto label_1879a0;
        }
    }
    ctx->pc = 0x1879F8u;
    // 0x1879f8: 0x102d
    ctx->pc = 0x1879f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879fc: 0xdfbf0040
    ctx->pc = 0x1879fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_187a00:
    // 0x187a00: 0xdfb20030
    ctx->pc = 0x187a00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187a04: 0xdfb10020
    ctx->pc = 0x187a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187a08: 0xdfb00010
    ctx->pc = 0x187a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187a0c: 0x3e00008
    ctx->pc = 0x187A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187A10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1879A0u: goto label_1879a0;
            case 0x1879B0u: goto label_1879b0;
            case 0x1879E4u: goto label_1879e4;
            case 0x187A00u: goto label_187a00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187A14u;
}
