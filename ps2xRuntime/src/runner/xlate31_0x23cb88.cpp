#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: xlate31
// Address: 0x23cb88 - 0x23cc34
void xlate31_0x23cb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23cb88u;

    // 0x23cb88: 0x27bdffd0
    ctx->pc = 0x23cb88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23cb8c: 0xffbf0010
    ctx->pc = 0x23cb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23cb90: 0xffb00000
    ctx->pc = 0x23cb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23cb94: 0xe7b50028
    ctx->pc = 0x23cb94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x23cb98: 0xe7b40020
    ctx->pc = 0x23cb98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23cb9c: 0x80802d
    ctx->pc = 0x23cb9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cba0: 0xc6140260
    ctx->pc = 0x23cba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23cba4: 0xc6000320
    ctx->pc = 0x23cba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cba8: 0x46140032
    ctx->pc = 0x23cba8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23cbac: 0x0
    ctx->pc = 0x23cbacu;
    // NOP
    // 0x23cbb0: 0x45010008
    ctx->pc = 0x23CBB0u;
    {
        const bool branch_taken_0x23cbb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23CBB4u;
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x23cbb0) {
            ctx->pc = 0x23CBD4u;
            goto label_23cbd4;
        }
    }
    ctx->pc = 0x23CBB8u;
    // 0x23cbb8: 0xc0b9e4a
    ctx->pc = 0x23CBB8u;
    SET_GPR_U32(ctx, 31, 0x23CBC0u);
    ctx->pc = 0x23CBBCu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CBC0u; }
    }
    if (ctx->pc != 0x23CBC0u) { return; }
    ctx->pc = 0x23CBC0u;
    // 0x23cbc0: 0xe6000318
    ctx->pc = 0x23cbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 792), bits); }
    // 0x23cbc4: 0xc0b9dce
    ctx->pc = 0x23CBC4u;
    SET_GPR_U32(ctx, 31, 0x23CBCCu);
    ctx->pc = 0x23CBC8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CBCCu; }
    }
    if (ctx->pc != 0x23CBCCu) { return; }
    ctx->pc = 0x23CBCCu;
    // 0x23cbcc: 0xe600031c
    ctx->pc = 0x23cbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 796), bits); }
    // 0x23cbd0: 0xe6140320
    ctx->pc = 0x23cbd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 800), bits); }
label_23cbd4:
    // 0x23cbd4: 0x3c03003c
    ctx->pc = 0x23cbd4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x23cbd8: 0x24631bb8
    ctx->pc = 0x23cbd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7096));
    // 0x23cbdc: 0x8e020000
    ctx->pc = 0x23cbdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23cbe0: 0x21080
    ctx->pc = 0x23cbe0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cbe4: 0x431021
    ctx->pc = 0x23cbe4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23cbe8: 0xc6010318
    ctx->pc = 0x23cbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23cbec: 0xc4420000
    ctx->pc = 0x23cbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23cbf0: 0x46020842
    ctx->pc = 0x23cbf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x23cbf4: 0x46150842
    ctx->pc = 0x23cbf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x23cbf8: 0xc600031c
    ctx->pc = 0x23cbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cbfc: 0x46020002
    ctx->pc = 0x23cbfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23cc00: 0x46150002
    ctx->pc = 0x23cc00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x23cc04: 0xc6020224
    ctx->pc = 0x23cc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23cc08: 0x46020840
    ctx->pc = 0x23cc08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x23cc0c: 0xe6010224
    ctx->pc = 0x23cc0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
    // 0x23cc10: 0xc601022c
    ctx->pc = 0x23cc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23cc14: 0x46010000
    ctx->pc = 0x23cc14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23cc18: 0xe600022c
    ctx->pc = 0x23cc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 556), bits); }
    // 0x23cc1c: 0xdfbf0010
    ctx->pc = 0x23cc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cc20: 0xdfb00000
    ctx->pc = 0x23cc20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cc24: 0xc7b50028
    ctx->pc = 0x23cc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23cc28: 0xc7b40020
    ctx->pc = 0x23cc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23cc2c: 0x3e00008
    ctx->pc = 0x23CC2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CC30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23CBD4u: goto label_23cbd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23CC34u;
}
