#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MenuGetModelInfo
// Address: 0x216a80 - 0x216b74
void MenuGetModelInfo_0x216a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x216a80u;

    // 0x216a80: 0x3c020036
    ctx->pc = 0x216a80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x216a84: 0x8c42dee0
    ctx->pc = 0x216a84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x216a88: 0x3c03003c
    ctx->pc = 0x216a88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x216a8c: 0x8c420038
    ctx->pc = 0x216a8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x216a90: 0x8c420000
    ctx->pc = 0x216a90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216a94: 0xac62cf48
    ctx->pc = 0x216a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954824), GPR_U32(ctx, 2));
    // 0x216a98: 0x3c020032
    ctx->pc = 0x216a98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x216a9c: 0xac40f8d0
    ctx->pc = 0x216a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965456), GPR_U32(ctx, 0));
    // 0x216aa0: 0x202d
    ctx->pc = 0x216aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216aa4: 0x3c02003c
    ctx->pc = 0x216aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x216aa8: 0x2447cf50
    ctx->pc = 0x216aa8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294954832));
    // 0x216aac: 0x3c02003c
    ctx->pc = 0x216aacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x216ab0: 0x2446cf90
    ctx->pc = 0x216ab0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294954896));
    // 0x216ab4: 0x3c02003c
    ctx->pc = 0x216ab4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x216ab8: 0x2445cfd0
    ctx->pc = 0x216ab8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294954960));
    // 0x216abc: 0x0
    ctx->pc = 0x216abcu;
    // NOP
label_216ac0:
    // 0x216ac0: 0x41880
    ctx->pc = 0x216ac0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x216ac4: 0x671021
    ctx->pc = 0x216ac4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x216ac8: 0xac400000
    ctx->pc = 0x216ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x216acc: 0x661021
    ctx->pc = 0x216accu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x216ad0: 0xac400000
    ctx->pc = 0x216ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x216ad4: 0x651821
    ctx->pc = 0x216ad4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x216ad8: 0x24840001
    ctx->pc = 0x216ad8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x216adc: 0x28820010
    ctx->pc = 0x216adcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 16));
    // 0x216ae0: 0x1440fff7
    ctx->pc = 0x216AE0u;
    {
        const bool branch_taken_0x216ae0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x216AE4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x216ae0) {
            ctx->pc = 0x216AC0u;
            goto label_216ac0;
        }
    }
    ctx->pc = 0x216AE8u;
    // 0x216ae8: 0x202d
    ctx->pc = 0x216ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216aec: 0x3c02003c
    ctx->pc = 0x216aecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x216af0: 0x2446cfd0
    ctx->pc = 0x216af0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294954960));
    // 0x216af4: 0x3c02003c
    ctx->pc = 0x216af4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x216af8: 0x2445d030
    ctx->pc = 0x216af8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294955056));
    // 0x216afc: 0x41080
    ctx->pc = 0x216afcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_216b00:
    // 0x216b00: 0x461821
    ctx->pc = 0x216b00u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x216b04: 0xac600000
    ctx->pc = 0x216b04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x216b08: 0x451021
    ctx->pc = 0x216b08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x216b0c: 0xac400000
    ctx->pc = 0x216b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x216b10: 0x24840001
    ctx->pc = 0x216b10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x216b14: 0x28820018
    ctx->pc = 0x216b14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 24));
    // 0x216b18: 0x1440fff9
    ctx->pc = 0x216B18u;
    {
        const bool branch_taken_0x216b18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x216B1Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x216b18) {
            ctx->pc = 0x216B00u;
            goto label_216b00;
        }
    }
    ctx->pc = 0x216B20u;
    // 0x216b20: 0x3c02003c
    ctx->pc = 0x216b20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x216b24: 0xac40d0ac
    ctx->pc = 0x216b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955180), GPR_U32(ctx, 0));
    // 0x216b28: 0x3c02003c
    ctx->pc = 0x216b28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x216b2c: 0xac40d0f8
    ctx->pc = 0x216b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955256), GPR_U32(ctx, 0));
    // 0x216b30: 0x3c03003c
    ctx->pc = 0x216b30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x216b34: 0x2402000f
    ctx->pc = 0x216b34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x216b38: 0xac62cf40
    ctx->pc = 0x216b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954816), GPR_U32(ctx, 2));
    // 0x216b3c: 0x3c03003c
    ctx->pc = 0x216b3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x216b40: 0x24020008
    ctx->pc = 0x216b40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x216b44: 0xac62cf44
    ctx->pc = 0x216b44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954820), GPR_U32(ctx, 2));
    // 0x216b48: 0x3c02003c
    ctx->pc = 0x216b48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x216b4c: 0xac40d0b4
    ctx->pc = 0x216b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955188), GPR_U32(ctx, 0));
    // 0x216b50: 0x3c02003c
    ctx->pc = 0x216b50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x216b54: 0xac40d0b0
    ctx->pc = 0x216b54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955184), GPR_U32(ctx, 0));
    // 0x216b58: 0x3c02003c
    ctx->pc = 0x216b58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x216b5c: 0xac40d0b8
    ctx->pc = 0x216b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955192), GPR_U32(ctx, 0));
    // 0x216b60: 0x3c02003c
    ctx->pc = 0x216b60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x216b64: 0xac40d0d8
    ctx->pc = 0x216b64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955224), GPR_U32(ctx, 0));
    // 0x216b68: 0x3c02003c
    ctx->pc = 0x216b68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x216b6c: 0x3e00008
    ctx->pc = 0x216B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216B70u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954800), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216AC0u: goto label_216ac0;
            case 0x216B00u: goto label_216b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x216B74u;
}
