#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbCloseDmacHandler
// Address: 0x2a5d90 - 0x2a5e64
void pbCloseDmacHandler_0x2a5d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5d90u;

    // 0x2a5d90: 0x27bdffd0
    ctx->pc = 0x2a5d90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a5d94: 0xffbf0020
    ctx->pc = 0x2a5d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a5d98: 0xffbe0010
    ctx->pc = 0x2a5d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2a5d9c: 0xffb00000
    ctx->pc = 0x2a5d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a5da0: 0x3a0f02d
    ctx->pc = 0x2a5da0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5da4: 0x3c100036
    ctx->pc = 0x2a5da4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a5da8: 0x8e10dee0
    ctx->pc = 0x2a5da8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294958816)));
    // 0x2a5dac: 0x8e020020
    ctx->pc = 0x2a5dacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5db0: 0x10400025
    ctx->pc = 0x2A5DB0u;
    {
        const bool branch_taken_0x2a5db0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a5db0) {
            ctx->pc = 0x2A5E48u;
            goto label_2a5e48;
        }
    }
    ctx->pc = 0x2A5DB8u;
    // 0x2a5db8: 0x8e020020
    ctx->pc = 0x2a5db8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5dbc: 0x8c4300b8
    ctx->pc = 0x2a5dbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x2a5dc0: 0x4600009
    ctx->pc = 0x2A5DC0u;
    {
        const bool branch_taken_0x2a5dc0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2a5dc0) {
            ctx->pc = 0x2A5DE8u;
            goto label_2a5de8;
        }
    }
    ctx->pc = 0x2A5DC8u;
    // 0x2a5dc8: 0x8e020020
    ctx->pc = 0x2a5dc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5dcc: 0x202d
    ctx->pc = 0x2a5dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5dd0: 0x8c4500b8
    ctx->pc = 0x2a5dd0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x2a5dd4: 0xc0c0cc4
    ctx->pc = 0x2A5DD4u;
    SET_GPR_U32(ctx, 31, 0x2A5DDCu);
    ctx->pc = 0x303310u;
    {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x303310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5DDCu; }
    }
    if (ctx->pc != 0x2A5DDCu) { return; }
    ctx->pc = 0x2A5DDCu;
    // 0x2a5ddc: 0x8e020020
    ctx->pc = 0x2a5ddcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5de0: 0x2403ffff
    ctx->pc = 0x2a5de0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a5de4: 0xac4300b8
    ctx->pc = 0x2a5de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 3));
label_2a5de8:
    // 0x2a5de8: 0x8e020020
    ctx->pc = 0x2a5de8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5dec: 0x8c4300bc
    ctx->pc = 0x2a5decu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x2a5df0: 0x4600009
    ctx->pc = 0x2A5DF0u;
    {
        const bool branch_taken_0x2a5df0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2a5df0) {
            ctx->pc = 0x2A5E18u;
            goto label_2a5e18;
        }
    }
    ctx->pc = 0x2A5DF8u;
    // 0x2a5df8: 0x8e020020
    ctx->pc = 0x2a5df8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5dfc: 0x24040001
    ctx->pc = 0x2a5dfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5e00: 0x8c4500bc
    ctx->pc = 0x2a5e00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x2a5e04: 0xc0c0cc4
    ctx->pc = 0x2A5E04u;
    SET_GPR_U32(ctx, 31, 0x2A5E0Cu);
    ctx->pc = 0x303310u;
    {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x303310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E0Cu; }
    }
    if (ctx->pc != 0x2A5E0Cu) { return; }
    ctx->pc = 0x2A5E0Cu;
    // 0x2a5e0c: 0x8e020020
    ctx->pc = 0x2a5e0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5e10: 0x2403ffff
    ctx->pc = 0x2a5e10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a5e14: 0xac4300bc
    ctx->pc = 0x2a5e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
label_2a5e18:
    // 0x2a5e18: 0x8e020020
    ctx->pc = 0x2a5e18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5e1c: 0x8c4300c0
    ctx->pc = 0x2a5e1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2a5e20: 0x4600009
    ctx->pc = 0x2A5E20u;
    {
        const bool branch_taken_0x2a5e20 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2a5e20) {
            ctx->pc = 0x2A5E48u;
            goto label_2a5e48;
        }
    }
    ctx->pc = 0x2A5E28u;
    // 0x2a5e28: 0x8e020020
    ctx->pc = 0x2a5e28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5e2c: 0x24040002
    ctx->pc = 0x2a5e2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5e30: 0x8c4500c0
    ctx->pc = 0x2a5e30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2a5e34: 0xc0c0cc4
    ctx->pc = 0x2A5E34u;
    SET_GPR_U32(ctx, 31, 0x2A5E3Cu);
    ctx->pc = 0x303310u;
    {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x303310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E3Cu; }
    }
    if (ctx->pc != 0x2A5E3Cu) { return; }
    ctx->pc = 0x2A5E3Cu;
    // 0x2a5e3c: 0x8e020020
    ctx->pc = 0x2a5e3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5e40: 0x2403ffff
    ctx->pc = 0x2a5e40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a5e44: 0xac4300c0
    ctx->pc = 0x2a5e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
label_2a5e48:
    // 0x2a5e48: 0x3c0e82d
    ctx->pc = 0x2a5e48u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e4c: 0xdfbf0020
    ctx->pc = 0x2a5e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5e50: 0xdfbe0010
    ctx->pc = 0x2a5e50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5e54: 0xdfb00000
    ctx->pc = 0x2a5e54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5e58: 0x27bd0030
    ctx->pc = 0x2a5e58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a5e5c: 0x3e00008
    ctx->pc = 0x2A5E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A5DE8u: goto label_2a5de8;
            case 0x2A5E18u: goto label_2a5e18;
            case 0x2A5E48u: goto label_2a5e48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A5E64u;
}
