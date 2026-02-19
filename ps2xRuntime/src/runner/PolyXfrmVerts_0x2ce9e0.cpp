#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PolyXfrmVerts
// Address: 0x2ce9e0 - 0x2ceb3c
void PolyXfrmVerts_0x2ce9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ce9e0u;

    // 0x2ce9e0: 0x27bdff60
    ctx->pc = 0x2ce9e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ce9e4: 0xffbf0070
    ctx->pc = 0x2ce9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ce9e8: 0xffb50060
    ctx->pc = 0x2ce9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2ce9ec: 0xffb40050
    ctx->pc = 0x2ce9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2ce9f0: 0xffb30040
    ctx->pc = 0x2ce9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2ce9f4: 0xffb20030
    ctx->pc = 0x2ce9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ce9f8: 0xffb10020
    ctx->pc = 0x2ce9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2ce9fc: 0xffb00010
    ctx->pc = 0x2ce9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cea00: 0xe7b70098
    ctx->pc = 0x2cea00u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2cea04: 0xe7b60090
    ctx->pc = 0x2cea04u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2cea08: 0xe7b50088
    ctx->pc = 0x2cea08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2cea0c: 0xe7b40080
    ctx->pc = 0x2cea0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2cea10: 0x80982d
    ctx->pc = 0x2cea10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cea14: 0xa0a02d
    ctx->pc = 0x2cea14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cea18: 0x3c020036
    ctx->pc = 0x2cea18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2cea1c: 0x8c55dee0
    ctx->pc = 0x2cea1cu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2cea20: 0x1a800039
    ctx->pc = 0x2CEA20u;
    {
        const bool branch_taken_0x2cea20 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2CEA24u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cea20) {
            ctx->pc = 0x2CEB08u;
            goto label_2ceb08;
        }
    }
    ctx->pc = 0x2CEA28u;
    // 0x2cea28: 0x3c013f80
    ctx->pc = 0x2cea28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2cea2c: 0x4481b000
    ctx->pc = 0x2cea2cu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x2cea30: 0x4480b800
    ctx->pc = 0x2cea30u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 0);
    // 0x2cea34: 0x3c014180
    ctx->pc = 0x2cea34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
    // 0x2cea38: 0x4481a800
    ctx->pc = 0x2cea38u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x2cea3c: 0x121140
    ctx->pc = 0x2cea3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 5));
label_2cea40:
    // 0x2cea40: 0x538021
    ctx->pc = 0x2cea40u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2cea44: 0x9602001c
    ctx->pc = 0x2cea44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2cea48: 0x1040002b
    ctx->pc = 0x2CEA48u;
    {
        const bool branch_taken_0x2cea48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CEA4Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cea48) {
            ctx->pc = 0x2CEAF8u;
            goto label_2ceaf8;
        }
    }
    ctx->pc = 0x2CEA50u;
    // 0x2cea50: 0xe616000c
    ctx->pc = 0x2cea50u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2cea54: 0x8ea60004
    ctx->pc = 0x2cea54u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2cea58: 0x3a0282d
    ctx->pc = 0x2cea58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cea5c: 0xc0b5850
    ctx->pc = 0x2CEA5Cu;
    SET_GPR_U32(ctx, 31, 0x2CEA64u);
    ctx->pc = 0x2CEA60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 720));
    ctx->pc = 0x2D6140u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVec4Mat4_0x2d6140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEA64u; }
    }
    if (ctx->pc != 0x2CEA64u) { return; }
    ctx->pc = 0x2CEA64u;
    // 0x2cea64: 0xc7a0000c
    ctx->pc = 0x2cea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cea68: 0x46170036
    ctx->pc = 0x2cea68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cea6c: 0x0
    ctx->pc = 0x2cea6cu;
    // NOP
    // 0x2cea70: 0x45000003
    ctx->pc = 0x2CEA70u;
    {
        const bool branch_taken_0x2cea70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CEA74u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x2cea70) {
            ctx->pc = 0x2CEA80u;
            goto label_2cea80;
        }
    }
    ctx->pc = 0x2CEA78u;
    // 0x2cea78: 0x1000001f
    ctx->pc = 0x2CEA78u;
    {
        const bool branch_taken_0x2cea78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CEA7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        if (branch_taken_0x2cea78) {
            ctx->pc = 0x2CEAF8u;
            goto label_2ceaf8;
        }
    }
    ctx->pc = 0x2CEA80u;
