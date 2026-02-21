#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setLmapInfo
// Address: 0x2bea00 - 0x2beaa8
void setLmapInfo_0x2bea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bea00u;

    // 0x2bea00: 0x3c020036
    ctx->pc = 0x2bea00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2bea04: 0x8c42dee0
    ctx->pc = 0x2bea04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2bea08: 0x8c430038
    ctx->pc = 0x2bea08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2bea0c: 0x52900
    ctx->pc = 0x2bea0cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x2bea10: 0x652821
    ctx->pc = 0x2bea10u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2bea14: 0x8ca20004
    ctx->pc = 0x2bea14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2bea18: 0x63180
    ctx->pc = 0x2bea18u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 6));
    // 0x2bea1c: 0x8c420058
    ctx->pc = 0x2bea1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2bea20: 0xc22821
    ctx->pc = 0x2bea20u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2bea24: 0x94a20008
    ctx->pc = 0x2bea24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bea28: 0x30420100
    ctx->pc = 0x2bea28u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x2bea2c: 0x10400006
    ctx->pc = 0x2BEA2Cu;
    {
        const bool branch_taken_0x2bea2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BEA30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bea2c) {
            ctx->pc = 0x2BEA48u;
            goto label_2bea48;
        }
    }
    ctx->pc = 0x2BEA34u;
    // 0x2bea34: 0x8c630004
    ctx->pc = 0x2bea34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bea38: 0x8c4285f0
    ctx->pc = 0x2bea38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294936048)));
    // 0x2bea3c: 0x21180
    ctx->pc = 0x2bea3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x2bea40: 0x8c630058
    ctx->pc = 0x2bea40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2bea44: 0x432821
    ctx->pc = 0x2bea44u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bea48:
    // 0x2bea48: 0x94a30038
    ctx->pc = 0x2bea48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2bea4c: 0x94a2003c
    ctx->pc = 0x2bea4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2bea50: 0xac830008
    ctx->pc = 0x2bea50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2bea54: 0x21140
    ctx->pc = 0x2bea54u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x2bea58: 0xac82000c
    ctx->pc = 0x2bea58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2bea5c: 0xdc820008
    ctx->pc = 0x2bea5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2bea60: 0xdca30020
    ctx->pc = 0x2bea60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2bea64: 0x43102d
    ctx->pc = 0x2bea64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2bea68: 0xfc820008
    ctx->pc = 0x2bea68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x2bea6c: 0x8c82000c
    ctx->pc = 0x2bea6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2bea70: 0x3c03ffff
    ctx->pc = 0x2bea70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2bea74: 0x3463ffe7
    ctx->pc = 0x2bea74u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65511));
    // 0x2bea78: 0x431024
    ctx->pc = 0x2bea78u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bea7c: 0x34420008
    ctx->pc = 0x2bea7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
    // 0x2bea80: 0xac82000c
    ctx->pc = 0x2bea80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2bea84: 0x3c020005
    ctx->pc = 0x2bea84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x2bea88: 0x3442c000
    ctx->pc = 0x2bea88u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49152));
    // 0x2bea8c: 0xac820000
    ctx->pc = 0x2bea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2bea90: 0x24020089
    ctx->pc = 0x2bea90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 137));
    // 0x2bea94: 0xac820004
    ctx->pc = 0x2bea94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2bea98: 0x3c020037
    ctx->pc = 0x2bea98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bea9c: 0x8c422768
    ctx->pc = 0x2bea9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10088)));
    // 0x2beaa0: 0x3e00008
    ctx->pc = 0x2BEAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEAA4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BEA48u: goto label_2bea48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BEAA8u;
}
