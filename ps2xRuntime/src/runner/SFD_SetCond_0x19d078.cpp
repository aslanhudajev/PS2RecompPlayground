#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetCond
// Address: 0x19d078 - 0x19d110
void SFD_SetCond_0x19d078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetCond");


    ctx->pc = 0x19d078u;

    // 0x19d078: 0x27bdffc0
    ctx->pc = 0x19d078u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19d07c: 0xffb20020
    ctx->pc = 0x19d07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19d080: 0xffb10010
    ctx->pc = 0x19d080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19d084: 0xc0902d
    ctx->pc = 0x19d084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d088: 0xffb00000
    ctx->pc = 0x19d088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d08c: 0xa0882d
    ctx->pc = 0x19d08cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d090: 0x80802d
    ctx->pc = 0x19d090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d094: 0x1600000a
    ctx->pc = 0x19D094u;
    {
        const bool branch_taken_0x19d094 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D098u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        if (branch_taken_0x19d094) {
            ctx->pc = 0x19D0C0u;
            goto label_19d0c0;
        }
    }
    ctx->pc = 0x19D09Cu;
    // 0x19d09c: 0x220202d
    ctx->pc = 0x19d09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d0a0: 0xc067444
    ctx->pc = 0x19D0A0u;
    SET_GPR_U32(ctx, 31, 0x19D0A8u);
    ctx->pc = 0x19D0A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D110u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfset_SetCondAll_0x19d110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0A8u; }
        else if (ctx->pc != 0x19D0A8u) { ctx->pc = 0x19D0A8u; }
    }
    if (ctx->pc != 0x19D0A8u) { return; }
    ctx->pc = 0x19D0A8u;
    // 0x19d0a8: 0x3c020026
    ctx->pc = 0x19d0a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x19d0ac: 0x111880
    ctx->pc = 0x19d0acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x19d0b0: 0x2442ddc0
    ctx->pc = 0x19d0b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958528));
    // 0x19d0b4: 0x621821
    ctx->pc = 0x19d0b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d0b8: 0x1000000e
    ctx->pc = 0x19D0B8u;
    {
        const bool branch_taken_0x19d0b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D0BCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        if (branch_taken_0x19d0b8) {
            ctx->pc = 0x19D0F4u;
            goto label_19d0f4;
        }
    }
    ctx->pc = 0x19D0C0u;
label_19d0c0:
    // 0x19d0c0: 0xc064f1e
    ctx->pc = 0x19D0C0u;
    SET_GPR_U32(ctx, 31, 0x19D0C8u);
    ctx->pc = 0x19D0C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0C8u; }
        else if (ctx->pc != 0x19D0C8u) { ctx->pc = 0x19D0C8u; }
    }
    if (ctx->pc != 0x19D0C8u) { return; }
    ctx->pc = 0x19D0C8u;
    // 0x19d0c8: 0x10400006
    ctx->pc = 0x19D0C8u;
    {
        const bool branch_taken_0x19d0c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D0CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d0c8) {
            ctx->pc = 0x19D0E4u;
            goto label_19d0e4;
        }
    }
    ctx->pc = 0x19D0D0u;
    // 0x19d0d0: 0x3c05ff00
    ctx->pc = 0x19d0d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19d0d4: 0xc064ea0
    ctx->pc = 0x19D0D4u;
    SET_GPR_U32(ctx, 31, 0x19D0DCu);
    ctx->pc = 0x19D0D8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 274));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0DCu; }
        else if (ctx->pc != 0x19D0DCu) { ctx->pc = 0x19D0DCu; }
    }
    if (ctx->pc != 0x19D0DCu) { return; }
    ctx->pc = 0x19D0DCu;
    // 0x19d0dc: 0x10000007
    ctx->pc = 0x19D0DCu;
    {
        const bool branch_taken_0x19d0dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D0E0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19d0dc) {
            ctx->pc = 0x19D0FCu;
            goto label_19d0fc;
        }
    }
    ctx->pc = 0x19D0E4u;
label_19d0e4:
    // 0x19d0e4: 0x200202d
    ctx->pc = 0x19d0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d0e8: 0x220282d
    ctx->pc = 0x19d0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d0ec: 0xc067464
    ctx->pc = 0x19D0ECu;
    SET_GPR_U32(ctx, 31, 0x19D0F4u);
    ctx->pc = 0x19D0F0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0F4u; }
        else if (ctx->pc != 0x19D0F4u) { ctx->pc = 0x19D0F4u; }
    }
    if (ctx->pc != 0x19D0F4u) { return; }
    ctx->pc = 0x19D0F4u;
label_19d0f4:
    // 0x19d0f4: 0x102d
    ctx->pc = 0x19d0f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d0f8: 0xdfbf0030
    ctx->pc = 0x19d0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19d0fc:
    // 0x19d0fc: 0xdfb20020
    ctx->pc = 0x19d0fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d100: 0xdfb10010
    ctx->pc = 0x19d100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d104: 0xdfb00000
    ctx->pc = 0x19d104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d108: 0x3e00008
    ctx->pc = 0x19D108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D10Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D0C0u: goto label_19d0c0;
            case 0x19D0E4u: goto label_19d0e4;
            case 0x19D0F4u: goto label_19d0f4;
            case 0x19D0FCu: goto label_19d0fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D110u;
}
