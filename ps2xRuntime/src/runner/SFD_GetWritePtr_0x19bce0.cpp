#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetWritePtr
// Address: 0x19bce0 - 0x19bd44
void SFD_GetWritePtr_0x19bce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetWritePtr");


    ctx->pc = 0x19bce0u;

    // 0x19bce0: 0x27bdffd0
    ctx->pc = 0x19bce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19bce4: 0xffb00000
    ctx->pc = 0x19bce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19bce8: 0xffb10010
    ctx->pc = 0x19bce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19bcec: 0x80802d
    ctx->pc = 0x19bcecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bcf0: 0xffbf0020
    ctx->pc = 0x19bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19bcf4: 0xc064f1e
    ctx->pc = 0x19BCF4u;
    SET_GPR_U32(ctx, 31, 0x19BCFCu);
    ctx->pc = 0x19BCF8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCFCu; }
        else if (ctx->pc != 0x19BCFCu) { ctx->pc = 0x19BCFCu; }
    }
    if (ctx->pc != 0x19BCFCu) { return; }
    ctx->pc = 0x19BCFCu;
    // 0x19bcfc: 0x10400006
    ctx->pc = 0x19BCFCu;
    {
        const bool branch_taken_0x19bcfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BD00u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19bcfc) {
            ctx->pc = 0x19BD18u;
            goto label_19bd18;
        }
    }
    ctx->pc = 0x19BD04u;
    // 0x19bd04: 0x3c05ff00
    ctx->pc = 0x19bd04u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19bd08: 0xc064ea0
    ctx->pc = 0x19BD08u;
    SET_GPR_U32(ctx, 31, 0x19BD10u);
    ctx->pc = 0x19BD0Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 308));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD10u; }
        else if (ctx->pc != 0x19BD10u) { ctx->pc = 0x19BD10u; }
    }
    if (ctx->pc != 0x19BD10u) { return; }
    ctx->pc = 0x19BD10u;
    // 0x19bd10: 0x10000008
    ctx->pc = 0x19BD10u;
    {
        const bool branch_taken_0x19bd10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BD14u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19bd10) {
            ctx->pc = 0x19BD34u;
            goto label_19bd34;
        }
    }
    ctx->pc = 0x19BD18u;
label_19bd18:
    // 0x19bd18: 0x200202d
    ctx->pc = 0x19bd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd1c: 0x220382d
    ctx->pc = 0x19bd1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd20: 0x282d
    ctx->pc = 0x19bd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd24: 0x24060009
    ctx->pc = 0x19bd24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    // 0x19bd28: 0xc067cca
    ctx->pc = 0x19BD28u;
    SET_GPR_U32(ctx, 31, 0x19BD30u);
    ctx->pc = 0x19BD2Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_CallTrtTrif_0x19f328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD30u; }
        else if (ctx->pc != 0x19BD30u) { ctx->pc = 0x19BD30u; }
    }
    if (ctx->pc != 0x19BD30u) { return; }
    ctx->pc = 0x19BD30u;
    // 0x19bd30: 0xdfbf0020
    ctx->pc = 0x19bd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19bd34:
    // 0x19bd34: 0xdfb10010
    ctx->pc = 0x19bd34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bd38: 0xdfb00000
    ctx->pc = 0x19bd38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bd3c: 0x3e00008
    ctx->pc = 0x19BD3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BD40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BD18u: goto label_19bd18;
            case 0x19BD34u: goto label_19bd34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BD44u;
}
