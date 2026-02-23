#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetTimeAfterSeek
// Address: 0x19deb8 - 0x19df20
void SFD_GetTimeAfterSeek_0x19deb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetTimeAfterSeek");


    ctx->pc = 0x19deb8u;

    // 0x19deb8: 0x27bdffc0
    ctx->pc = 0x19deb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19debc: 0xffb00000
    ctx->pc = 0x19debcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19dec0: 0xffb20020
    ctx->pc = 0x19dec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19dec4: 0x80802d
    ctx->pc = 0x19dec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dec8: 0xffb10010
    ctx->pc = 0x19dec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19decc: 0xc0902d
    ctx->pc = 0x19deccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ded0: 0xffbf0030
    ctx->pc = 0x19ded0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19ded4: 0xc064f1e
    ctx->pc = 0x19DED4u;
    SET_GPR_U32(ctx, 31, 0x19DEDCu);
    ctx->pc = 0x19DED8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DEDCu; }
        else if (ctx->pc != 0x19DEDCu) { ctx->pc = 0x19DEDCu; }
    }
    if (ctx->pc != 0x19DEDCu) { return; }
    ctx->pc = 0x19DEDCu;
    // 0x19dedc: 0x10400006
    ctx->pc = 0x19DEDCu;
    {
        const bool branch_taken_0x19dedc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DEE0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19dedc) {
            ctx->pc = 0x19DEF8u;
            goto label_19def8;
        }
    }
    ctx->pc = 0x19DEE4u;
    // 0x19dee4: 0x3c05ff00
    ctx->pc = 0x19dee4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19dee8: 0xc064ea0
    ctx->pc = 0x19DEE8u;
    SET_GPR_U32(ctx, 31, 0x19DEF0u);
    ctx->pc = 0x19DEECu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 295));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DEF0u; }
        else if (ctx->pc != 0x19DEF0u) { ctx->pc = 0x19DEF0u; }
    }
    if (ctx->pc != 0x19DEF0u) { return; }
    ctx->pc = 0x19DEF0u;
    // 0x19def0: 0x10000006
    ctx->pc = 0x19DEF0u;
    {
        const bool branch_taken_0x19def0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DEF4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19def0) {
            ctx->pc = 0x19DF0Cu;
            goto label_19df0c;
        }
    }
    ctx->pc = 0x19DEF8u;
label_19def8:
    // 0x19def8: 0x200202d
    ctx->pc = 0x19def8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19defc: 0x220282d
    ctx->pc = 0x19defcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df00: 0xc0677c8
    ctx->pc = 0x19DF00u;
    SET_GPR_U32(ctx, 31, 0x19DF08u);
    ctx->pc = 0x19DF04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19DF20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfdtim_GetTimeAfterSeek_0x19df20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DF08u; }
        else if (ctx->pc != 0x19DF08u) { ctx->pc = 0x19DF08u; }
    }
    if (ctx->pc != 0x19DF08u) { return; }
    ctx->pc = 0x19DF08u;
    // 0x19df08: 0xdfbf0030
    ctx->pc = 0x19df08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19df0c:
    // 0x19df0c: 0xdfb20020
    ctx->pc = 0x19df0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19df10: 0xdfb10010
    ctx->pc = 0x19df10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19df14: 0xdfb00000
    ctx->pc = 0x19df14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19df18: 0x3e00008
    ctx->pc = 0x19DF18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DF1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DEF8u: goto label_19def8;
            case 0x19DF0Cu: goto label_19df0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DF20u;
}
