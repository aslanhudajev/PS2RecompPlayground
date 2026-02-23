#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvumc_OutputIntra6blk
// Address: 0x188e78 - 0x188f54
void mpvumc_OutputIntra6blk_0x188e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvumc_OutputIntra6blk");


    ctx->pc = 0x188e78u;

    // 0x188e78: 0x8cad0000
    ctx->pc = 0x188e78u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x188e7c: 0x24030006
    ctx->pc = 0x188e7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x188e80: 0x24a50004
    ctx->pc = 0x188e80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x188e84: 0x24cbfff0
    ctx->pc = 0x188e84u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x188e88: 0x24a80004
    ctx->pc = 0x188e88u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 5), 4));
    // 0x188e8c: 0x8ca70000
    ctx->pc = 0x188e8cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_188e90:
    // 0x188e90: 0x6d1026
    ctx->pc = 0x188e90u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x188e94: 0x162300a
    ctx->pc = 0x188e94u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 11));
    // 0x188e98: 0x8d0a0000
    ctx->pc = 0x188e98u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x188e9c: 0x25050004
    ctx->pc = 0x188e9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 8), 4));
    // 0x188ea0: 0x246cffff
    ctx->pc = 0x188ea0u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x188ea4: 0x25080008
    ctx->pc = 0x188ea4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 8));
    // 0x188ea8: 0x24cbfff0
    ctx->pc = 0x188ea8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x188eac: 0x24090007
    ctx->pc = 0x188eacu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 7));
label_188eb0:
    // 0x188eb0: 0x84820000
    ctx->pc = 0x188eb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188eb4: 0x2529ffff
    ctx->pc = 0x188eb4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x188eb8: 0xc21021
    ctx->pc = 0x188eb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x188ebc: 0x90430000
    ctx->pc = 0x188ebcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188ec0: 0xa0e30000
    ctx->pc = 0x188ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x188ec4: 0x84820002
    ctx->pc = 0x188ec4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x188ec8: 0xc21021
    ctx->pc = 0x188ec8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x188ecc: 0x90430000
    ctx->pc = 0x188eccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188ed0: 0xa0e30001
    ctx->pc = 0x188ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x188ed4: 0x84820004
    ctx->pc = 0x188ed4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x188ed8: 0xc21021
    ctx->pc = 0x188ed8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x188edc: 0x90430000
    ctx->pc = 0x188edcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188ee0: 0xa0e30002
    ctx->pc = 0x188ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x188ee4: 0x84820006
    ctx->pc = 0x188ee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x188ee8: 0xc21021
    ctx->pc = 0x188ee8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x188eec: 0x90430000
    ctx->pc = 0x188eecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188ef0: 0xa0e30003
    ctx->pc = 0x188ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x188ef4: 0x84820008
    ctx->pc = 0x188ef4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x188ef8: 0xc21021
    ctx->pc = 0x188ef8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x188efc: 0x90430000
    ctx->pc = 0x188efcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f00: 0xa0e30004
    ctx->pc = 0x188f00u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x188f04: 0x8482000a
    ctx->pc = 0x188f04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x188f08: 0xc21021
    ctx->pc = 0x188f08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x188f0c: 0x90430000
    ctx->pc = 0x188f0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f10: 0xa0e30005
    ctx->pc = 0x188f10u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x188f14: 0x8482000c
    ctx->pc = 0x188f14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x188f18: 0xc21021
    ctx->pc = 0x188f18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x188f1c: 0x90430000
    ctx->pc = 0x188f1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f20: 0xa0e30006
    ctx->pc = 0x188f20u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x188f24: 0x8482000e
    ctx->pc = 0x188f24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x188f28: 0x24840010
    ctx->pc = 0x188f28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x188f2c: 0xc21021
    ctx->pc = 0x188f2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x188f30: 0x90430000
    ctx->pc = 0x188f30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f34: 0xa0e30007
    ctx->pc = 0x188f34u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x188f38: 0x521ffdd
    ctx->pc = 0x188F38u;
    {
        const bool branch_taken_0x188f38 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x188F3Cu;
        SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
        if (branch_taken_0x188f38) {
            ctx->pc = 0x188EB0u;
            goto label_188eb0;
        }
    }
    ctx->pc = 0x188F40u;
    // 0x188f40: 0x180182d
    ctx->pc = 0x188f40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f44: 0x5c60ffd2
    ctx->pc = 0x188F44u;
    {
        const bool branch_taken_0x188f44 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x188f44) {
            ctx->pc = 0x188F48u;
            SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x188E90u;
            goto label_188e90;
        }
    }
    ctx->pc = 0x188F4Cu;
    // 0x188f4c: 0x3e00008
    ctx->pc = 0x188F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188E90u: goto label_188e90;
            case 0x188EB0u: goto label_188eb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188F54u;
}
