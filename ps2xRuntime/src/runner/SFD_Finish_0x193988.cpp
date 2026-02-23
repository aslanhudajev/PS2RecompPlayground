#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_Finish
// Address: 0x193988 - 0x193a60
void SFD_Finish_0x193988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_Finish");


    ctx->pc = 0x193988u;

    // 0x193988: 0x27bdffa0
    ctx->pc = 0x193988u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19398c: 0x3c020026
    ctx->pc = 0x19398cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x193990: 0xffb20020
    ctx->pc = 0x193990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x193994: 0x2442ddc0
    ctx->pc = 0x193994u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958528));
    // 0x193998: 0xffb00000
    ctx->pc = 0x193998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19399c: 0x902d
    ctx->pc = 0x19399cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939a0: 0xffbf0050
    ctx->pc = 0x1939a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1939a4: 0x802d
    ctx->pc = 0x1939a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939a8: 0xffb40040
    ctx->pc = 0x1939a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1939ac: 0xffb30030
    ctx->pc = 0x1939acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1939b0: 0xffb10010
    ctx->pc = 0x1939b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1939b4: 0x8c510174
    ctx->pc = 0x1939b4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x1939b8: 0x1a200010
    ctx->pc = 0x1939B8u;
    {
        const bool branch_taken_0x1939b8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1939BCu;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 376)));
        if (branch_taken_0x1939b8) {
            ctx->pc = 0x1939FCu;
            goto label_1939fc;
        }
    }
    ctx->pc = 0x1939C0u;
    // 0x1939c0: 0x3c140026
    ctx->pc = 0x1939c0u;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
    // 0x1939c4: 0x24026828
    ctx->pc = 0x1939c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 26664));
label_1939c8:
    // 0x1939c8: 0x2021818
    ctx->pc = 0x1939c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1939cc: 0x732021
    ctx->pc = 0x1939ccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1939d0: 0x8c830040
    ctx->pc = 0x1939d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1939d4: 0x10600004
    ctx->pc = 0x1939D4u;
    {
        const bool branch_taken_0x1939d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1939D8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1939d4) {
            ctx->pc = 0x1939E8u;
            goto label_1939e8;
        }
    }
    ctx->pc = 0x1939DCu;
    // 0x1939dc: 0xc066eb2
    ctx->pc = 0x1939DCu;
    SET_GPR_U32(ctx, 31, 0x1939E4u);
    ctx->pc = 0x19BAC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_Destroy_0x19bac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939E4u; }
        else if (ctx->pc != 0x1939E4u) { ctx->pc = 0x1939E4u; }
    }
    if (ctx->pc != 0x1939E4u) { return; }
    ctx->pc = 0x1939E4u;
    // 0x1939e4: 0x40902d
    ctx->pc = 0x1939e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1939e8:
    // 0x1939e8: 0x211102a
    ctx->pc = 0x1939e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x1939ec: 0x5440fff6
    ctx->pc = 0x1939ECu;
    {
        const bool branch_taken_0x1939ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1939ec) {
            ctx->pc = 0x1939F0u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 26664));
            ctx->pc = 0x1939C8u;
            goto label_1939c8;
        }
    }
    ctx->pc = 0x1939F4u;
    // 0x1939f4: 0x10000003
    ctx->pc = 0x1939F4u;
    {
        const bool branch_taken_0x1939f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1939F8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 20), 4294958824));
        if (branch_taken_0x1939f4) {
            ctx->pc = 0x193A04u;
            goto label_193a04;
        }
    }
    ctx->pc = 0x1939FCu;
label_1939fc:
    // 0x1939fc: 0x3c140026
    ctx->pc = 0x1939fcu;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
    // 0x193a00: 0x2690dee8
    ctx->pc = 0x193a00u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 20), 4294958824));
