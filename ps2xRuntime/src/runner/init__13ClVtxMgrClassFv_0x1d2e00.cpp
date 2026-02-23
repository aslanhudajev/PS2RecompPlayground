#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__13ClVtxMgrClassFv
// Address: 0x1d2e00 - 0x1d2ec0
void init__13ClVtxMgrClassFv_0x1d2e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__13ClVtxMgrClassFv");


    ctx->pc = 0x1d2e00u;

    // 0x1d2e00: 0x3c030050
    ctx->pc = 0x1d2e00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1d2e04: 0x70002e28
    ctx->pc = 0x1d2e04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d2e08: 0x2464fb10
    ctx->pc = 0x1d2e08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294966032));
label_1d2e0c:
    // 0x1d2e0c: 0xac800000
    ctx->pc = 0x1d2e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d2e10: 0xac800004
    ctx->pc = 0x1d2e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1d2e14: 0xac800008
    ctx->pc = 0x1d2e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1d2e18: 0xac80000c
    ctx->pc = 0x1d2e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1d2e1c: 0xac800010
    ctx->pc = 0x1d2e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1d2e20: 0xac800014
    ctx->pc = 0x1d2e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1d2e24: 0xac800018
    ctx->pc = 0x1d2e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1d2e28: 0xac80001c
    ctx->pc = 0x1d2e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1d2e2c: 0xac800020
    ctx->pc = 0x1d2e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1d2e30: 0xac800024
    ctx->pc = 0x1d2e30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1d2e34: 0xac800028
    ctx->pc = 0x1d2e34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1d2e38: 0xac80002c
    ctx->pc = 0x1d2e38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1d2e3c: 0xac800030
    ctx->pc = 0x1d2e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1d2e40: 0xac800034
    ctx->pc = 0x1d2e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1d2e44: 0xac800038
    ctx->pc = 0x1d2e44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1d2e48: 0xac80003c
    ctx->pc = 0x1d2e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1d2e4c: 0xac800040
    ctx->pc = 0x1d2e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1d2e50: 0xac800044
    ctx->pc = 0x1d2e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1d2e54: 0xac800048
    ctx->pc = 0x1d2e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1d2e58: 0xac80004c
    ctx->pc = 0x1d2e58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x1d2e5c: 0xac800050
    ctx->pc = 0x1d2e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x1d2e60: 0xac800054
    ctx->pc = 0x1d2e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x1d2e64: 0xac800058
    ctx->pc = 0x1d2e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x1d2e68: 0x24a50008
    ctx->pc = 0x1d2e68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x1d2e6c: 0xac80005c
    ctx->pc = 0x1d2e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x1d2e70: 0x28a30007
    ctx->pc = 0x1d2e70u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 7));
    // 0x1d2e74: 0x1460ffe5
    ctx->pc = 0x1D2E74u;
    {
        const bool branch_taken_0x1d2e74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2E78u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 96));
        if (branch_taken_0x1d2e74) {
            ctx->pc = 0x1D2E0Cu;
            goto label_1d2e0c;
        }
    }
    ctx->pc = 0x1D2E7Cu;
    // 0x1d2e7c: 0x28a1000f
    ctx->pc = 0x1d2e7cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 15));
    // 0x1d2e80: 0x1020000d
    ctx->pc = 0x1D2E80u;
    {
        const bool branch_taken_0x1d2e80 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2E84u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x1d2e80) {
            ctx->pc = 0x1D2EB8u;
            goto label_1d2eb8;
        }
    }
    ctx->pc = 0x1D2E88u;
    // 0x1d2e88: 0x651821
    ctx->pc = 0x1d2e88u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d2e8c: 0x32080
    ctx->pc = 0x1d2e8cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d2e90: 0x3c030050
    ctx->pc = 0x1d2e90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1d2e94: 0x2463fb10
    ctx->pc = 0x1d2e94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966032));
    // 0x1d2e98: 0x642021
    ctx->pc = 0x1d2e98u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d2e9c:
    // 0x1d2e9c: 0xac800000
    ctx->pc = 0x1d2e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d2ea0: 0xac800004
    ctx->pc = 0x1d2ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1d2ea4: 0x24a50001
    ctx->pc = 0x1d2ea4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d2ea8: 0xac800008
    ctx->pc = 0x1d2ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1d2eac: 0x28a3000f
    ctx->pc = 0x1d2eacu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 15));
    // 0x1d2eb0: 0x1460fffa
    ctx->pc = 0x1D2EB0u;
    {
        const bool branch_taken_0x1d2eb0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2EB4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12));
        if (branch_taken_0x1d2eb0) {
            ctx->pc = 0x1D2E9Cu;
            goto label_1d2e9c;
        }
    }
    ctx->pc = 0x1D2EB8u;
label_1d2eb8:
    // 0x1d2eb8: 0x3e00008
    ctx->pc = 0x1D2EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2E0Cu: goto label_1d2e0c;
            case 0x1D2E9Cu: goto label_1d2e9c;
            case 0x1D2EB8u: goto label_1d2eb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2EC0u;
}
