#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPV_Init
// Address: 0x195958 - 0x195a04
void SFMPV_Init_0x195958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPV_Init");


    ctx->pc = 0x195958u;

    // 0x195958: 0x27bdfff0
    ctx->pc = 0x195958u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19595c: 0xffbf0000
    ctx->pc = 0x19595cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195960: 0xc066778
    ctx->pc = 0x195960u;
    SET_GPR_U32(ctx, 31, 0x195968u);
    ctx->pc = 0x199DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVP_Init_0x199de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195968u; }
        else if (ctx->pc != 0x195968u) { ctx->pc = 0x195968u; }
    }
    if (ctx->pc != 0x195968u) { return; }
    ctx->pc = 0x195968u;
    // 0x195968: JAL -> v0 = 0, continue
    SET_GPR_U32(ctx, 2, 0u);
    ctx->pc = 0x195970u;
    if (ctx->pc != 0x195970u) { return; }
    ctx->pc = 0x195970u;
    // 0x195970: 0x10400008
    ctx->pc = 0x195970u;
    {
        const bool branch_taken_0x195970 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x195974u;
        SET_GPR_U32(ctx, 5, ((uint32_t)47 << 16));
        if (branch_taken_0x195970) {
            ctx->pc = 0x195994u;
            goto label_195994;
        }
    }
    ctx->pc = 0x195978u;
label_195978:
    // 0x195978: 0x0
    ctx->pc = 0x195978u;
    // NOP
    // 0x19597c: 0x0
    ctx->pc = 0x19597cu;
    // NOP
    // 0x195980: 0x0
    ctx->pc = 0x195980u;
    // NOP
    // 0x195984: 0x0
    ctx->pc = 0x195984u;
    // NOP
    // 0x195988: 0x0
    ctx->pc = 0x195988u;
    // NOP
    // 0x19598c: 0x1000fffa
    ctx->pc = 0x19598Cu;
    {
        const bool branch_taken_0x19598c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x19598c) {
            ctx->pc = 0x195978u;
            goto label_195978;
        }
    }
    ctx->pc = 0x195994u;
label_195994:
    // 0x195994: 0x24040008
    ctx->pc = 0x195994u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x195998: 0xc061faa
    ctx->pc = 0x195998u;
    SET_GPR_U32(ctx, 31, 0x1959A0u);
    ctx->pc = 0x19599Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959256));
    ctx->pc = 0x187EA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_Init_0x187ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1959A0u; }
        else if (ctx->pc != 0x1959A0u) { ctx->pc = 0x1959A0u; }
    }
    if (ctx->pc != 0x1959A0u) { return; }
    ctx->pc = 0x1959A0u;
    // 0x1959a0: 0x40202d
    ctx->pc = 0x1959a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959a4: 0x5080000d
    ctx->pc = 0x1959A4u;
    {
        const bool branch_taken_0x1959a4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1959a4) {
            ctx->pc = 0x1959A8u;
            SET_GPR_U32(ctx, 4, ((uint32_t)48 << 16));
            ctx->pc = 0x1959DCu;
            goto label_1959dc;
        }
    }
    ctx->pc = 0x1959ACu;
    // 0x1959ac: 0x3c02ff03
    ctx->pc = 0x1959acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65283 << 16));
    // 0x1959b0: 0x3c03ff00
    ctx->pc = 0x1959b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65280 << 16));
    // 0x1959b4: 0x3442ff05
    ctx->pc = 0x1959b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65285));
    // 0x1959b8: 0x3c05ff00
    ctx->pc = 0x1959b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1959bc: 0x821026
    ctx->pc = 0x1959bcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1959c0: 0x34630f01
    ctx->pc = 0x1959c0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 3841));
    // 0x1959c4: 0x34a50f13
    ctx->pc = 0x1959c4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3859));
    // 0x1959c8: 0x202d
    ctx->pc = 0x1959c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959cc: 0xc064ea0
    ctx->pc = 0x1959CCu;
    SET_GPR_U32(ctx, 31, 0x1959D4u);
    ctx->pc = 0x1959D0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1959D4u; }
        else if (ctx->pc != 0x1959D4u) { ctx->pc = 0x1959D4u; }
    }
    if (ctx->pc != 0x1959D4u) { return; }
    ctx->pc = 0x1959D4u;
    // 0x1959d4: 0x10000009
    ctx->pc = 0x1959D4u;
    {
        const bool branch_taken_0x1959d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1959D8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1959d4) {
            ctx->pc = 0x1959FCu;
            goto label_1959fc;
        }
    }
    ctx->pc = 0x1959DCu;
label_1959dc:
    // 0x1959dc: 0x282d
    ctx->pc = 0x1959dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959e0: 0x24842098
    ctx->pc = 0x1959e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8344));
    // 0x1959e4: 0xc0601e6
    ctx->pc = 0x1959E4u;
    SET_GPR_U32(ctx, 31, 0x1959ECu);
    ctx->pc = 0x1959E8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x180798u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemsetDword_0x180798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1959ECu; }
        else if (ctx->pc != 0x1959ECu) { ctx->pc = 0x1959ECu; }
    }
    if (ctx->pc != 0x1959ECu) { return; }
    ctx->pc = 0x1959ECu;
    // 0x1959ec: 0x3c030026
    ctx->pc = 0x1959ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1959f0: 0x102d
    ctx->pc = 0x1959f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959f4: 0xac60df48
    ctx->pc = 0x1959f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958920), GPR_U32(ctx, 0));
    // 0x1959f8: 0xdfbf0000
    ctx->pc = 0x1959f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1959fc:
    // 0x1959fc: 0x3e00008
    ctx->pc = 0x1959FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195A00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195978u: goto label_195978;
            case 0x195994u: goto label_195994;
            case 0x1959DCu: goto label_1959dc;
            case 0x1959FCu: goto label_1959fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195A04u;
}
