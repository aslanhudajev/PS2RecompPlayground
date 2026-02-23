#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFADXT_Seek
// Address: 0x190ec0 - 0x190f44
void SFADXT_Seek_0x190ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFADXT_Seek");


    ctx->pc = 0x190ec0u;

    // 0x190ec0: 0x27bdffd0
    ctx->pc = 0x190ec0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190ec4: 0xffb00000
    ctx->pc = 0x190ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x190ec8: 0x80802d
    ctx->pc = 0x190ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190ecc: 0xffbf0020
    ctx->pc = 0x190eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x190ed0: 0xc0643d2
    ctx->pc = 0x190ED0u;
    SET_GPR_U32(ctx, 31, 0x190ED8u);
    ctx->pc = 0x190ED4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x190F48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_GetHd_0x190f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190ED8u; }
        else if (ctx->pc != 0x190ED8u) { ctx->pc = 0x190ED8u; }
    }
    if (ctx->pc != 0x190ED8u) { return; }
    ctx->pc = 0x190ED8u;
    // 0x190ed8: 0x40182d
    ctx->pc = 0x190ed8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190edc: 0x10600013
    ctx->pc = 0x190EDCu;
    {
        const bool branch_taken_0x190edc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x190EE0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 15904));
        if (branch_taken_0x190edc) {
            ctx->pc = 0x190F2Cu;
            goto label_190f2c;
        }
    }
    ctx->pc = 0x190EE4u;
    // 0x190ee4: 0x8e220034
    ctx->pc = 0x190ee4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x190ee8: 0x14400010
    ctx->pc = 0x190EE8u;
    {
        const bool branch_taken_0x190ee8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x190EECu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 15904)));
        if (branch_taken_0x190ee8) {
            ctx->pc = 0x190F2Cu;
            goto label_190f2c;
        }
    }
    ctx->pc = 0x190EF0u;
    // 0x190ef0: 0x8c620000
    ctx->pc = 0x190ef0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190ef4: 0x1040000d
    ctx->pc = 0x190EF4u;
    {
        const bool branch_taken_0x190ef4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x190EF8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x190ef4) {
            ctx->pc = 0x190F2Cu;
            goto label_190f2c;
        }
    }
    ctx->pc = 0x190EFCu;
    // 0x190efc: 0x8c670014
    ctx->pc = 0x190efcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x190f00: 0x8c65000c
    ctx->pc = 0x190f00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x190f04: 0xc05b184
    ctx->pc = 0x190F04u;
    SET_GPR_U32(ctx, 31, 0x190F0Cu);
    ctx->pc = 0x190F08u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->pc = 0x16C610u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_InsertHdrSfa_0x16c610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F0Cu; }
        else if (ctx->pc != 0x190F0Cu) { ctx->pc = 0x190F0Cu; }
    }
    if (ctx->pc != 0x190F0Cu) { return; }
    ctx->pc = 0x190F0Cu;
    // 0x190f0c: 0x200202d
    ctx->pc = 0x190f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190f10: 0xc05ca4a
    ctx->pc = 0x190F10u;
    SET_GPR_U32(ctx, 31, 0x190F18u);
    ctx->pc = 0x190F14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172928u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_SetTimeOfst_0x172928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F18u; }
        else if (ctx->pc != 0x190F18u) { ctx->pc = 0x190F18u; }
    }
    if (ctx->pc != 0x190F18u) { return; }
    ctx->pc = 0x190F18u;
    // 0x190f18: 0x3c020019
    ctx->pc = 0x190f18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)25 << 16));
    // 0x190f1c: 0x24030001
    ctx->pc = 0x190f1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x190f20: 0x24420430
    ctx->pc = 0x190f20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1072));
    // 0x190f24: 0xae230034
    ctx->pc = 0x190f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x190f28: 0xae22003c
    ctx->pc = 0x190f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_190f2c:
    // 0x190f2c: 0x102d
    ctx->pc = 0x190f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190f30: 0xdfbf0020
    ctx->pc = 0x190f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190f34: 0xdfb10010
    ctx->pc = 0x190f34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190f38: 0xdfb00000
    ctx->pc = 0x190f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190f3c: 0x3e00008
    ctx->pc = 0x190F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190F40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190F2Cu: goto label_190f2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x190F44u;
}
