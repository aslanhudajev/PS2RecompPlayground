#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _pictureDisplayExtension
// Address: 0x2f3290 - 0x2f3380
void _pictureDisplayExtension_0x2f3290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f3290u;

    // 0x2f3290: 0x3c02003a
    ctx->pc = 0x2f3290u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f3294: 0x27bdffa0
    ctx->pc = 0x2f3294u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f3298: 0x8c433188
    ctx->pc = 0x2f3298u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12680)));
    // 0x2f329c: 0xffbf0050
    ctx->pc = 0x2f329cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f32a0: 0xffb40040
    ctx->pc = 0x2f32a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f32a4: 0xffb30030
    ctx->pc = 0x2f32a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f32a8: 0xffb20020
    ctx->pc = 0x2f32a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f32ac: 0xffb10010
    ctx->pc = 0x2f32acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f32b0: 0x1060000a
    ctx->pc = 0x2F32B0u;
    {
        const bool branch_taken_0x2f32b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F32B4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x2f32b0) {
            ctx->pc = 0x2F32DCu;
            goto label_2f32dc;
        }
    }
    ctx->pc = 0x2F32B8u;
    // 0x2f32b8: 0x3c02003a
    ctx->pc = 0x2f32b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f32bc: 0x8c433200
    ctx->pc = 0x2f32bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12800)));
    // 0x2f32c0: 0x1060000b
    ctx->pc = 0x2F32C0u;
    {
        const bool branch_taken_0x2f32c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F32C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f32c0) {
            ctx->pc = 0x2F32F0u;
            goto label_2f32f0;
        }
    }
    ctx->pc = 0x2F32C8u;
    // 0x2f32c8: 0x24120002
    ctx->pc = 0x2f32c8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f32cc: 0x8c4431f0
    ctx->pc = 0x2f32ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12784)));
    // 0x2f32d0: 0x24030003
    ctx->pc = 0x2f32d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f32d4: 0x1000000b
    ctx->pc = 0x2F32D4u;
    {
        const bool branch_taken_0x2f32d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F32D8u;
        if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
        if (branch_taken_0x2f32d4) {
            ctx->pc = 0x2F3304u;
            goto label_2f3304;
        }
    }
    ctx->pc = 0x2F32DCu;
label_2f32dc:
    // 0x2f32dc: 0x3c02003a
    ctx->pc = 0x2f32dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f32e0: 0x24030003
    ctx->pc = 0x2f32e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f32e4: 0x8c4431ec
    ctx->pc = 0x2f32e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12780)));
    // 0x2f32e8: 0x10830003
    ctx->pc = 0x2F32E8u;
    {
        const bool branch_taken_0x2f32e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x2F32ECu;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2f32e8) {
            ctx->pc = 0x2F32F8u;
            goto label_2f32f8;
        }
    }
    ctx->pc = 0x2F32F0u;
label_2f32f0:
    // 0x2f32f0: 0x10000004
    ctx->pc = 0x2F32F0u;
    {
        const bool branch_taken_0x2f32f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F32F4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f32f0) {
            ctx->pc = 0x2F3304u;
            goto label_2f3304;
        }
    }
    ctx->pc = 0x2F32F8u;
label_2f32f8:
    // 0x2f32f8: 0x24120002
    ctx->pc = 0x2f32f8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f32fc: 0x8c623200
    ctx->pc = 0x2f32fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12800)));
    // 0x2f3300: 0x82900b
    ctx->pc = 0x2f3300u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 4));
label_2f3304:
    // 0x2f3304: 0x1a400016
    ctx->pc = 0x2F3304u;
    {
        const bool branch_taken_0x2f3304 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2F3308u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f3304) {
            ctx->pc = 0x2F3360u;
            goto label_2f3360;
        }
    }
    ctx->pc = 0x2F330Cu;
    // 0x2f330c: 0x3c14003a
    ctx->pc = 0x2f330cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2f3310: 0x3c13003a
    ctx->pc = 0x2f3310u;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    // 0x2f3314: 0x24040010
    ctx->pc = 0x2f3314u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
label_2f3318:
    // 0x2f3318: 0xc0bca32
    ctx->pc = 0x2F3318u;
    SET_GPR_U32(ctx, 31, 0x2F3320u);
    ctx->pc = 0x2F331Cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3320u; }
    }
    if (ctx->pc != 0x2F3320u) { return; }
    ctx->pc = 0x2F3320u;
    // 0x2f3320: 0x26310001
    ctx->pc = 0x2f3320u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f3324: 0x26833228
    ctx->pc = 0x2f3324u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 12840));
    // 0x2f3328: 0x24040001
    ctx->pc = 0x2f3328u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f332c: 0x2031821
    ctx->pc = 0x2f332cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2f3330: 0xc0bca32
    ctx->pc = 0x2F3330u;
    SET_GPR_U32(ctx, 31, 0x2F3338u);
    ctx->pc = 0x2F3334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3338u; }
    }
    if (ctx->pc != 0x2F3338u) { return; }
    ctx->pc = 0x2F3338u;
    // 0x2f3338: 0xc0bca32
    ctx->pc = 0x2F3338u;
    SET_GPR_U32(ctx, 31, 0x2F3340u);
    ctx->pc = 0x2F333Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3340u; }
    }
    if (ctx->pc != 0x2F3340u) { return; }
    ctx->pc = 0x2F3340u;
    // 0x2f3340: 0x26633238
    ctx->pc = 0x2f3340u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 12856));
    // 0x2f3344: 0x24040001
    ctx->pc = 0x2f3344u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3348: 0x2038021
    ctx->pc = 0x2f3348u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2f334c: 0xc0bca32
    ctx->pc = 0x2F334Cu;
    SET_GPR_U32(ctx, 31, 0x2F3354u);
    ctx->pc = 0x2F3350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3354u; }
    }
    if (ctx->pc != 0x2F3354u) { return; }
    ctx->pc = 0x2F3354u;
    // 0x2f3354: 0x232182a
    ctx->pc = 0x2f3354u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x2f3358: 0x1460ffef
    ctx->pc = 0x2F3358u;
    {
        const bool branch_taken_0x2f3358 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F335Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x2f3358) {
            ctx->pc = 0x2F3318u;
            goto label_2f3318;
        }
    }
    ctx->pc = 0x2F3360u;
label_2f3360:
    // 0x2f3360: 0xdfbf0050
    ctx->pc = 0x2f3360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f3364: 0xdfb40040
    ctx->pc = 0x2f3364u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f3368: 0xdfb30030
    ctx->pc = 0x2f3368u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f336c: 0xdfb20020
    ctx->pc = 0x2f336cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3370: 0xdfb10010
    ctx->pc = 0x2f3370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3374: 0xdfb00000
    ctx->pc = 0x2f3374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3378: 0x3e00008
    ctx->pc = 0x2F3378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F337Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F32DCu: goto label_2f32dc;
            case 0x2F32F0u: goto label_2f32f0;
            case 0x2F32F8u: goto label_2f32f8;
            case 0x2F3304u: goto label_2f3304;
            case 0x2F3318u: goto label_2f3318;
            case 0x2F3360u: goto label_2f3360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F3380u;
}
