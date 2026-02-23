#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: bos2MantMove__6CClothFv
// Address: 0x1d2b00 - 0x1d2d18
void bos2MantMove__6CClothFv_0x1d2b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("bos2MantMove__6CClothFv");


    ctx->pc = 0x1d2b00u;

    // 0x1d2b00: 0x27bdff50
    ctx->pc = 0x1d2b00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1d2b04: 0x7fbf0080
    ctx->pc = 0x1d2b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x1d2b08: 0x7fb60070
    ctx->pc = 0x1d2b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1d2b0c: 0x7fb50060
    ctx->pc = 0x1d2b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1d2b10: 0x7fb40050
    ctx->pc = 0x1d2b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1d2b14: 0x7fb30040
    ctx->pc = 0x1d2b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d2b18: 0x7fb20030
    ctx->pc = 0x1d2b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d2b1c: 0x7fb10020
    ctx->pc = 0x1d2b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d2b20: 0x7fb00010
    ctx->pc = 0x1d2b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d2b24: 0xe7b50004
    ctx->pc = 0x1d2b24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d2b28: 0xe7b40000
    ctx->pc = 0x1d2b28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d2b2c: 0x8c860068
    ctx->pc = 0x1d2b2cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1d2b30: 0x3c034080
    ctx->pc = 0x1d2b30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16512 << 16));
    // 0x1d2b34: 0x44830800
    ctx->pc = 0x1d2b34u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1d2b38: 0x8c910000
    ctx->pc = 0x1d2b38u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d2b3c: 0x3c0341f0
    ctx->pc = 0x1d2b3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16880 << 16));
    // 0x1d2b40: 0x8c850064
    ctx->pc = 0x1d2b40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1d2b44: 0x44861000
    ctx->pc = 0x1d2b44u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 6);
    // 0x1d2b48: 0x7080b628
    ctx->pc = 0x1d2b48u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d2b4c: 0x468010a0
    ctx->pc = 0x1d2b4cu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x1d2b50: 0x62043
    ctx->pc = 0x1d2b50u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 1));
    // 0x1d2b54: 0x46011043
    ctx->pc = 0x1d2b54u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1d2b58: 0x44830000
    ctx->pc = 0x1d2b58u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d2b5c: 0x0
    ctx->pc = 0x1d2b5cu;
    // NOP
    // 0x1d2b60: 0x0
    ctx->pc = 0x1d2b60u;
    // NOP
    // 0x1d2b64: 0x46000d03
    ctx->pc = 0x1d2b64u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x1d2b68: 0x0
    ctx->pc = 0x1d2b68u;
    // NOP
    // 0x1d2b6c: 0x0
    ctx->pc = 0x1d2b6cu;
    // NOP
    // 0x1d2b70: 0x4c10003
    ctx->pc = 0x1D2B70u;
    {
        const bool branch_taken_0x1d2b70 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1d2b70) {
            ctx->pc = 0x1D2B80u;
            goto label_1d2b80;
        }
    }
    ctx->pc = 0x1D2B78u;
    // 0x1d2b78: 0x24c30001
    ctx->pc = 0x1d2b78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d2b7c: 0x32043
    ctx->pc = 0x1d2b7cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
