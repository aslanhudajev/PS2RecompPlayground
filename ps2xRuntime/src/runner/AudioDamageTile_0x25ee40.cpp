#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioDamageTile
// Address: 0x25ee40 - 0x25eee0
void AudioDamageTile_0x25ee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25ee40u;

    // 0x25ee40: 0x80302d
    ctx->pc = 0x25ee40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee44: 0xa0202d
    ctx->pc = 0x25ee44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee48: 0x28820007
    ctx->pc = 0x25ee48u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 7));
    // 0x25ee4c: 0x10400022
    ctx->pc = 0x25EE4Cu;
    {
        const bool branch_taken_0x25ee4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25EE50u;
        SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
        if (branch_taken_0x25ee4c) {
            ctx->pc = 0x25EED8u;
            goto label_25eed8;
        }
    }
    ctx->pc = 0x25EE54u;
    // 0x25ee54: 0x24a5d8b8
    ctx->pc = 0x25ee54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957240));
    // 0x25ee58: 0x42080
    ctx->pc = 0x25ee58u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x25ee5c: 0x3c020034
    ctx->pc = 0x25ee5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25ee60: 0x8c42e7f0
    ctx->pc = 0x25ee60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x25ee64: 0x2403001c
    ctx->pc = 0x25ee64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x25ee68: 0x431018
    ctx->pc = 0x25ee68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25ee6c: 0x822021
    ctx->pc = 0x25ee6cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25ee70: 0x852021
    ctx->pc = 0x25ee70u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x25ee74: 0x8c840000
    ctx->pc = 0x25ee74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25ee78: 0x3c020026
    ctx->pc = 0x25ee78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x25ee7c: 0x34420027
    ctx->pc = 0x25ee7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39));
    // 0x25ee80: 0x14820006
    ctx->pc = 0x25EE80u;
    {
        const bool branch_taken_0x25ee80 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x25EE84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x25ee80) {
            ctx->pc = 0x25EE9Cu;
            goto label_25ee9c;
        }
    }
    ctx->pc = 0x25EE88u;
    // 0x25ee88: 0x8c42d934
    ctx->pc = 0x25ee88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x25ee8c: 0x3c03002e
    ctx->pc = 0x25ee8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
    // 0x25ee90: 0x34630009
    ctx->pc = 0x25ee90u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 9));
    // 0x25ee94: 0x38420022
    ctx->pc = 0x25ee94u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 34));
    // 0x25ee98: 0x62200a
    ctx->pc = 0x25ee98u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
label_25ee9c:
    // 0x25ee9c: 0x480000e
    ctx->pc = 0x25EE9Cu;
    {
        const bool branch_taken_0x25ee9c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25EEA0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)37 << 16));
        if (branch_taken_0x25ee9c) {
            ctx->pc = 0x25EED8u;
            goto label_25eed8;
        }
    }
    ctx->pc = 0x25EEA4u;
    // 0x25eea4: 0x34420002
    ctx->pc = 0x25eea4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x25eea8: 0x10820004
    ctx->pc = 0x25EEA8u;
    {
        const bool branch_taken_0x25eea8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x25EEACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
        if (branch_taken_0x25eea8) {
            ctx->pc = 0x25EEBCu;
            goto label_25eebc;
        }
    }
    ctx->pc = 0x25EEB0u;
    // 0x25eeb0: 0x3442002e
    ctx->pc = 0x25eeb0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46));
    // 0x25eeb4: 0x14820005
    ctx->pc = 0x25EEB4u;
    {
        const bool branch_taken_0x25eeb4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x25EEB8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25eeb4) {
            ctx->pc = 0x25EECCu;
            goto label_25eecc;
        }
    }
    ctx->pc = 0x25EEBCu;
label_25eebc:
    // 0x25eebc: 0xc0282d
    ctx->pc = 0x25eebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eec0: 0x240600b4
    ctx->pc = 0x25eec0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 180));
    // 0x25eec4: 0x8088a26
    ctx->pc = 0x25EEC4u;
    ctx->pc = 0x25EEC8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25EECCu;
label_25eecc:
    // 0x25eecc: 0x2406007f
    ctx->pc = 0x25eeccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25eed0: 0x8088a26
    ctx->pc = 0x25EED0u;
    ctx->pc = 0x25EED4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25EED8u;
label_25eed8:
    // 0x25eed8: 0x3e00008
    ctx->pc = 0x25EED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25EE9Cu: goto label_25ee9c;
            case 0x25EEBCu: goto label_25eebc;
            case 0x25EECCu: goto label_25eecc;
            case 0x25EED8u: goto label_25eed8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25EEE0u;
}
