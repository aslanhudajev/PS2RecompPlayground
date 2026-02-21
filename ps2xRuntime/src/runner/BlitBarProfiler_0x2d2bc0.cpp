#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BlitBarProfiler
// Address: 0x2d2bc0 - 0x2d2c84
void BlitBarProfiler_0x2d2bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d2bc0u;

    // 0x2d2bc0: 0x27bdffa0
    ctx->pc = 0x2d2bc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d2bc4: 0xffbf0050
    ctx->pc = 0x2d2bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d2bc8: 0xffb40040
    ctx->pc = 0x2d2bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d2bcc: 0xffb30030
    ctx->pc = 0x2d2bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d2bd0: 0xffb20020
    ctx->pc = 0x2d2bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d2bd4: 0xffb10010
    ctx->pc = 0x2d2bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d2bd8: 0xffb00000
    ctx->pc = 0x2d2bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d2bdc: 0x80a02d
    ctx->pc = 0x2d2bdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2be0: 0xa0982d
    ctx->pc = 0x2d2be0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2be4: 0xc0902d
    ctx->pc = 0x2d2be4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2be8: 0x24020006
    ctx->pc = 0x2d2be8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d2bec: 0xe23818
    ctx->pc = 0x2d2becu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2d2bf0: 0x24020106
    ctx->pc = 0x2d2bf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 262));
    // 0x2d2bf4: 0xe2001a
    ctx->pc = 0x2d2bf4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2d2bf8: 0x8812
    ctx->pc = 0x2d2bf8u;
    SET_GPR_U32(ctx, 17, ctx->lo);
    // 0x2d2bfc: 0x50400001
    ctx->pc = 0x2D2BFCu;
    {
        const bool branch_taken_0x2d2bfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d2bfc) {
            ctx->pc = 0x2D2C00u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2D2C04u;
            goto label_2d2c04;
        }
    }
    ctx->pc = 0x2D2C04u;
label_2d2c04:
    // 0x2d2c04: 0x1a200018
    ctx->pc = 0x2D2C04u;
    {
        const bool branch_taken_0x2d2c04 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2D2C08u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2d2c04) {
            ctx->pc = 0x2D2C68u;
            goto label_2d2c68;
        }
    }
    ctx->pc = 0x2D2C0Cu;
    // 0x2d2c0c: 0xc0b0c48
    ctx->pc = 0x2D2C0Cu;
    SET_GPR_U32(ctx, 31, 0x2D2C14u);
    ctx->pc = 0x2C3120u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempQuad_0x2c3120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C14u; }
    }
    if (ctx->pc != 0x2D2C14u) { return; }
    ctx->pc = 0x2D2C14u;
    // 0x2d2c14: 0x40802d
    ctx->pc = 0x2d2c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c18: 0x200202d
    ctx->pc = 0x2d2c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c1c: 0x260282d
    ctx->pc = 0x2d2c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c20: 0x3c013f80
    ctx->pc = 0x2d2c20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d2c24: 0x44816000
    ctx->pc = 0x2d2c24u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2d2c28: 0xc0b0df2
    ctx->pc = 0x2D2C28u;
    SET_GPR_U32(ctx, 31, 0x2D2C30u);
    ctx->pc = 0x2D2C2Cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C30u; }
    }
    if (ctx->pc != 0x2D2C30u) { return; }
    ctx->pc = 0x2D2C30u;
    // 0x2d2c30: 0x200202d
    ctx->pc = 0x2d2c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c34: 0x24050006
    ctx->pc = 0x2d2c34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d2c38: 0xc0b0cf6
    ctx->pc = 0x2D2C38u;
    SET_GPR_U32(ctx, 31, 0x2D2C40u);
    ctx->pc = 0x2D2C3Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C40u; }
    }
    if (ctx->pc != 0x2D2C40u) { return; }
    ctx->pc = 0x2D2C40u;
    // 0x2d2c40: 0x200202d
    ctx->pc = 0x2d2c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c44: 0x280282d
    ctx->pc = 0x2d2c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c48: 0xdfbf0050
    ctx->pc = 0x2d2c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2c4c: 0xdfb40040
    ctx->pc = 0x2d2c4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2c50: 0xdfb30030
    ctx->pc = 0x2d2c50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2c54: 0xdfb20020
    ctx->pc = 0x2d2c54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2c58: 0xdfb10010
    ctx->pc = 0x2d2c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2c5c: 0xdfb00000
    ctx->pc = 0x2d2c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2c60: 0x80b0f40
    ctx->pc = 0x2D2C60u;
    ctx->pc = 0x2D2C64u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2C3D00u;
    MBBlitSetColor_0x2c3d00(rdram, ctx, runtime); return;
    ctx->pc = 0x2D2C68u;
label_2d2c68:
    // 0x2d2c68: 0xdfb40040
    ctx->pc = 0x2d2c68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2c6c: 0xdfb30030
    ctx->pc = 0x2d2c6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2c70: 0xdfb20020
    ctx->pc = 0x2d2c70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2c74: 0xdfb10010
    ctx->pc = 0x2d2c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2c78: 0xdfb00000
    ctx->pc = 0x2d2c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2c7c: 0x3e00008
    ctx->pc = 0x2D2C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2C80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D2C04u: goto label_2d2c04;
            case 0x2D2C68u: goto label_2d2c68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D2C84u;
}
