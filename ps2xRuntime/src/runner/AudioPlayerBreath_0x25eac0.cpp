#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPlayerBreath
// Address: 0x25eac0 - 0x25eb2c
void AudioPlayerBreath_0x25eac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25eac0u;

    // 0x25eac0: 0x80302d
    ctx->pc = 0x25eac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eac4: 0x3c030032
    ctx->pc = 0x25eac4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x25eac8: 0x24631bc0
    ctx->pc = 0x25eac8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x25eacc: 0x24022b00
    ctx->pc = 0x25eaccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25ead0: 0xc21018
    ctx->pc = 0x25ead0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25ead4: 0x431021
    ctx->pc = 0x25ead4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ead8: 0x8c430138
    ctx->pc = 0x25ead8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x25eadc: 0x30620010
    ctx->pc = 0x25eadcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
    // 0x25eae0: 0x14400007
    ctx->pc = 0x25EAE0u;
    {
        const bool branch_taken_0x25eae0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25EAE4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 71));
        if (branch_taken_0x25eae0) {
            ctx->pc = 0x25EB00u;
            goto label_25eb00;
        }
    }
    ctx->pc = 0x25EAE8u;
    // 0x25eae8: 0x30620020
    ctx->pc = 0x25eae8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32));
    // 0x25eaec: 0x14400004
    ctx->pc = 0x25EAECu;
    {
        const bool branch_taken_0x25eaec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25EAF0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 72));
        if (branch_taken_0x25eaec) {
            ctx->pc = 0x25EB00u;
            goto label_25eb00;
        }
    }
    ctx->pc = 0x25EAF4u;
    // 0x25eaf4: 0x30620040
    ctx->pc = 0x25eaf4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 64));
    // 0x25eaf8: 0x1040000a
    ctx->pc = 0x25EAF8u;
    {
        const bool branch_taken_0x25eaf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25EAFCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 73));
        if (branch_taken_0x25eaf8) {
            ctx->pc = 0x25EB24u;
            goto label_25eb24;
        }
    }
    ctx->pc = 0x25EB00u;
label_25eb00:
    // 0x25eb00: 0x24052b00
    ctx->pc = 0x25eb00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25eb04: 0xc52818
    ctx->pc = 0x25eb04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25eb08: 0x3c020032
    ctx->pc = 0x25eb08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25eb0c: 0x24421be0
    ctx->pc = 0x25eb0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x25eb10: 0xa22821
    ctx->pc = 0x25eb10u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25eb14: 0x24a50040
    ctx->pc = 0x25eb14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x25eb18: 0x240600e0
    ctx->pc = 0x25eb18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25eb1c: 0x8088a26
    ctx->pc = 0x25EB1Cu;
    ctx->pc = 0x25EB20u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25EB24u;
label_25eb24:
    // 0x25eb24: 0x3e00008
    ctx->pc = 0x25EB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25EB00u: goto label_25eb00;
            case 0x25EB24u: goto label_25eb24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25EB2Cu;
}