label_1d2b80:
    // 0x1d2b80: 0x24030f14
    ctx->pc = 0x1d2b80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3860));
    // 0x1d2b84: 0x832018
    ctx->pc = 0x1d2b84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1d2b88: 0x70008628
    ctx->pc = 0x1d2b88u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d2b8c: 0x3c03002c
    ctx->pc = 0x1d2b8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1d2b90: 0x2474e340
    ctx->pc = 0x1d2b90u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 3), 4294959936));
    // 0x1d2b94: 0x3c033f80
    ctx->pc = 0x1d2b94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1d2b98: 0x44830000
    ctx->pc = 0x1d2b98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d2b9c: 0xa49021
    ctx->pc = 0x1d2b9cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d2ba0: 0x46140541
    ctx->pc = 0x1d2ba0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1d2ba4:
    // 0x1d2ba4: 0x8e860000
    ctx->pc = 0x1d2ba4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d2ba8: 0x10c00028
    ctx->pc = 0x1D2BA8u;
    {
        const bool branch_taken_0x1d2ba8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2BACu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 240));
        if (branch_taken_0x1d2ba8) {
            ctx->pc = 0x1D2C4Cu;
            goto label_1d2c4c;
        }
    }
    ctx->pc = 0x1D2BB0u;
    // 0x1d2bb0: 0x70002e28
    ctx->pc = 0x1d2bb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d2bb4: 0x72003e28
    ctx->pc = 0x1d2bb4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1d2bb8:
    // 0x1d2bb8: 0xc52021
    ctx->pc = 0x1d2bb8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d2bbc: 0x41880
    ctx->pc = 0x1d2bbcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d2bc0: 0x641821
    ctx->pc = 0x1d2bc0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2bc4: 0x31880
    ctx->pc = 0x1d2bc4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d2bc8: 0x2431821
    ctx->pc = 0x1d2bc8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1d2bcc: 0xc4640004
    ctx->pc = 0x1d2bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d2bd0: 0xc6420004
    ctx->pc = 0x1d2bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d2bd4: 0xc6430008
    ctx->pc = 0x1d2bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d2bd8: 0xc4600008
    ctx->pc = 0x1d2bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2bdc: 0xc4610000
    ctx->pc = 0x1d2bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d2be0: 0x24a50001
    ctx->pc = 0x1d2be0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d2be4: 0x46041100
    ctx->pc = 0x1d2be4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1d2be8: 0x71880
    ctx->pc = 0x1d2be8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1d2bec: 0xc6420000
    ctx->pc = 0x1d2becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d2bf0: 0x671821
    ctx->pc = 0x1d2bf0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d2bf4: 0x31900
    ctx->pc = 0x1d2bf4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2bf8: 0x2232021
    ctx->pc = 0x1d2bf8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d2bfc: 0x460018c0
    ctx->pc = 0x1d2bfcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1d2c00: 0x28a3000f
    ctx->pc = 0x1d2c00u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 15));
    // 0x1d2c04: 0x24e70010
    ctx->pc = 0x1d2c04u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 16));
    // 0x1d2c08: 0x46011040
    ctx->pc = 0x1d2c08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1d2c0c: 0xc4800000
    ctx->pc = 0x1d2c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2c10: 0x4614081a
    ctx->pc = 0x1d2c10u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1d2c14: 0x4600a81c
    ctx->pc = 0x1d2c14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[0]));
    // 0x1d2c18: 0xe4800000
    ctx->pc = 0x1d2c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d2c1c: 0xc4800004
    ctx->pc = 0x1d2c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2c20: 0x4614201a
    ctx->pc = 0x1d2c20u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x1d2c24: 0x4600a81c
    ctx->pc = 0x1d2c24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[0]));
    // 0x1d2c28: 0xe4800004
    ctx->pc = 0x1d2c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1d2c2c: 0xc4800008
    ctx->pc = 0x1d2c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2c30: 0x4614181a
    ctx->pc = 0x1d2c30u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x1d2c34: 0x4600a81c
    ctx->pc = 0x1d2c34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[0]));
    // 0x1d2c38: 0x1460ffdf
    ctx->pc = 0x1D2C38u;
    {
        const bool branch_taken_0x1d2c38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2C3Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        if (branch_taken_0x1d2c38) {
            ctx->pc = 0x1D2BB8u;
            goto label_1d2bb8;
        }
    }
    ctx->pc = 0x1D2C40u;
    // 0x1d2c40: 0x1000001e
    ctx->pc = 0x1D2C40u;
    {
        const bool branch_taken_0x1d2c40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2C44u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1d2c40) {
            ctx->pc = 0x1D2CBCu;
            goto label_1d2cbc;
        }
    }
    ctx->pc = 0x1D2C48u;
    // 0x1d2c48: 0x2a0100f0
    ctx->pc = 0x1d2c48u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 240));
label_1d2c4c:
    // 0x1d2c4c: 0x1020001a
    ctx->pc = 0x1D2C4Cu;
    {
        const bool branch_taken_0x1d2c4c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2C50u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d2c4c) {
            ctx->pc = 0x1D2CB8u;
            goto label_1d2cb8;
        }
    }
    ctx->pc = 0x1D2C54u;
    // 0x1d2c54: 0x101080
    ctx->pc = 0x1d2c54u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d2c58: 0x501021
    ctx->pc = 0x1d2c58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d2c5c: 0x21100
    ctx->pc = 0x1d2c5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d2c60: 0x2229821
    ctx->pc = 0x1d2c60u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d2c64: 0x0
    ctx->pc = 0x1d2c64u;
    // NOP
