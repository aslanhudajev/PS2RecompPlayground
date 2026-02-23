#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVMC_OneRefV2
// Address: 0x188938 - 0x188a8c
void MPVMC_OneRefV2_0x188938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVMC_OneRefV2");


    ctx->pc = 0x188938u;

    // 0x188938: 0x8c850014
    ctx->pc = 0x188938u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x18893c: 0x240c0007
    ctx->pc = 0x18893cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 7));
    // 0x188940: 0x8c820018
    ctx->pc = 0x188940u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x188944: 0x8c830010
    ctx->pc = 0x188944u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x188948: 0x24a80001
    ctx->pc = 0x188948u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 5), 1));
    // 0x18894c: 0x8c860008
    ctx->pc = 0x18894cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x188950: 0x24470001
    ctx->pc = 0x188950u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 1));
    // 0x188954: 0x246bfff9
    ctx->pc = 0x188954u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 3), 4294967289));
    // 0x188958: 0x244a0006
    ctx->pc = 0x188958u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 6));
    // 0x18895c: 0x24a90006
    ctx->pc = 0x18895cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 5), 6));
label_188960:
    // 0x188960: 0x9145fffa
    ctx->pc = 0x188960u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4294967290)));
    // 0x188964: 0x258cffff
    ctx->pc = 0x188964u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x188968: 0x9122fffa
    ctx->pc = 0x188968u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294967290)));
    // 0x18896c: 0x81030000
    ctx->pc = 0x18896cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x188970: 0x451021
    ctx->pc = 0x188970u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x188974: 0x80e40000
    ctx->pc = 0x188974u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x188978: 0x24420001
    ctx->pc = 0x188978u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18897c: 0x306300ff
    ctx->pc = 0x18897cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x188980: 0x21043
    ctx->pc = 0x188980u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x188984: 0x308400ff
    ctx->pc = 0x188984u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    // 0x188988: 0xa0c20000
    ctx->pc = 0x188988u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x18898c: 0x641821
    ctx->pc = 0x18898cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188990: 0x24630001
    ctx->pc = 0x188990u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x188994: 0x81020001
    ctx->pc = 0x188994u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x188998: 0x31843
    ctx->pc = 0x188998u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x18899c: 0x80e40001
    ctx->pc = 0x18899cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1889a0: 0xa0c30001
    ctx->pc = 0x1889a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1889a4: 0x304200ff
    ctx->pc = 0x1889a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1889a8: 0x308400ff
    ctx->pc = 0x1889a8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    // 0x1889ac: 0x441021
    ctx->pc = 0x1889acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1889b0: 0x81030002
    ctx->pc = 0x1889b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1889b4: 0x80e40002
    ctx->pc = 0x1889b4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1889b8: 0x24420001
    ctx->pc = 0x1889b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1889bc: 0x21043
    ctx->pc = 0x1889bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1889c0: 0x306300ff
    ctx->pc = 0x1889c0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1889c4: 0xa0c20002
    ctx->pc = 0x1889c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1889c8: 0x308400ff
    ctx->pc = 0x1889c8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    // 0x1889cc: 0x641821
    ctx->pc = 0x1889ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1889d0: 0x81020003
    ctx->pc = 0x1889d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x1889d4: 0x24630001
    ctx->pc = 0x1889d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1889d8: 0x80e40003
    ctx->pc = 0x1889d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1889dc: 0x31843
    ctx->pc = 0x1889dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1889e0: 0xa0c30003
    ctx->pc = 0x1889e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1889e4: 0x304200ff
    ctx->pc = 0x1889e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1889e8: 0x308400ff
    ctx->pc = 0x1889e8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    // 0x1889ec: 0x441021
    ctx->pc = 0x1889ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1889f0: 0x81030004
    ctx->pc = 0x1889f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1889f4: 0x80e40004
    ctx->pc = 0x1889f4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1889f8: 0x24420001
    ctx->pc = 0x1889f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1889fc: 0x21043
    ctx->pc = 0x1889fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x188a00: 0x306300ff
    ctx->pc = 0x188a00u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x188a04: 0x308400ff
    ctx->pc = 0x188a04u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    // 0x188a08: 0xa0c20004
    ctx->pc = 0x188a08u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x188a0c: 0x641821
    ctx->pc = 0x188a0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188a10: 0x25080007
    ctx->pc = 0x188a10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 7));
    // 0x188a14: 0x24630001
    ctx->pc = 0x188a14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x188a18: 0x81240000
    ctx->pc = 0x188a18u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x188a1c: 0x81450000
    ctx->pc = 0x188a1cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x188a20: 0x31843
    ctx->pc = 0x188a20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x188a24: 0xa0c30005
    ctx->pc = 0x188a24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x188a28: 0x25290007
    ctx->pc = 0x188a28u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 7));
    // 0x188a2c: 0x254a0007
    ctx->pc = 0x188a2cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 7));
    // 0x188a30: 0x308400ff
    ctx->pc = 0x188a30u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    // 0x188a34: 0x8122fffa
    ctx->pc = 0x188a34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294967290)));
    // 0x188a38: 0x30a500ff
    ctx->pc = 0x188a38u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 255));
    // 0x188a3c: 0x8143fffa
    ctx->pc = 0x188a3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 4294967290)));
    // 0x188a40: 0x852021
    ctx->pc = 0x188a40u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x188a44: 0x304200ff
    ctx->pc = 0x188a44u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x188a48: 0x24840001
    ctx->pc = 0x188a48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x188a4c: 0x306300ff
    ctx->pc = 0x188a4cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x188a50: 0x42043
    ctx->pc = 0x188a50u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x188a54: 0x431021
    ctx->pc = 0x188a54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188a58: 0xa0c40006
    ctx->pc = 0x188a58u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x188a5c: 0x24420001
    ctx->pc = 0x188a5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x188a60: 0x24e70007
    ctx->pc = 0x188a60u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 7));
    // 0x188a64: 0x21043
    ctx->pc = 0x188a64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x188a68: 0x12b4821
    ctx->pc = 0x188a68u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x188a6c: 0xa0c20007
    ctx->pc = 0x188a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x188a70: 0x10b4021
    ctx->pc = 0x188a70u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x188a74: 0x14b5021
    ctx->pc = 0x188a74u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x188a78: 0xeb3821
    ctx->pc = 0x188a78u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x188a7c: 0x581ffb8
    ctx->pc = 0x188A7Cu;
    {
        const bool branch_taken_0x188a7c = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x188A80u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x188a7c) {
            ctx->pc = 0x188960u;
            goto label_188960;
        }
    }
    ctx->pc = 0x188A84u;
    // 0x188a84: 0x3e00008
    ctx->pc = 0x188A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188960u: goto label_188960;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188A8Cu;
}
