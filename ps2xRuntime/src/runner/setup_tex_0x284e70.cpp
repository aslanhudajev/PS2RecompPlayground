#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setup_tex
// Address: 0x284e70 - 0x284f80
void setup_tex_0x284e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x284e70u;

    // 0x284e70: 0x27bdff30
    ctx->pc = 0x284e70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x284e74: 0xffbf0060
    ctx->pc = 0x284e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x284e78: 0xffb30050
    ctx->pc = 0x284e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x284e7c: 0xffb20040
    ctx->pc = 0x284e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x284e80: 0xffb10030
    ctx->pc = 0x284e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x284e84: 0xffb00020
    ctx->pc = 0x284e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x284e88: 0x80882d
    ctx->pc = 0x284e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284e8c: 0xa0802d
    ctx->pc = 0x284e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284e90: 0xc0902d
    ctx->pc = 0x284e90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284e94: 0xe0982d
    ctx->pc = 0x284e94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284e98: 0xffa900b8
    ctx->pc = 0x284e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 9));
    // 0x284e9c: 0xffaa00c0
    ctx->pc = 0x284e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 10));
    // 0x284ea0: 0xffab00c8
    ctx->pc = 0x284ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 11));
    // 0x284ea4: 0x3a0202d
    ctx->pc = 0x284ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ea8: 0x100282d
    ctx->pc = 0x284ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284eac: 0xc0b5d5e
    ctx->pc = 0x284EACu;
    SET_GPR_U32(ctx, 31, 0x284EB4u);
    ctx->pc = 0x284EB0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 184));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284EB4u; }
    }
    if (ctx->pc != 0x284EB4u) { return; }
    ctx->pc = 0x284EB4u;
    // 0x284eb4: 0x3a0202d
    ctx->pc = 0x284eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284eb8: 0x282d
    ctx->pc = 0x284eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ebc: 0xc0b1ba8
    ctx->pc = 0x284EBCu;
    SET_GPR_U32(ctx, 31, 0x284EC4u);
    ctx->pc = 0x284EC0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284EC4u; }
    }
    if (ctx->pc != 0x284EC4u) { return; }
    ctx->pc = 0x284EC4u;
    // 0x284ec4: 0x3c04003c
    ctx->pc = 0x284ec4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x284ec8: 0x24843b88
    ctx->pc = 0x284ec8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15240));
    // 0x284ecc: 0x2403000c
    ctx->pc = 0x284eccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x284ed0: 0x2038018
    ctx->pc = 0x284ed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x284ed4: 0x24030084
    ctx->pc = 0x284ed4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 132));
    // 0x284ed8: 0x2238818
    ctx->pc = 0x284ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x284edc: 0x2118021
    ctx->pc = 0x284edcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x284ee0: 0x2048021
    ctx->pc = 0x284ee0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x284ee4: 0x8e040000
    ctx->pc = 0x284ee4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x284ee8: 0x40282d
    ctx->pc = 0x284ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284eec: 0xc0b0ed6
    ctx->pc = 0x284EECu;
    SET_GPR_U32(ctx, 31, 0x284EF4u);
    ctx->pc = 0x284EF0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284EF4u; }
    }
    if (ctx->pc != 0x284EF4u) { return; }
    ctx->pc = 0x284EF4u;
    // 0x284ef4: 0x8e040000
    ctx->pc = 0x284ef4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x284ef8: 0xc0b0ce8
    ctx->pc = 0x284EF8u;
    SET_GPR_U32(ctx, 31, 0x284F00u);
    ctx->pc = 0x284EFCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F00u; }
    }
    if (ctx->pc != 0x284F00u) { return; }
    ctx->pc = 0x284F00u;
    // 0x284f00: 0x8e040000
    ctx->pc = 0x284f00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x284f04: 0x2405ffff
    ctx->pc = 0x284f04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284f08: 0xc0b0cf6
    ctx->pc = 0x284F08u;
    SET_GPR_U32(ctx, 31, 0x284F10u);
    ctx->pc = 0x284F0Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F10u; }
    }
    if (ctx->pc != 0x284F10u) { return; }
    ctx->pc = 0x284F10u;
    // 0x284f10: 0x8e040000
    ctx->pc = 0x284f10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x284f14: 0x3c05ffff
    ctx->pc = 0x284f14u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x284f18: 0x34a5ffff
    ctx->pc = 0x284f18u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x284f1c: 0xc0b0caa
    ctx->pc = 0x284F1Cu;
    SET_GPR_U32(ctx, 31, 0x284F24u);
    ctx->pc = 0x284F20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C32A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetFlags_0x2c32a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F24u; }
    }
    if (ctx->pc != 0x284F24u) { return; }
    ctx->pc = 0x284F24u;
    // 0x284f24: 0x8e040000
    ctx->pc = 0x284f24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x284f28: 0xc0b0f52
    ctx->pc = 0x284F28u;
    SET_GPR_U32(ctx, 31, 0x284F30u);
    ctx->pc = 0x284F2Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F30u; }
    }
    if (ctx->pc != 0x284F30u) { return; }
    ctx->pc = 0x284F30u;
    // 0x284f30: 0x32524000
    ctx->pc = 0x284f30u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 18), 16384));
    // 0x284f34: 0x1240000c
    ctx->pc = 0x284F34u;
    {
        const bool branch_taken_0x284f34 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x284F38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x284f34) {
            ctx->pc = 0x284F68u;
            goto label_284f68;
        }
    }
    ctx->pc = 0x284F3Cu;
    // 0x284f3c: 0x8e040000
    ctx->pc = 0x284f3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x284f40: 0x3c058080
    ctx->pc = 0x284f40u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32896 << 16));
    // 0x284f44: 0x34a58080
    ctx->pc = 0x284f44u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 32896));
    // 0x284f48: 0x3c068080
    ctx->pc = 0x284f48u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32896 << 16));
    // 0x284f4c: 0x34c68080
    ctx->pc = 0x284f4cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 32896));
    // 0x284f50: 0x3c078080
    ctx->pc = 0x284f50u;
    SET_GPR_U32(ctx, 7, ((uint32_t)32896 << 16));
    // 0x284f54: 0x34e78080
    ctx->pc = 0x284f54u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 32896));
    // 0x284f58: 0x3c088080
    ctx->pc = 0x284f58u;
    SET_GPR_U32(ctx, 8, ((uint32_t)32896 << 16));
    // 0x284f5c: 0xc0b0f7c
    ctx->pc = 0x284F5Cu;
    SET_GPR_U32(ctx, 31, 0x284F64u);
    ctx->pc = 0x284F60u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 32896));
    ctx->pc = 0x2C3DF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetColor4_0x2c3df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284F64u; }
    }
    if (ctx->pc != 0x284F64u) { return; }
    ctx->pc = 0x284F64u;
    // 0x284f64: 0xdfbf0060
    ctx->pc = 0x284f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_284f68:
    // 0x284f68: 0xdfb30050
    ctx->pc = 0x284f68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x284f6c: 0xdfb20040
    ctx->pc = 0x284f6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x284f70: 0xdfb10030
    ctx->pc = 0x284f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284f74: 0xdfb00020
    ctx->pc = 0x284f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284f78: 0x3e00008
    ctx->pc = 0x284F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284F7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284F68u: goto label_284f68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284F80u;
}