label_1d2c68:
    // 0x1d2c68: 0xc6600030
    ctx->pc = 0x1d2c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2c6c: 0x27a40090
    ctx->pc = 0x1d2c6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d2c70: 0x27a500a0
    ctx->pc = 0x1d2c70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d2c74: 0xe7a00090
    ctx->pc = 0x1d2c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1d2c78: 0xc6600034
    ctx->pc = 0x1d2c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2c7c: 0xe7a00094
    ctx->pc = 0x1d2c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1d2c80: 0xc6600038
    ctx->pc = 0x1d2c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2c84: 0xc06bf00
    ctx->pc = 0x1D2C84u;
    SET_GPR_U32(ctx, 31, 0x1D2C8Cu);
    ctx->pc = 0x1D2C88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C8Cu; }
        else if (ctx->pc != 0x1D2C8Cu) { ctx->pc = 0x1D2C8Cu; }
    }
    if (ctx->pc != 0x1D2C8Cu) { return; }
    ctx->pc = 0x1D2C8Cu;
    // 0x1d2c8c: 0xc7a000a0
    ctx->pc = 0x1d2c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2c90: 0x26b50010
    ctx->pc = 0x1d2c90u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 16));
    // 0x1d2c94: 0x2aa300f0
    ctx->pc = 0x1d2c94u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), 240));
    // 0x1d2c98: 0xe6600000
    ctx->pc = 0x1d2c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1d2c9c: 0xc7a000a4
    ctx->pc = 0x1d2c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2ca0: 0xe6600004
    ctx->pc = 0x1d2ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1d2ca4: 0xc7a000a8
    ctx->pc = 0x1d2ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2ca8: 0xe6600008
    ctx->pc = 0x1d2ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1d2cac: 0x1460ffee
    ctx->pc = 0x1D2CACu;
    {
        const bool branch_taken_0x1d2cac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2CB0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1280));
        if (branch_taken_0x1d2cac) {
            ctx->pc = 0x1D2C68u;
            goto label_1d2c68;
        }
    }
    ctx->pc = 0x1D2CB4u;
    // 0x1d2cb4: 0x0
    ctx->pc = 0x1d2cb4u;
    // NOP
label_1d2cb8:
    // 0x1d2cb8: 0x26100001
    ctx->pc = 0x1d2cb8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1d2cbc:
    // 0x1d2cbc: 0x2a030010
    ctx->pc = 0x1d2cbcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 16));
    // 0x1d2cc0: 0x1460ffb8
    ctx->pc = 0x1D2CC0u;
    {
        const bool branch_taken_0x1d2cc0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2CC4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4));
        if (branch_taken_0x1d2cc0) {
            ctx->pc = 0x1D2BA4u;
            goto label_1d2ba4;
        }
    }
    ctx->pc = 0x1D2CC8u;
    // 0x1d2cc8: 0x8ec30068
    ctx->pc = 0x1d2cc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 104)));
    // 0x1d2ccc: 0x24630001
    ctx->pc = 0x1d2cccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2cd0: 0xaec30068
    ctx->pc = 0x1d2cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 104), GPR_U32(ctx, 3));
    // 0x1d2cd4: 0x8ec30068
    ctx->pc = 0x1d2cd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 104)));
    // 0x1d2cd8: 0x28630082
    ctx->pc = 0x1d2cd8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 130));
    // 0x1d2cdc: 0x14600002
    ctx->pc = 0x1D2CDCu;
    {
        const bool branch_taken_0x1d2cdc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2CE0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 130));
        if (branch_taken_0x1d2cdc) {
            ctx->pc = 0x1D2CE8u;
            goto label_1d2ce8;
        }
    }
    ctx->pc = 0x1D2CE4u;
    // 0x1d2ce4: 0xaec30068
    ctx->pc = 0x1d2ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 104), GPR_U32(ctx, 3));
label_1d2ce8:
    // 0x1d2ce8: 0x7bbf0080
    ctx->pc = 0x1d2ce8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d2cec: 0x7bb60070
    ctx->pc = 0x1d2cecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d2cf0: 0x7bb50060
    ctx->pc = 0x1d2cf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d2cf4: 0x7bb40050
    ctx->pc = 0x1d2cf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d2cf8: 0x7bb30040
    ctx->pc = 0x1d2cf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2cfc: 0x7bb20030
    ctx->pc = 0x1d2cfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2d00: 0x7bb10020
    ctx->pc = 0x1d2d00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2d04: 0x7bb00010
    ctx->pc = 0x1d2d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2d08: 0xc7b50004
    ctx->pc = 0x1d2d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d2d0c: 0xc7b40000
    ctx->pc = 0x1d2d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d2d10: 0x3e00008
    ctx->pc = 0x1D2D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2D14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2B80u: goto label_1d2b80;
            case 0x1D2BA4u: goto label_1d2ba4;
            case 0x1D2BB8u: goto label_1d2bb8;
            case 0x1D2C4Cu: goto label_1d2c4c;
            case 0x1D2C68u: goto label_1d2c68;
            case 0x1D2CB8u: goto label_1d2cb8;
            case 0x1D2CBCu: goto label_1d2cbc;
            case 0x1D2CE8u: goto label_1d2ce8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2D18u;
}
