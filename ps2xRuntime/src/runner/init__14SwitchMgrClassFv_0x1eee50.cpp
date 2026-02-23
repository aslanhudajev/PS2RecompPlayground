#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__14SwitchMgrClassFv
// Address: 0x1eee50 - 0x1eeee0
void init__14SwitchMgrClassFv_0x1eee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__14SwitchMgrClassFv");


    ctx->pc = 0x1eee50u;

    // 0x1eee50: 0x27bdffe0
    ctx->pc = 0x1eee50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eee54: 0x7fbf0010
    ctx->pc = 0x1eee54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1eee58: 0x7fb00000
    ctx->pc = 0x1eee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eee5c: 0x70808628
    ctx->pc = 0x1eee5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1eee60: 0x3c020050
    ctx->pc = 0x1eee60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1eee64: 0x2444dcb0
    ctx->pc = 0x1eee64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294958256));
    // 0x1eee68: 0x70002e28
    ctx->pc = 0x1eee68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eee6c: 0xc050cfe
    ctx->pc = 0x1EEE6Cu;
    SET_GPR_U32(ctx, 31, 0x1EEE74u);
    ctx->pc = 0x1EEE70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 112));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEE74u; }
        else if (ctx->pc != 0x1EEE74u) { ctx->pc = 0x1EEE74u; }
    }
    if (ctx->pc != 0x1EEE74u) { return; }
    ctx->pc = 0x1EEE74u;
    // 0x1eee74: 0x3c020050
    ctx->pc = 0x1eee74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1eee78: 0x70002e28
    ctx->pc = 0x1eee78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eee7c: 0x2446dcb0
    ctx->pc = 0x1eee7cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294958256));
    // 0x1eee80: 0x24040080
    ctx->pc = 0x1eee80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eee84: 0x24030001
    ctx->pc = 0x1eee84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1eee88:
    // 0x1eee88: 0xa0c4000a
    ctx->pc = 0x1eee88u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eee8c: 0xa0c4000b
    ctx->pc = 0x1eee8cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eee90: 0xa0c4000c
    ctx->pc = 0x1eee90u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eee94: 0xa0c4000d
    ctx->pc = 0x1eee94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 13), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eee98: 0xa4c00016
    ctx->pc = 0x1eee98u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eee9c: 0xa4c00018
    ctx->pc = 0x1eee9cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eeea0: 0x24a50001
    ctx->pc = 0x1eeea0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1eeea4: 0xa0c30001
    ctx->pc = 0x1eeea4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eeea8: 0x28a20002
    ctx->pc = 0x1eeea8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 2));
    // 0x1eeeac: 0x1440fff6
    ctx->pc = 0x1EEEACu;
    {
        const bool branch_taken_0x1eeeac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EEEB0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 26));
        if (branch_taken_0x1eeeac) {
            ctx->pc = 0x1EEE88u;
            goto label_1eee88;
        }
    }
    ctx->pc = 0x1EEEB4u;
    // 0x1eeeb4: 0x3c020050
    ctx->pc = 0x1eeeb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1eeeb8: 0x2444dc40
    ctx->pc = 0x1eeeb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294958144));
    // 0x1eeebc: 0x3c020050
    ctx->pc = 0x1eeebcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1eeec0: 0x2445dcb0
    ctx->pc = 0x1eeec0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294958256));
    // 0x1eeec4: 0xc050c90
    ctx->pc = 0x1EEEC4u;
    SET_GPR_U32(ctx, 31, 0x1EEECCu);
    ctx->pc = 0x1EEEC8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 112));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEECCu; }
        else if (ctx->pc != 0x1EEECCu) { ctx->pc = 0x1EEECCu; }
    }
    if (ctx->pc != 0x1EEECCu) { return; }
    ctx->pc = 0x1EEECCu;
    // 0x1eeecc: 0xae000000
    ctx->pc = 0x1eeeccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1eeed0: 0x7bbf0010
    ctx->pc = 0x1eeed0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eeed4: 0x7bb00000
    ctx->pc = 0x1eeed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eeed8: 0x3e00008
    ctx->pc = 0x1EEED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEEDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EEE88u: goto label_1eee88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EEEE0u;
}
