#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_over
// Address: 0x227fd0 - 0x22805c
void init_over_0x227fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x227fd0u;

    // 0x227fd0: 0x27bdffe0
    ctx->pc = 0x227fd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227fd4: 0xffbf0010
    ctx->pc = 0x227fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x227fd8: 0xffb00000
    ctx->pc = 0x227fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227fdc: 0x3c030031
    ctx->pc = 0x227fdcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x227fe0: 0x24024014
    ctx->pc = 0x227fe0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16404));
    // 0x227fe4: 0xac620018
    ctx->pc = 0x227fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x227fe8: 0x3c020031
    ctx->pc = 0x227fe8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x227fec: 0xc09733e
    ctx->pc = 0x227FECu;
    SET_GPR_U32(ctx, 31, 0x227FF4u);
    ctx->pc = 0x227FF0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967196), GPR_U32(ctx, 0));
    ctx->pc = 0x25CCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGMusicStop_0x25ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227FF4u; }
    }
    if (ctx->pc != 0x227FF4u) { return; }
    ctx->pc = 0x227FF4u;
    // 0x227ff4: 0xc09710c
    ctx->pc = 0x227FF4u;
    SET_GPR_U32(ctx, 31, 0x227FFCu);
    ctx->pc = 0x25C430u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStopAll_0x25c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227FFCu; }
    }
    if (ctx->pc != 0x227FFCu) { return; }
    ctx->pc = 0x227FFCu;
    // 0x227ffc: 0x3c020031
    ctx->pc = 0x227ffcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x228000: 0x8c42f184
    ctx->pc = 0x228000u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x228004: 0x10400003
    ctx->pc = 0x228004u;
    {
        const bool branch_taken_0x228004 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x228004) {
            ctx->pc = 0x228014u;
            goto label_228014;
        }
    }
    ctx->pc = 0x22800Cu;
    // 0x22800c: 0xc08026e
    ctx->pc = 0x22800Cu;
    SET_GPR_U32(ctx, 31, 0x228014u);
    ctx->pc = 0x2009B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DemoEnd_0x2009b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228014u; }
    }
    if (ctx->pc != 0x228014u) { return; }
    ctx->pc = 0x228014u;
label_228014:
    // 0x228014: 0xc0981b8
    ctx->pc = 0x228014u;
    SET_GPR_U32(ctx, 31, 0x22801Cu);
    ctx->pc = 0x228018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2606E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioEndGame_0x2606e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22801Cu; }
    }
    if (ctx->pc != 0x22801Cu) { return; }
    ctx->pc = 0x22801Cu;
    // 0x22801c: 0x3c020031
    ctx->pc = 0x22801cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x228020: 0x240300f0
    ctx->pc = 0x228020u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
    // 0x228024: 0xac43001c
    ctx->pc = 0x228024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x228028: 0x3c020031
    ctx->pc = 0x228028u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x22802c: 0xac400020
    ctx->pc = 0x22802cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_228030:
    // 0x228030: 0xc08c684
    ctx->pc = 0x228030u;
    SET_GPR_U32(ctx, 31, 0x228038u);
    ctx->pc = 0x228034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        inactivate_player_0x231a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228038u; }
    }
    if (ctx->pc != 0x228038u) { return; }
    ctx->pc = 0x228038u;
    // 0x228038: 0x26100001
    ctx->pc = 0x228038u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x22803c: 0x2a020004
    ctx->pc = 0x22803cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x228040: 0x1440fffb
    ctx->pc = 0x228040u;
    {
        const bool branch_taken_0x228040 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x228044u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x228040) {
            ctx->pc = 0x228030u;
            goto label_228030;
        }
    }
    ctx->pc = 0x228048u;
    // 0x228048: 0xac4007b4
    ctx->pc = 0x228048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1972), GPR_U32(ctx, 0));
    // 0x22804c: 0xdfbf0010
    ctx->pc = 0x22804cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228050: 0xdfb00000
    ctx->pc = 0x228050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228054: 0x80a89f8
    ctx->pc = 0x228054u;
    ctx->pc = 0x228058u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2A27E0u;
    TriggerCameraEnd_0x2a27e0(rdram, ctx, runtime); return;
    ctx->pc = 0x22805Cu;
}
