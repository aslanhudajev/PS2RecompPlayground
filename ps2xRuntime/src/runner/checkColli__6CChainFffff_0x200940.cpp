#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: checkColli__6CChainFffff
// Address: 0x200940 - 0x200a1c
void checkColli__6CChainFffff_0x200940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("checkColli__6CChainFffff");


    ctx->pc = 0x200940u;

    // 0x200940: 0x27bdffc0
    ctx->pc = 0x200940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x200944: 0x7fbf0030
    ctx->pc = 0x200944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x200948: 0x7fb00020
    ctx->pc = 0x200948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20094c: 0xe7ba0018
    ctx->pc = 0x20094cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x200950: 0xe7b90014
    ctx->pc = 0x200950u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x200954: 0xe7b80010
    ctx->pc = 0x200954u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x200958: 0xe7b7000c
    ctx->pc = 0x200958u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x20095c: 0xe7b60008
    ctx->pc = 0x20095cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x200960: 0xe7b50004
    ctx->pc = 0x200960u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x200964: 0xe7b40000
    ctx->pc = 0x200964u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x200968: 0xc4830000
    ctx->pc = 0x200968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20096c: 0xc4820004
    ctx->pc = 0x20096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x200970: 0xc4810008
    ctx->pc = 0x200970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200974: 0x46007d86
    ctx->pc = 0x200974u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x200978: 0x4616b002
    ctx->pc = 0x200978u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x20097c: 0x70808628
    ctx->pc = 0x20097cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x200980: 0x460d1501
    ctx->pc = 0x200980u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[13]);
    // 0x200984: 0x460e0d41
    ctx->pc = 0x200984u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[14]);
    // 0x200988: 0x460c1e81
    ctx->pc = 0x200988u;
    ctx->f[26] = FPU_SUB_S(ctx->f[3], ctx->f[12]);
    // 0x20098c: 0x461ad082
    ctx->pc = 0x20098cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[26], ctx->f[26]);
    // 0x200990: 0x4614a042
    ctx->pc = 0x200990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x200994: 0x46006646
    ctx->pc = 0x200994u;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
    // 0x200998: 0x46011018
    ctx->pc = 0x200998u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x20099c: 0x4615ab1c
    ctx->pc = 0x20099cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[21]));
    // 0x2009a0: 0x46006034
    ctx->pc = 0x2009a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2009a4: 0x46006e06
    ctx->pc = 0x2009a4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x2009a8: 0x45000011
    ctx->pc = 0x2009A8u;
    {
        const bool branch_taken_0x2009a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2009ACu;
        ctx->f[23] = FPU_MOV_S(ctx->f[14]);
        if (branch_taken_0x2009a8) {
            ctx->pc = 0x2009F0u;
            goto label_2009f0;
        }
    }
    ctx->pc = 0x2009B0u;
    // 0x2009b0: 0xc06c2a8
    ctx->pc = 0x2009B0u;
    SET_GPR_U32(ctx, 31, 0x2009B8u);
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2009B8u; }
        else if (ctx->pc != 0x2009B8u) { ctx->pc = 0x2009B8u; }
    }
    if (ctx->pc != 0x2009B8u) { return; }
    ctx->pc = 0x2009B8u;
    // 0x2009b8: 0x0
    ctx->pc = 0x2009b8u;
    // NOP
    // 0x2009bc: 0x0
    ctx->pc = 0x2009bcu;
    // NOP
    // 0x2009c0: 0x4600d683
    ctx->pc = 0x2009c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[26] = ctx->f[26] / ctx->f[0];
    // 0x2009c4: 0x461ab042
    ctx->pc = 0x2009c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[26]);
    // 0x2009c8: 0x4601c840
    ctx->pc = 0x2009c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[25], ctx->f[1]);
    // 0x2009cc: 0x4600a503
    ctx->pc = 0x2009ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x2009d0: 0xe6010000
    ctx->pc = 0x2009d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2009d4: 0x4600ad43
    ctx->pc = 0x2009d4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[0];
    // 0x2009d8: 0x4614b002
    ctx->pc = 0x2009d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x2009dc: 0x4600c040
    ctx->pc = 0x2009dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x2009e0: 0x4615b002
    ctx->pc = 0x2009e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x2009e4: 0xe6010004
    ctx->pc = 0x2009e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2009e8: 0x4600b800
    ctx->pc = 0x2009e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x2009ec: 0xe6000008
    ctx->pc = 0x2009ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2009f0:
    // 0x2009f0: 0x7bbf0030
    ctx->pc = 0x2009f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2009f4: 0x7bb00020
    ctx->pc = 0x2009f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2009f8: 0xc7ba0018
    ctx->pc = 0x2009f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2009fc: 0xc7b90014
    ctx->pc = 0x2009fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x200a00: 0xc7b80010
    ctx->pc = 0x200a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x200a04: 0xc7b7000c
    ctx->pc = 0x200a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x200a08: 0xc7b60008
    ctx->pc = 0x200a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x200a0c: 0xc7b50004
    ctx->pc = 0x200a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x200a10: 0xc7b40000
    ctx->pc = 0x200a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x200a14: 0x3e00008
    ctx->pc = 0x200A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200A18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2009F0u: goto label_2009f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200A1Cu;
}
