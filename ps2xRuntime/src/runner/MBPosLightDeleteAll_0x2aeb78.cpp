#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPosLightDeleteAll
// Address: 0x2aeb78 - 0x2aec5c
void MBPosLightDeleteAll_0x2aeb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aeb78u;

    // 0x2aeb78: 0x3c020036
    ctx->pc = 0x2aeb78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aeb7c: 0x8c44dee0
    ctx->pc = 0x2aeb7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aeb80: 0x302d
    ctx->pc = 0x2aeb80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb84: 0x282d
    ctx->pc = 0x2aeb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb88: 0x24070050
    ctx->pc = 0x2aeb88u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 80));
    // 0x2aeb8c: 0x3c013f80
    ctx->pc = 0x2aeb8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2aeb90: 0x44810000
    ctx->pc = 0x2aeb90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2aeb94: 0x8c82001c
    ctx->pc = 0x2aeb94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2aeb98:
    // 0x2aeb98: 0xa71818
    ctx->pc = 0x2aeb98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2aeb9c: 0x431021
    ctx->pc = 0x2aeb9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aeba0: 0xe44002c0
    ctx->pc = 0x2aeba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 704), bits); }
    // 0x2aeba4: 0x8c82001c
    ctx->pc = 0x2aeba4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2aeba8: 0x431021
    ctx->pc = 0x2aeba8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aebac: 0xe44002c4
    ctx->pc = 0x2aebacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 708), bits); }
    // 0x2aebb0: 0x8c82001c
    ctx->pc = 0x2aebb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2aebb4: 0x431021
    ctx->pc = 0x2aebb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aebb8: 0xe44002c8
    ctx->pc = 0x2aebb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 712), bits); }
    // 0x2aebbc: 0x8c82001c
    ctx->pc = 0x2aebbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2aebc0: 0x431021
    ctx->pc = 0x2aebc0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aebc4: 0xac4002cc
    ctx->pc = 0x2aebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 716), GPR_U32(ctx, 0));
    // 0x2aebc8: 0x8c82001c
    ctx->pc = 0x2aebc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2aebcc: 0x431021
    ctx->pc = 0x2aebccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aebd0: 0xac4002d0
    ctx->pc = 0x2aebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 720), GPR_U32(ctx, 0));
    // 0x2aebd4: 0x8c82001c
    ctx->pc = 0x2aebd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2aebd8: 0x431021
    ctx->pc = 0x2aebd8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aebdc: 0xac4002d4
    ctx->pc = 0x2aebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 724), GPR_U32(ctx, 0));
    // 0x2aebe0: 0x8c82001c
    ctx->pc = 0x2aebe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2aebe4: 0x431021
    ctx->pc = 0x2aebe4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aebe8: 0xac4002d8
    ctx->pc = 0x2aebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 728), GPR_U32(ctx, 0));
    // 0x2aebec: 0x8c82001c
    ctx->pc = 0x2aebecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2aebf0: 0x431021
    ctx->pc = 0x2aebf0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aebf4: 0xac4002dc
    ctx->pc = 0x2aebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 732), GPR_U32(ctx, 0));
    // 0x2aebf8: 0x8c82001c
    ctx->pc = 0x2aebf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2aebfc: 0x431021
    ctx->pc = 0x2aebfcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aec00: 0xac4002e0
    ctx->pc = 0x2aec00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 736), GPR_U32(ctx, 0));
    // 0x2aec04: 0x8c82001c
    ctx->pc = 0x2aec04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2aec08: 0x431021
    ctx->pc = 0x2aec08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aec0c: 0xe44002e4
    ctx->pc = 0x2aec0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 740), bits); }
    // 0x2aec10: 0x8c82001c
    ctx->pc = 0x2aec10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2aec14: 0x431021
    ctx->pc = 0x2aec14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aec18: 0xac4602e8
    ctx->pc = 0x2aec18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 744), GPR_U32(ctx, 6));
    // 0x2aec1c: 0x8c82001c
    ctx->pc = 0x2aec1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2aec20: 0x431021
    ctx->pc = 0x2aec20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aec24: 0xac4002ec
    ctx->pc = 0x2aec24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 748), GPR_U32(ctx, 0));
    // 0x2aec28: 0x246302c0
    ctx->pc = 0x2aec28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 704));
    // 0x2aec2c: 0x8c82001c
    ctx->pc = 0x2aec2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2aec30: 0x623021
    ctx->pc = 0x2aec30u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aec34: 0x24a50001
    ctx->pc = 0x2aec34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2aec38: 0x28a2000c
    ctx->pc = 0x2aec38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 12));
    // 0x2aec3c: 0x1440ffd6
    ctx->pc = 0x2AEC3Cu;
    {
        const bool branch_taken_0x2aec3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AEC40u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
        if (branch_taken_0x2aec3c) {
            ctx->pc = 0x2AEB98u;
            goto label_2aeb98;
        }
    }
    ctx->pc = 0x2AEC44u;
    // 0x2aec44: 0xac4600e4
    ctx->pc = 0x2aec44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 6));
    // 0x2aec48: 0x8c82001c
    ctx->pc = 0x2aec48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2aec4c: 0xac4000e0
    ctx->pc = 0x2aec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
    // 0x2aec50: 0x8c82001c
    ctx->pc = 0x2aec50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2aec54: 0x3e00008
    ctx->pc = 0x2AEC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEC58u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AEB98u: goto label_2aeb98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AEC5Cu;
}
