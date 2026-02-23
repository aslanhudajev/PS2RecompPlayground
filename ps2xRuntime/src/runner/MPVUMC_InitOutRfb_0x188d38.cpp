#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVUMC_InitOutRfb
// Address: 0x188d38 - 0x188dd4
void MPVUMC_InitOutRfb_0x188d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVUMC_InitOutRfb");


    ctx->pc = 0x188d38u;

    // 0x188d38: 0x8c820188
    ctx->pc = 0x188d38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x188d3c: 0x2408ffff
    ctx->pc = 0x188d3cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188d40: 0x8c86018c
    ctx->pc = 0x188d40u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 396)));
    // 0x188d44: 0x248a0200
    ctx->pc = 0x188d44u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 4), 512));
    // 0x188d48: 0x2445000f
    ctx->pc = 0x188d48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 15));
    // 0x188d4c: 0x105182a
    ctx->pc = 0x188d4cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 5)));
    // 0x188d50: 0x2442001e
    ctx->pc = 0x188d50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30));
    // 0x188d54: 0x24c9000f
    ctx->pc = 0x188d54u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 6), 15));
    // 0x188d58: 0xa3100b
    ctx->pc = 0x188d58u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x188d5c: 0x21103
    ctx->pc = 0x188d5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x188d60: 0x109182a
    ctx->pc = 0x188d60u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
    // 0x188d64: 0x24c6001e
    ctx->pc = 0x188d64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 30));
    // 0x188d68: 0x24470003
    ctx->pc = 0x188d68u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 3));
    // 0x188d6c: 0x123300b
    ctx->pc = 0x188d6cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 9));
    // 0x188d70: 0x24450006
    ctx->pc = 0x188d70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 6));
    // 0x188d74: 0x107182a
    ctx->pc = 0x188d74u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x188d78: 0x63103
    ctx->pc = 0x188d78u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x188d7c: 0xe3280b
    ctx->pc = 0x188d7cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 7));
    // 0x188d80: 0x8c8901f0
    ctx->pc = 0x188d80u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x188d84: 0x24470007
    ctx->pc = 0x188d84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 7));
    // 0x188d88: 0x61a80
    ctx->pc = 0x188d88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 10));
    // 0x188d8c: 0x2442000e
    ctx->pc = 0x188d8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14));
    // 0x188d90: 0x107402a
    ctx->pc = 0x188d90u;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x188d94: 0x52883
    ctx->pc = 0x188d94u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x188d98: 0xe8100b
    ctx->pc = 0x188d98u;
    if (GPR_U32(ctx, 8) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 7));
    // 0x188d9c: 0xa35818
    ctx->pc = 0x188d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)(uint32_t)result); }
    // 0x188da0: 0x63240
    ctx->pc = 0x188da0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 9));
    // 0x188da4: 0x210c3
    ctx->pc = 0x188da4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x188da8: 0xad490008
    ctx->pc = 0x188da8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x188dac: 0x461818
    ctx->pc = 0x188dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x188db0: 0x52980
    ctx->pc = 0x188db0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 6));
    // 0x188db4: 0x21180
    ctx->pc = 0x188db4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x188db8: 0xa545000e
    ctx->pc = 0x188db8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x188dbc: 0x1696021
    ctx->pc = 0x188dbcu;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x188dc0: 0xa542000c
    ctx->pc = 0x188dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x188dc4: 0xac8c0200
    ctx->pc = 0x188dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 12));
    // 0x188dc8: 0x6c3021
    ctx->pc = 0x188dc8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x188dcc: 0x3e00008
    ctx->pc = 0x188DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188DD0u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188DD4u;
}
