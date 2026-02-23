#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__13EnVtxMgrClassFv
// Address: 0x1e1d60 - 0x1e1e68
void init__13EnVtxMgrClassFv_0x1e1d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__13EnVtxMgrClassFv");


    ctx->pc = 0x1e1d60u;

    // 0x1e1d60: 0x3c030050
    ctx->pc = 0x1e1d60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e1d64: 0x70002e28
    ctx->pc = 0x1e1d64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e1d68: 0x246402e0
    ctx->pc = 0x1e1d68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 736));
label_1e1d6c:
    // 0x1e1d6c: 0xac800000
    ctx->pc = 0x1e1d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1e1d70: 0xac800004
    ctx->pc = 0x1e1d70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1e1d74: 0xac800008
    ctx->pc = 0x1e1d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1e1d78: 0xac80000c
    ctx->pc = 0x1e1d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1e1d7c: 0xac800010
    ctx->pc = 0x1e1d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1e1d80: 0xac800014
    ctx->pc = 0x1e1d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1e1d84: 0xac800018
    ctx->pc = 0x1e1d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1e1d88: 0xac80001c
    ctx->pc = 0x1e1d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1e1d8c: 0xac800020
    ctx->pc = 0x1e1d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1e1d90: 0xac800024
    ctx->pc = 0x1e1d90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1e1d94: 0xac800028
    ctx->pc = 0x1e1d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1e1d98: 0xac80002c
    ctx->pc = 0x1e1d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1e1d9c: 0xac800030
    ctx->pc = 0x1e1d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1e1da0: 0xac800034
    ctx->pc = 0x1e1da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1e1da4: 0xac800038
    ctx->pc = 0x1e1da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1e1da8: 0xac80003c
    ctx->pc = 0x1e1da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1e1dac: 0xac800040
    ctx->pc = 0x1e1dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1e1db0: 0xac800044
    ctx->pc = 0x1e1db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1e1db4: 0xac800048
    ctx->pc = 0x1e1db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1e1db8: 0xac80004c
    ctx->pc = 0x1e1db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x1e1dbc: 0xac800050
    ctx->pc = 0x1e1dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x1e1dc0: 0xac800054
    ctx->pc = 0x1e1dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x1e1dc4: 0xac800058
    ctx->pc = 0x1e1dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x1e1dc8: 0xac80005c
    ctx->pc = 0x1e1dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x1e1dcc: 0xac800060
    ctx->pc = 0x1e1dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x1e1dd0: 0xac800064
    ctx->pc = 0x1e1dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x1e1dd4: 0xac800068
    ctx->pc = 0x1e1dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x1e1dd8: 0xac80006c
    ctx->pc = 0x1e1dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x1e1ddc: 0xac800070
    ctx->pc = 0x1e1ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x1e1de0: 0xac800074
    ctx->pc = 0x1e1de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x1e1de4: 0xac800078
    ctx->pc = 0x1e1de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x1e1de8: 0xac80007c
    ctx->pc = 0x1e1de8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x1e1dec: 0xac800080
    ctx->pc = 0x1e1decu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x1e1df0: 0xac800084
    ctx->pc = 0x1e1df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x1e1df4: 0xac800088
    ctx->pc = 0x1e1df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x1e1df8: 0xac80008c
    ctx->pc = 0x1e1df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x1e1dfc: 0xac800090
    ctx->pc = 0x1e1dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x1e1e00: 0xac800094
    ctx->pc = 0x1e1e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x1e1e04: 0xac800098
    ctx->pc = 0x1e1e04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x1e1e08: 0x24a50008
    ctx->pc = 0x1e1e08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e1e0c: 0xac80009c
    ctx->pc = 0x1e1e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x1e1e10: 0x28a30042
    ctx->pc = 0x1e1e10u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 66));
    // 0x1e1e14: 0x1460ffd5
    ctx->pc = 0x1E1E14u;
    {
        const bool branch_taken_0x1e1e14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E1E18u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 160));
        if (branch_taken_0x1e1e14) {
            ctx->pc = 0x1E1D6Cu;
            goto label_1e1d6c;
        }
    }
    ctx->pc = 0x1E1E1Cu;
    // 0x1e1e1c: 0x28a1004a
    ctx->pc = 0x1e1e1cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 74));
    // 0x1e1e20: 0x1020000f
    ctx->pc = 0x1E1E20u;
    {
        const bool branch_taken_0x1e1e20 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E1E24u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x1e1e20) {
            ctx->pc = 0x1E1E60u;
            goto label_1e1e60;
        }
    }
    ctx->pc = 0x1E1E28u;
    // 0x1e1e28: 0x651821
    ctx->pc = 0x1e1e28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e1e2c: 0x32080
    ctx->pc = 0x1e1e2cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e1e30: 0x3c030050
    ctx->pc = 0x1e1e30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e1e34: 0x246302e0
    ctx->pc = 0x1e1e34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 736));
    // 0x1e1e38: 0x642021
    ctx->pc = 0x1e1e38u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e1e3c:
    // 0x1e1e3c: 0xac800000
    ctx->pc = 0x1e1e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1e1e40: 0xac800004
    ctx->pc = 0x1e1e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1e1e44: 0xac800008
    ctx->pc = 0x1e1e44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1e1e48: 0xac80000c
    ctx->pc = 0x1e1e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1e1e4c: 0x24a50001
    ctx->pc = 0x1e1e4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e1e50: 0xac800010
    ctx->pc = 0x1e1e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1e1e54: 0x28a3004a
    ctx->pc = 0x1e1e54u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 74));
    // 0x1e1e58: 0x1460fff8
    ctx->pc = 0x1E1E58u;
    {
        const bool branch_taken_0x1e1e58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E1E5Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20));
        if (branch_taken_0x1e1e58) {
            ctx->pc = 0x1E1E3Cu;
            goto label_1e1e3c;
        }
    }
    ctx->pc = 0x1E1E60u;
label_1e1e60:
    // 0x1e1e60: 0x3e00008
    ctx->pc = 0x1E1E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1D6Cu: goto label_1e1d6c;
            case 0x1E1E3Cu: goto label_1e1e3c;
            case 0x1E1E60u: goto label_1e1e60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E1E68u;
}
