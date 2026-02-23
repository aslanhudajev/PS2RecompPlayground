#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_DecodeSomePic
// Address: 0x195db0 - 0x195e3c
void sfmpv_DecodeSomePic_0x195db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_DecodeSomePic");


    ctx->pc = 0x195db0u;

    // 0x195db0: 0x27bdffc0
    ctx->pc = 0x195db0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195db4: 0xffb10020
    ctx->pc = 0x195db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x195db8: 0xffb00010
    ctx->pc = 0x195db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x195dbc: 0x27b10004
    ctx->pc = 0x195dbcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 4));
    // 0x195dc0: 0xffbf0030
    ctx->pc = 0x195dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x195dc4: 0x80802d
    ctx->pc = 0x195dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195dc8: 0x200202d
    ctx->pc = 0x195dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195dcc: 0x0
    ctx->pc = 0x195dccu;
    // NOP
label_195dd0:
    // 0x195dd0: 0x3a0282d
    ctx->pc = 0x195dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195dd4: 0xc065790
    ctx->pc = 0x195DD4u;
    SET_GPR_U32(ctx, 31, 0x195DDCu);
    ctx->pc = 0x195DD8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_RingGetRead_0x195e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195DDCu; }
        else if (ctx->pc != 0x195DDCu) { ctx->pc = 0x195DDCu; }
    }
    if (ctx->pc != 0x195DDCu) { return; }
    ctx->pc = 0x195DDCu;
    // 0x195ddc: 0x40182d
    ctx->pc = 0x195ddcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195de0: 0x14600010
    ctx->pc = 0x195DE0u;
    {
        const bool branch_taken_0x195de0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x195DE4u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x195de0) {
            ctx->pc = 0x195E24u;
            goto label_195e24;
        }
    }
    ctx->pc = 0x195DE8u;
    // 0x195de8: 0x200202d
    ctx->pc = 0x195de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195dec: 0x8fa50000
    ctx->pc = 0x195decu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195df0: 0x27a70008
    ctx->pc = 0x195df0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 8));
    // 0x195df4: 0xc0658da
    ctx->pc = 0x195DF4u;
    SET_GPR_U32(ctx, 31, 0x195DFCu);
    ctx->pc = 0x195DF8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 12));
    ctx->pc = 0x196368u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_DecodeOneUnit_0x196368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195DFCu; }
        else if (ctx->pc != 0x195DFCu) { ctx->pc = 0x195DFCu; }
    }
    if (ctx->pc != 0x195DFCu) { return; }
    ctx->pc = 0x195DFCu;
    // 0x195dfc: 0x40182d
    ctx->pc = 0x195dfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e00: 0x14600008
    ctx->pc = 0x195E00u;
    {
        const bool branch_taken_0x195e00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x195E04u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x195e00) {
            ctx->pc = 0x195E24u;
            goto label_195e24;
        }
    }
    ctx->pc = 0x195E08u;
    // 0x195e08: 0xc0658d2
    ctx->pc = 0x195E08u;
    SET_GPR_U32(ctx, 31, 0x195E10u);
    ctx->pc = 0x195E0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x196348u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_RingAddRead_0x196348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E10u; }
        else if (ctx->pc != 0x195E10u) { ctx->pc = 0x195E10u; }
    }
    if (ctx->pc != 0x195E10u) { return; }
    ctx->pc = 0x195E10u;
    // 0x195e10: 0x40182d
    ctx->pc = 0x195e10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e14: 0x14600003
    ctx->pc = 0x195E14u;
    {
        const bool branch_taken_0x195e14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x195E18u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
        if (branch_taken_0x195e14) {
            ctx->pc = 0x195E24u;
            goto label_195e24;
        }
    }
    ctx->pc = 0x195E1Cu;
    // 0x195e1c: 0x5440ffec
    ctx->pc = 0x195E1Cu;
    {
        const bool branch_taken_0x195e1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x195e1c) {
            ctx->pc = 0x195E20u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x195DD0u;
            goto label_195dd0;
        }
    }
    ctx->pc = 0x195E24u;
label_195e24:
    // 0x195e24: 0xdfbf0030
    ctx->pc = 0x195e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195e28: 0x60102d
    ctx->pc = 0x195e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e2c: 0xdfb10020
    ctx->pc = 0x195e2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195e30: 0xdfb00010
    ctx->pc = 0x195e30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195e34: 0x3e00008
    ctx->pc = 0x195E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195E38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195DD0u: goto label_195dd0;
            case 0x195E24u: goto label_195e24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195E3Cu;
}
