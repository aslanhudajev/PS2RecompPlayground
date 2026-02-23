#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getRam
// Address: 0x1a1d30 - 0x1a1e24
void getRam_0x1a1d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getRam");


    ctx->pc = 0x1a1d30u;

    // 0x1a1d30: 0x8c880004
    ctx->pc = 0x1a1d30u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a1d34: 0x3c020051
    ctx->pc = 0x1a1d34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1a1d38: 0x24475040
    ctx->pc = 0x1a1d38u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 20544));
    // 0x1a1d3c: 0x3c020051
    ctx->pc = 0x1a1d3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1a1d40: 0x24435040
    ctx->pc = 0x1a1d40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 20544));
    // 0x1a1d44: 0x8c860008
    ctx->pc = 0x1a1d44u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a1d48: 0x81080
    ctx->pc = 0x1a1d48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a1d4c: 0xe23821
    ctx->pc = 0x1a1d4cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a1d50: 0x8c820000
    ctx->pc = 0x1a1d50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1d54: 0x63080
    ctx->pc = 0x1a1d54u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a1d58: 0x21023
    ctx->pc = 0x1a1d58u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1a1d5c: 0xac820000
    ctx->pc = 0x1a1d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a1d60: 0x8c820000
    ctx->pc = 0x1a1d60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1d64: 0x451023
    ctx->pc = 0x1a1d64u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a1d68: 0x28410005
    ctx->pc = 0x1a1d68u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 5));
    // 0x1a1d6c: 0x1020000d
    ctx->pc = 0x1A1D6Cu;
    {
        const bool branch_taken_0x1a1d6c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1D70u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        if (branch_taken_0x1a1d6c) {
            ctx->pc = 0x1A1DA4u;
            goto label_1a1da4;
        }
    }
    ctx->pc = 0x1A1D74u;
    // 0x1a1d74: 0x8c820008
    ctx->pc = 0x1a1d74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a1d78: 0xace20008
    ctx->pc = 0x1a1d78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x1a1d7c: 0x8c820004
    ctx->pc = 0x1a1d7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a1d80: 0xacc20004
    ctx->pc = 0x1a1d80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1a1d84: 0x8c830000
    ctx->pc = 0x1a1d84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1d88: 0x31080
    ctx->pc = 0x1a1d88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a1d8c: 0x441021
    ctx->pc = 0x1a1d8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a1d90: 0xac43fffc
    ctx->pc = 0x1a1d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 3));
    // 0x1a1d94: 0x8f82892c
    ctx->pc = 0x1a1d94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936876)));
    // 0x1a1d98: 0x2442ffff
    ctx->pc = 0x1a1d98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a1d9c: 0x10000019
    ctx->pc = 0x1A1D9Cu;
    {
        const bool branch_taken_0x1a1d9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1DA0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 2));
        if (branch_taken_0x1a1d9c) {
            ctx->pc = 0x1A1E04u;
            goto label_1a1e04;
        }
    }
    ctx->pc = 0x1A1DA4u;
label_1a1da4:
    // 0x1a1da4: 0x54080
    ctx->pc = 0x1a1da4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a1da8: 0x21823
    ctx->pc = 0x1a1da8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1a1dac: 0x884021
    ctx->pc = 0x1a1dacu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1a1db0: 0xad030000
    ctx->pc = 0x1a1db0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1a1db4: 0x8c830004
    ctx->pc = 0x1a1db4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a1db8: 0xa21021
    ctx->pc = 0x1a1db8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a1dbc: 0x21080
    ctx->pc = 0x1a1dbcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a1dc0: 0x441021
    ctx->pc = 0x1a1dc0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a1dc4: 0xad030004
    ctx->pc = 0x1a1dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x1a1dc8: 0x8c830008
    ctx->pc = 0x1a1dc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a1dcc: 0xad030008
    ctx->pc = 0x1a1dccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x1a1dd0: 0x8d030000
    ctx->pc = 0x1a1dd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a1dd4: 0xac43fffc
    ctx->pc = 0x1a1dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 3));
    // 0x1a1dd8: 0x8ce20008
    ctx->pc = 0x1a1dd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1a1ddc: 0x451021
    ctx->pc = 0x1a1ddcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a1de0: 0xace20008
    ctx->pc = 0x1a1de0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x1a1de4: 0x8cc20004
    ctx->pc = 0x1a1de4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a1de8: 0x451021
    ctx->pc = 0x1a1de8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a1dec: 0xacc20004
    ctx->pc = 0x1a1decu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1a1df0: 0xac850000
    ctx->pc = 0x1a1df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1a1df4: 0x8c820000
    ctx->pc = 0x1a1df4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1df8: 0x21080
    ctx->pc = 0x1a1df8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a1dfc: 0x441021
    ctx->pc = 0x1a1dfcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a1e00: 0xac45fffc
    ctx->pc = 0x1a1e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 5));
label_1a1e04:
    // 0x1a1e04: 0x8f858928
    ctx->pc = 0x1a1e04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294936872)));
    // 0x1a1e08: 0x8c830000
    ctx->pc = 0x1a1e08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1e0c: 0x2482000c
    ctx->pc = 0x1a1e0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1a1e10: 0xa31823
    ctx->pc = 0x1a1e10u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a1e14: 0xaf838928
    ctx->pc = 0x1a1e14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936872), GPR_U32(ctx, 3));
    // 0x1a1e18: 0xac820004
    ctx->pc = 0x1a1e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1a1e1c: 0x3e00008
    ctx->pc = 0x1A1E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1E20u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1DA4u: goto label_1a1da4;
            case 0x1A1E04u: goto label_1a1e04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1E24u;
}
