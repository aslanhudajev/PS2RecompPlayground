#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFCON_WriteTotSmplQue
// Address: 0x192b28 - 0x192bdc
void SFCON_WriteTotSmplQue_0x192b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFCON_WriteTotSmplQue");


    ctx->pc = 0x192b28u;

    // 0x192b28: 0x27bdff90
    ctx->pc = 0x192b28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x192b2c: 0xffb20030
    ctx->pc = 0x192b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x192b30: 0xffb30040
    ctx->pc = 0x192b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x192b34: 0x80902d
    ctx->pc = 0x192b34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b38: 0xffb10020
    ctx->pc = 0x192b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x192b3c: 0xa0982d
    ctx->pc = 0x192b3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b40: 0xffb40050
    ctx->pc = 0x192b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x192b44: 0xc0882d
    ctx->pc = 0x192b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b48: 0xffb00010
    ctx->pc = 0x192b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x192b4c: 0x3a0202d
    ctx->pc = 0x192b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b50: 0xffbf0060
    ctx->pc = 0x192b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x192b54: 0xc064f3a
    ctx->pc = 0x192B54u;
    SET_GPR_U32(ctx, 31, 0x192B5Cu);
    ctx->pc = 0x192B58u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 2708));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B5Cu; }
        else if (ctx->pc != 0x192B5Cu) { ctx->pc = 0x192B5Cu; }
    }
    if (ctx->pc != 0x192B5Cu) { return; }
    ctx->pc = 0x192B5Cu;
    // 0x192b5c: 0x8e0401a8
    ctx->pc = 0x192b5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x192b60: 0x8e0201ac
    ctx->pc = 0x192b60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x192b64: 0x821023
    ctx->pc = 0x192b64u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x192b68: 0x28420020
    ctx->pc = 0x192b68u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 32));
    // 0x192b6c: 0x10400010
    ctx->pc = 0x192B6Cu;
    {
        const bool branch_taken_0x192b6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x192B70u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x192b6c) {
            ctx->pc = 0x192BB0u;
            goto label_192bb0;
        }
    }
    ctx->pc = 0x192B74u;
    // 0x192b74: 0x2402ffff
    ctx->pc = 0x192b74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192b78: 0x2483001f
    ctx->pc = 0x192b78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 31));
    // 0x192b7c: 0x44102a
    ctx->pc = 0x192b7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x192b80: 0xae1101a0
    ctx->pc = 0x192b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 17));
    // 0x192b84: 0x82180b
    ctx->pc = 0x192b84u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x192b88: 0x24140001
    ctx->pc = 0x192b88u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x192b8c: 0x31943
    ctx->pc = 0x192b8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x192b90: 0x31940
    ctx->pc = 0x192b90u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x192b94: 0x831823
    ctx->pc = 0x192b94u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x192b98: 0x31880
    ctx->pc = 0x192b98u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x192b9c: 0x2431821
    ctx->pc = 0x192b9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x192ba0: 0xac730c44
    ctx->pc = 0x192ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3140), GPR_U32(ctx, 19));
    // 0x192ba4: 0x8e0201a8
    ctx->pc = 0x192ba4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x192ba8: 0x24420001
    ctx->pc = 0x192ba8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x192bac: 0xae0201a8
    ctx->pc = 0x192bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
label_192bb0:
    // 0x192bb0: 0xc064f44
    ctx->pc = 0x192BB0u;
    SET_GPR_U32(ctx, 31, 0x192BB8u);
    ctx->pc = 0x192BB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BB8u; }
        else if (ctx->pc != 0x192BB8u) { ctx->pc = 0x192BB8u; }
    }
    if (ctx->pc != 0x192BB8u) { return; }
    ctx->pc = 0x192BB8u;
    // 0x192bb8: 0x280102d
    ctx->pc = 0x192bb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bbc: 0xdfbf0060
    ctx->pc = 0x192bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192bc0: 0xdfb40050
    ctx->pc = 0x192bc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192bc4: 0xdfb30040
    ctx->pc = 0x192bc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192bc8: 0xdfb20030
    ctx->pc = 0x192bc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192bcc: 0xdfb10020
    ctx->pc = 0x192bccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192bd0: 0xdfb00010
    ctx->pc = 0x192bd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192bd4: 0x3e00008
    ctx->pc = 0x192BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192BD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192BB0u: goto label_192bb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192BDCu;
}