label_193a04:
    // 0x193a04: 0xc067596
    ctx->pc = 0x193A04u;
    SET_GPR_U32(ctx, 31, 0x193A0Cu);
    ctx->pc = 0x193A08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D658u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_Finish_0x19d658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A0Cu; }
        else if (ctx->pc != 0x193A0Cu) { ctx->pc = 0x193A0Cu; }
    }
    if (ctx->pc != 0x193A0Cu) { return; }
    ctx->pc = 0x193A0Cu;
    // 0x193a0c: 0xc064542
    ctx->pc = 0x193A0Cu;
    SET_GPR_U32(ctx, 31, 0x193A14u);
    ctx->pc = 0x193A10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x191508u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_Finish_0x191508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A14u; }
        else if (ctx->pc != 0x193A14u) { ctx->pc = 0x193A14u; }
    }
    if (ctx->pc != 0x193A14u) { return; }
    ctx->pc = 0x193A14u;
    // 0x193a14: 0xc067b5a
    ctx->pc = 0x193A14u;
    SET_GPR_U32(ctx, 31, 0x193A1Cu);
    ctx->pc = 0x193A18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x19ED68u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_Finish_0x19ed68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A1Cu; }
        else if (ctx->pc != 0x193A1Cu) { ctx->pc = 0x193A1Cu; }
    }
    if (ctx->pc != 0x193A1Cu) { return; }
    ctx->pc = 0x193A1Cu;
    // 0x193a1c: 0xc064f38
    ctx->pc = 0x193A1Cu;
    SET_GPR_U32(ctx, 31, 0x193A24u);
    ctx->pc = 0x193A20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sflib_FinishCs_0x193ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A24u; }
        else if (ctx->pc != 0x193A24u) { ctx->pc = 0x193A24u; }
    }
    if (ctx->pc != 0x193A24u) { return; }
    ctx->pc = 0x193A24u;
    // 0x193a24: 0xc064f34
    ctx->pc = 0x193A24u;
    SET_GPR_U32(ctx, 31, 0x193A2Cu);
    ctx->pc = 0x193CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sflib_FinishSub_0x193cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A2Cu; }
        else if (ctx->pc != 0x193A2Cu) { ctx->pc = 0x193A2Cu; }
    }
    if (ctx->pc != 0x193A2Cu) { return; }
    ctx->pc = 0x193A2Cu;
    // 0x193a2c: 0xc064f2a
    ctx->pc = 0x193A2Cu;
    SET_GPR_U32(ctx, 31, 0x193A34u);
    ctx->pc = 0x193CA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sflib_FinishBaseLib_0x193ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A34u; }
        else if (ctx->pc != 0x193A34u) { ctx->pc = 0x193A34u; }
    }
    if (ctx->pc != 0x193A34u) { return; }
    ctx->pc = 0x193A34u;
    // 0x193a34: 0x16000002
    ctx->pc = 0x193A34u;
    {
        const bool branch_taken_0x193a34 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x193A38u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193a34) {
            ctx->pc = 0x193A40u;
            goto label_193a40;
        }
    }
    ctx->pc = 0x193A3Cu;
    // 0x193a3c: 0x240102d
    ctx->pc = 0x193a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_193a40:
    // 0x193a40: 0xdfbf0050
    ctx->pc = 0x193a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x193a44: 0xdfb40040
    ctx->pc = 0x193a44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193a48: 0xdfb30030
    ctx->pc = 0x193a48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193a4c: 0xdfb20020
    ctx->pc = 0x193a4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193a50: 0xdfb10010
    ctx->pc = 0x193a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193a54: 0xdfb00000
    ctx->pc = 0x193a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193a58: 0x3e00008
    ctx->pc = 0x193A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193A5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1939C8u: goto label_1939c8;
            case 0x1939E8u: goto label_1939e8;
            case 0x1939FCu: goto label_1939fc;
            case 0x193A04u: goto label_193a04;
            case 0x193A40u: goto label_193a40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193A60u;
}
