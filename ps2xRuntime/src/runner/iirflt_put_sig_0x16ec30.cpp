#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iirflt_put_sig
// Address: 0x16ec30 - 0x16eca8
void iirflt_put_sig_0x16ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iirflt_put_sig");


    ctx->pc = 0x16ec30u;

    // 0x16ec30: 0x52c00
    ctx->pc = 0x16ec30u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x16ec34: 0x80502d
    ctx->pc = 0x16ec34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ec38: 0x11400019
    ctx->pc = 0x16EC38u;
    {
        const bool branch_taken_0x16ec38 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EC3Cu;
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 5), 16));
        if (branch_taken_0x16ec38) {
            ctx->pc = 0x16ECA0u;
            goto label_16eca0;
        }
    }
    ctx->pc = 0x16EC40u;
    // 0x16ec40: 0x85470008
    ctx->pc = 0x16ec40u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x16ec44: 0x3c06ffff
    ctx->pc = 0x16ec44u;
    SET_GPR_U32(ctx, 6, ((uint32_t)65535 << 16));
    // 0x16ec48: 0x8548000a
    ctx->pc = 0x16ec48u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 10)));
    // 0x16ec4c: 0x34c67fff
    ctx->pc = 0x16ec4cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 32767));
    // 0x16ec50: 0x85430004
    ctx->pc = 0x16ec50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x16ec54: 0x24028000
    ctx->pc = 0x16ec54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x16ec58: 0x85440006
    ctx->pc = 0x16ec58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x16ec5c: 0x24097fff
    ctx->pc = 0x16ec5cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 32767));
    // 0x16ec60: 0x671818
    ctx->pc = 0x16ec60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x16ec64: 0x95450008
    ctx->pc = 0x16ec64u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x16ec68: 0x882018
    ctx->pc = 0x16ec68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x16ec6c: 0xa545000a
    ctx->pc = 0x16ec6cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 10), (uint16_t)GPR_U32(ctx, 5));
    // 0x16ec70: 0x31b03
    ctx->pc = 0x16ec70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x16ec74: 0x42303
    ctx->pc = 0x16ec74u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x16ec78: 0x641821
    ctx->pc = 0x16ec78u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ec7c: 0x6b1821
    ctx->pc = 0x16ec7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x16ec80: 0xc3302a
    ctx->pc = 0x16ec80u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 3)));
    // 0x16ec84: 0x66100b
    ctx->pc = 0x16ec84u;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x16ec88: 0x122202a
    ctx->pc = 0x16ec88u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 2)));
    // 0x16ec8c: 0x124100b
    ctx->pc = 0x16ec8cu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 9));
    // 0x16ec90: 0x21400
    ctx->pc = 0x16ec90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x16ec94: 0x21403
    ctx->pc = 0x16ec94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16ec98: 0x3e00008
    ctx->pc = 0x16EC98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EC9Cu;
        WRITE16(ADD32(GPR_U32(ctx, 10), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16ECA0u: goto label_16eca0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16ECA0u;
label_16eca0:
    // 0x16eca0: 0x3e00008
    ctx->pc = 0x16ECA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ECA4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16ECA0u: goto label_16eca0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16ECA8u;
}