label_2cea80:
    // 0x2cea80: 0x0
    ctx->pc = 0x2cea80u;
    // NOP
    // 0x2cea84: 0x0
    ctx->pc = 0x2cea84u;
    // NOP
    // 0x2cea88: 0x4600b503
    ctx->pc = 0x2cea88u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[20] = ctx->f[22] / ctx->f[0];
    // 0x2cea8c: 0x460ca302
    ctx->pc = 0x2cea8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x2cea90: 0xc0be822
    ctx->pc = 0x2CEA90u;
    SET_GPR_U32(ctx, 31, 0x2CEA98u);
    ctx->pc = 0x2CEA94u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    ctx->pc = 0x2FA088u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2fa088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEA98u; }
    }
    if (ctx->pc != 0x2CEA98u) { return; }
    ctx->pc = 0x2CEA98u;
    // 0x2cea98: 0x40882d
    ctx->pc = 0x2cea98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cea9c: 0xc7ac0004
    ctx->pc = 0x2cea9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ceaa0: 0x460ca302
    ctx->pc = 0x2ceaa0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x2ceaa4: 0xc0be822
    ctx->pc = 0x2CEAA4u;
    SET_GPR_U32(ctx, 31, 0x2CEAACu);
    ctx->pc = 0x2CEAA8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    ctx->pc = 0x2FA088u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2fa088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEAACu; }
    }
    if (ctx->pc != 0x2CEAACu) { return; }
    ctx->pc = 0x2CEAACu;
    // 0x2ceaac: 0x40202d
    ctx->pc = 0x2ceaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceab0: 0x3403ffff
    ctx->pc = 0x2ceab0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 65535));
    // 0x2ceab4: 0x71102b
    ctx->pc = 0x2ceab4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2ceab8: 0x14400004
    ctx->pc = 0x2CEAB8u;
    {
        const bool branch_taken_0x2ceab8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CEABCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 5));
        if (branch_taken_0x2ceab8) {
            ctx->pc = 0x2CEACCu;
            goto label_2ceacc;
        }
    }
    ctx->pc = 0x2CEAC0u;
    // 0x2ceac0: 0x64102b
    ctx->pc = 0x2ceac0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ceac4: 0x10400004
    ctx->pc = 0x2CEAC4u;
    {
        const bool branch_taken_0x2ceac4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CEAC8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 5));
        if (branch_taken_0x2ceac4) {
            ctx->pc = 0x2CEAD8u;
            goto label_2cead8;
        }
    }
    ctx->pc = 0x2CEACCu;
label_2ceacc:
    // 0x2ceacc: 0x531021
    ctx->pc = 0x2ceaccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2cead0: 0x10000009
    ctx->pc = 0x2CEAD0u;
    {
        const bool branch_taken_0x2cead0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CEAD4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        if (branch_taken_0x2cead0) {
            ctx->pc = 0x2CEAF8u;
            goto label_2ceaf8;
        }
    }
    ctx->pc = 0x2CEAD8u;
label_2cead8:
    // 0x2cead8: 0x128140
    ctx->pc = 0x2cead8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 5));
    // 0x2ceadc: 0x2138021
    ctx->pc = 0x2ceadcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2ceae0: 0xa6110010
    ctx->pc = 0x2ceae0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 17));
    // 0x2ceae4: 0xa6040012
    ctx->pc = 0x2ceae4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ceae8: 0xc7ac0008
    ctx->pc = 0x2ceae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ceaec: 0xc0be822
    ctx->pc = 0x2CEAECu;
    SET_GPR_U32(ctx, 31, 0x2CEAF4u);
    ctx->pc = 0x2CEAF0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->pc = 0x2FA088u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2fa088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEAF4u; }
    }
    if (ctx->pc != 0x2CEAF4u) { return; }
    ctx->pc = 0x2CEAF4u;
    // 0x2ceaf4: 0xae020014
    ctx->pc = 0x2ceaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2ceaf8:
    // 0x2ceaf8: 0x26520001
    ctx->pc = 0x2ceaf8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ceafc: 0x254102a
    ctx->pc = 0x2ceafcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 20)));
    // 0x2ceb00: 0x1440ffcf
    ctx->pc = 0x2CEB00u;
    {
        const bool branch_taken_0x2ceb00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CEB04u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 5));
        if (branch_taken_0x2ceb00) {
            ctx->pc = 0x2CEA40u;
            goto label_2cea40;
        }
    }
    ctx->pc = 0x2CEB08u;
label_2ceb08:
    // 0x2ceb08: 0xdfbf0070
    ctx->pc = 0x2ceb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ceb0c: 0xdfb50060
    ctx->pc = 0x2ceb0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ceb10: 0xdfb40050
    ctx->pc = 0x2ceb10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ceb14: 0xdfb30040
    ctx->pc = 0x2ceb14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ceb18: 0xdfb20030
    ctx->pc = 0x2ceb18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ceb1c: 0xdfb10020
    ctx->pc = 0x2ceb1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ceb20: 0xdfb00010
    ctx->pc = 0x2ceb20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ceb24: 0xc7b70098
    ctx->pc = 0x2ceb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2ceb28: 0xc7b60090
    ctx->pc = 0x2ceb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ceb2c: 0xc7b50088
    ctx->pc = 0x2ceb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ceb30: 0xc7b40080
    ctx->pc = 0x2ceb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ceb34: 0x3e00008
    ctx->pc = 0x2CEB34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEB38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CEA40u: goto label_2cea40;
            case 0x2CEA80u: goto label_2cea80;
            case 0x2CEACCu: goto label_2ceacc;
            case 0x2CEAD8u: goto label_2cead8;
            case 0x2CEAF8u: goto label_2ceaf8;
            case 0x2CEB08u: goto label_2ceb08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CEB3Cu;
}
