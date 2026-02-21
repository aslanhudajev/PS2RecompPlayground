#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerSfxClearData
// Address: 0x24dee8 - 0x24df68
void PlayerSfxClearData_0x24dee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24dee8u;

    // 0x24dee8: 0x27bdffb0
    ctx->pc = 0x24dee8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24deec: 0xffbf0040
    ctx->pc = 0x24deecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24def0: 0xffb30030
    ctx->pc = 0x24def0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24def4: 0xffb20020
    ctx->pc = 0x24def4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24def8: 0xffb10010
    ctx->pc = 0x24def8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24defc: 0xffb00000
    ctx->pc = 0x24defcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24df00: 0x80802d
    ctx->pc = 0x24df00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df04: 0xa0902d
    ctx->pc = 0x24df04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df08: 0x1a400010
    ctx->pc = 0x24DF08u;
    {
        const bool branch_taken_0x24df08 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x24DF0Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24df08) {
            ctx->pc = 0x24DF4Cu;
            goto label_24df4c;
        }
    }
    ctx->pc = 0x24DF10u;
    // 0x24df10: 0x2413ffff
    ctx->pc = 0x24df10u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24df14: 0x0
    ctx->pc = 0x24df14u;
    // NOP
label_24df18:
    // 0x24df18: 0x8e020000
    ctx->pc = 0x24df18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24df1c: 0x30420100
    ctx->pc = 0x24df1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x24df20: 0x14400007
    ctx->pc = 0x24DF20u;
    {
        const bool branch_taken_0x24df20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24DF24u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x24df20) {
            ctx->pc = 0x24DF40u;
            goto label_24df40;
        }
    }
    ctx->pc = 0x24DF28u;
    // 0x24df28: 0x8e040008
    ctx->pc = 0x24df28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x24df2c: 0x4800004
    ctx->pc = 0x24DF2Cu;
    {
        const bool branch_taken_0x24df2c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x24df2c) {
            ctx->pc = 0x24DF40u;
            goto label_24df40;
        }
    }
    ctx->pc = 0x24DF34u;
    // 0x24df34: 0xc09e6da
    ctx->pc = 0x24DF34u;
    SET_GPR_U32(ctx, 31, 0x24DF3Cu);
    ctx->pc = 0x279B68u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearCustomEffect_0x279b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DF3Cu; }
    }
    if (ctx->pc != 0x24DF3Cu) { return; }
    ctx->pc = 0x24DF3Cu;
    // 0x24df3c: 0xae130008
    ctx->pc = 0x24df3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
label_24df40:
    // 0x24df40: 0x232102a
    ctx->pc = 0x24df40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x24df44: 0x1440fff4
    ctx->pc = 0x24DF44u;
    {
        const bool branch_taken_0x24df44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24DF48u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 80));
        if (branch_taken_0x24df44) {
            ctx->pc = 0x24DF18u;
            goto label_24df18;
        }
    }
    ctx->pc = 0x24DF4Cu;
label_24df4c:
    // 0x24df4c: 0xdfbf0040
    ctx->pc = 0x24df4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24df50: 0xdfb30030
    ctx->pc = 0x24df50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24df54: 0xdfb20020
    ctx->pc = 0x24df54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24df58: 0xdfb10010
    ctx->pc = 0x24df58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24df5c: 0xdfb00000
    ctx->pc = 0x24df5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24df60: 0x3e00008
    ctx->pc = 0x24DF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DF64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24DF18u: goto label_24df18;
            case 0x24DF40u: goto label_24df40;
            case 0x24DF4Cu: goto label_24df4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24DF68u;
}
