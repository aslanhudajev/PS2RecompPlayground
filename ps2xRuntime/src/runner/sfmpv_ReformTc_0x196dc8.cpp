#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_ReformTc
// Address: 0x196dc8 - 0x196e8c
void sfmpv_ReformTc_0x196dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_ReformTc");


    ctx->pc = 0x196dc8u;

    // 0x196dc8: 0x27bdffa0
    ctx->pc = 0x196dc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x196dcc: 0xffb20020
    ctx->pc = 0x196dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x196dd0: 0xffb10010
    ctx->pc = 0x196dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x196dd4: 0xa0902d
    ctx->pc = 0x196dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196dd8: 0xffb40040
    ctx->pc = 0x196dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x196ddc: 0x80882d
    ctx->pc = 0x196ddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196de0: 0xffb30030
    ctx->pc = 0x196de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x196de4: 0xe0a02d
    ctx->pc = 0x196de4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196de8: 0xffb00000
    ctx->pc = 0x196de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x196dec: 0xc0982d
    ctx->pc = 0x196decu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196df0: 0xffbf0050
    ctx->pc = 0x196df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x196df4: 0xc0674c2
    ctx->pc = 0x196DF4u;
    SET_GPR_U32(ctx, 31, 0x196DFCu);
    ctx->pc = 0x196DF8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 52));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196DFCu; }
        else if (ctx->pc != 0x196DFCu) { ctx->pc = 0x196DFCu; }
    }
    if (ctx->pc != 0x196DFCu) { return; }
    ctx->pc = 0x196DFCu;
    // 0x196dfc: 0x40802d
    ctx->pc = 0x196dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e00: 0x5600000e
    ctx->pc = 0x196E00u;
    {
        const bool branch_taken_0x196e00 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x196e00) {
            ctx->pc = 0x196E04u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x196E3Cu;
            goto label_196e3c;
        }
    }
    ctx->pc = 0x196E08u;
    // 0x196e08: 0x6610007
    ctx->pc = 0x196E08u;
    {
        const bool branch_taken_0x196e08 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x196E0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196e08) {
            ctx->pc = 0x196E28u;
            goto label_196e28;
        }
    }
    ctx->pc = 0x196E10u;
    // 0x196e10: 0x1280000a
    ctx->pc = 0x196E10u;
    {
        const bool branch_taken_0x196e10 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x196E14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x196e10) {
            ctx->pc = 0x196E3Cu;
            goto label_196e3c;
        }
    }
    ctx->pc = 0x196E18u;
    // 0x196e18: 0xc065ba4
    ctx->pc = 0x196E18u;
    SET_GPR_U32(ctx, 31, 0x196E20u);
    ctx->pc = 0x196E1Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x196E90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_DetectTcErr_0x196e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E20u; }
        else if (ctx->pc != 0x196E20u) { ctx->pc = 0x196E20u; }
    }
    if (ctx->pc != 0x196E20u) { return; }
    ctx->pc = 0x196E20u;
    // 0x196e20: 0x10400005
    ctx->pc = 0x196E20u;
    {
        const bool branch_taken_0x196e20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x196E24u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196e20) {
            ctx->pc = 0x196E38u;
            goto label_196e38;
        }
    }
    ctx->pc = 0x196E28u;
label_196e28:
    // 0x196e28: 0x24050034
    ctx->pc = 0x196e28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 52));
    // 0x196e2c: 0x24060001
    ctx->pc = 0x196e2cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x196e30: 0xc067464
    ctx->pc = 0x196E30u;
    SET_GPR_U32(ctx, 31, 0x196E38u);
    ctx->pc = 0x196E34u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E38u; }
        else if (ctx->pc != 0x196E38u) { ctx->pc = 0x196E38u; }
    }
    if (ctx->pc != 0x196E38u) { return; }
    ctx->pc = 0x196E38u;
label_196e38:
    // 0x196e38: 0x24020001
    ctx->pc = 0x196e38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_196e3c:
    // 0x196e3c: 0x1602000c
    ctx->pc = 0x196E3Cu;
    {
        const bool branch_taken_0x196e3c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x196E40u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x196e3c) {
            ctx->pc = 0x196E70u;
            goto label_196e70;
        }
    }
    ctx->pc = 0x196E44u;
    // 0x196e44: 0x220202d
    ctx->pc = 0x196e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e48: 0x240282d
    ctx->pc = 0x196e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e4c: 0x260302d
    ctx->pc = 0x196e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e50: 0x280382d
    ctx->pc = 0x196e50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e54: 0xdfb40040
    ctx->pc = 0x196e54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196e58: 0xdfb30030
    ctx->pc = 0x196e58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196e5c: 0xdfb20020
    ctx->pc = 0x196e5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196e60: 0xdfb10010
    ctx->pc = 0x196e60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196e64: 0xdfb00000
    ctx->pc = 0x196e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196e68: 0x8065bcc
    ctx->pc = 0x196E68u;
    ctx->pc = 0x196E6Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x196F30u;
    sfmpv_DoReformTc_0x196f30(rdram, ctx, runtime); return;
    ctx->pc = 0x196E70u;
label_196e70:
    // 0x196e70: 0xdfb40040
    ctx->pc = 0x196e70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196e74: 0xdfb30030
    ctx->pc = 0x196e74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196e78: 0xdfb20020
    ctx->pc = 0x196e78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196e7c: 0xdfb10010
    ctx->pc = 0x196e7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196e80: 0xdfb00000
    ctx->pc = 0x196e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196e84: 0x3e00008
    ctx->pc = 0x196E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196E88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196E28u: goto label_196e28;
            case 0x196E38u: goto label_196e38;
            case 0x196E3Cu: goto label_196e3c;
            case 0x196E70u: goto label_196e70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196E8Cu;
}
