#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPopPerspective
// Address: 0x1acb60 - 0x1ace70
void nlPopPerspective_0x1acb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPopPerspective");


    ctx->pc = 0x1acb60u;

    // 0x1acb60: 0x27bdff80
    ctx->pc = 0x1acb60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1acb64: 0x7fbf0030
    ctx->pc = 0x1acb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1acb68: 0x7fb20020
    ctx->pc = 0x1acb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1acb6c: 0x7fb10010
    ctx->pc = 0x1acb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1acb70: 0x7fb00000
    ctx->pc = 0x1acb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1acb74: 0x3c010030
    ctx->pc = 0x1acb74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acb78: 0xc4255650
    ctx->pc = 0x1acb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1acb7c: 0x3c020030
    ctx->pc = 0x1acb7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1acb80: 0x24515630
    ctx->pc = 0x1acb80u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 22064));
    // 0x1acb84: 0x3c020030
    ctx->pc = 0x1acb84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1acb88: 0x24465670
    ctx->pc = 0x1acb88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 22128));
    // 0x1acb8c: 0x3c020030
    ctx->pc = 0x1acb8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1acb90: 0x3c010030
    ctx->pc = 0x1acb90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acb94: 0xc4245654
    ctx->pc = 0x1acb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1acb98: 0x839089ac
    ctx->pc = 0x1acb98u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x1acb9c: 0x24453c60
    ctx->pc = 0x1acb9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 15456));
    // 0x1acba0: 0x24040008
    ctx->pc = 0x1acba0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1acba4: 0x3c010030
    ctx->pc = 0x1acba4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acba8: 0xc4235658
    ctx->pc = 0x1acba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1acbac: 0x3c010030
    ctx->pc = 0x1acbacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acbb0: 0xc422565c
    ctx->pc = 0x1acbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1acbb4: 0x3c010030
    ctx->pc = 0x1acbb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acbb8: 0xc4215668
    ctx->pc = 0x1acbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1acbbc: 0x3c010030
    ctx->pc = 0x1acbbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acbc0: 0xc420566c
    ctx->pc = 0x1acbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1acbc4: 0x3c010030
    ctx->pc = 0x1acbc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acbc8: 0xe4253c40
    ctx->pc = 0x1acbc8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15424), bits); }
    // 0x1acbcc: 0x3c010030
    ctx->pc = 0x1acbccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acbd0: 0xe4243c44
    ctx->pc = 0x1acbd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15428), bits); }
    // 0x1acbd4: 0x3c010030
    ctx->pc = 0x1acbd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acbd8: 0xe4233c48
    ctx->pc = 0x1acbd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15432), bits); }
    // 0x1acbdc: 0x3c010030
    ctx->pc = 0x1acbdcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acbe0: 0xe4223c4c
    ctx->pc = 0x1acbe0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15436), bits); }
    // 0x1acbe4: 0x3c010030
    ctx->pc = 0x1acbe4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acbe8: 0xe4213c58
    ctx->pc = 0x1acbe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15448), bits); }
    // 0x1acbec: 0x3c010030
    ctx->pc = 0x1acbecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acbf0: 0xe4203c5c
    ctx->pc = 0x1acbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15452), bits); }
label_1acbf4:
    // 0x1acbf4: 0x8cc30000
    ctx->pc = 0x1acbf4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1acbf8: 0x8cc20004
    ctx->pc = 0x1acbf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1acbfc: 0x2484ffff
    ctx->pc = 0x1acbfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1acc00: 0xaca30000
    ctx->pc = 0x1acc00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1acc04: 0xaca20004
    ctx->pc = 0x1acc04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1acc08: 0x24c60008
    ctx->pc = 0x1acc08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x1acc0c: 0x1c80fff9
    ctx->pc = 0x1ACC0Cu;
    {
        const bool branch_taken_0x1acc0c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1ACC10u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x1acc0c) {
            ctx->pc = 0x1ACBF4u;
            goto label_1acbf4;
        }
    }
    ctx->pc = 0x1ACC14u;
    // 0x1acc14: 0x3c020030
    ctx->pc = 0x1acc14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1acc18: 0x244656b0
    ctx->pc = 0x1acc18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 22192));
    // 0x1acc1c: 0x3c020030
    ctx->pc = 0x1acc1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1acc20: 0x24453ca0
    ctx->pc = 0x1acc20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 15520));
    // 0x1acc24: 0x24040008
    ctx->pc = 0x1acc24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_1acc28:
    // 0x1acc28: 0x8cc30000
    ctx->pc = 0x1acc28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1acc2c: 0x8cc20004
    ctx->pc = 0x1acc2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1acc30: 0x2484ffff
    ctx->pc = 0x1acc30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1acc34: 0xaca30000
    ctx->pc = 0x1acc34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1acc38: 0xaca20004
    ctx->pc = 0x1acc38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1acc3c: 0x24c60008
    ctx->pc = 0x1acc3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x1acc40: 0x1c80fff9
    ctx->pc = 0x1ACC40u;
    {
        const bool branch_taken_0x1acc40 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1ACC44u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x1acc40) {
            ctx->pc = 0x1ACC28u;
            goto label_1acc28;
        }
    }
    ctx->pc = 0x1ACC48u;
    // 0x1acc48: 0x3c010030
    ctx->pc = 0x1acc48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acc4c: 0xc4255710
    ctx->pc = 0x1acc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1acc50: 0x24040003
    ctx->pc = 0x1acc50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1acc54: 0x3c010030
    ctx->pc = 0x1acc54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acc58: 0xc4245714
    ctx->pc = 0x1acc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1acc5c: 0x3c010030
    ctx->pc = 0x1acc5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acc60: 0xc4235718
    ctx->pc = 0x1acc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1acc64: 0x3c010030
    ctx->pc = 0x1acc64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acc68: 0xc422571c
    ctx->pc = 0x1acc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1acc6c: 0x3c010030
    ctx->pc = 0x1acc6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acc70: 0xc4215720
    ctx->pc = 0x1acc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1acc74: 0x3c010030
    ctx->pc = 0x1acc74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acc78: 0xc4205724
    ctx->pc = 0x1acc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1acc7c: 0x3c010030
    ctx->pc = 0x1acc7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acc80: 0xe4253d00
    ctx->pc = 0x1acc80u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15616), bits); }
    // 0x1acc84: 0x3c010030
    ctx->pc = 0x1acc84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acc88: 0xe4243d04
    ctx->pc = 0x1acc88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15620), bits); }
    // 0x1acc8c: 0x3c010030
    ctx->pc = 0x1acc8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acc90: 0xe4233d08
    ctx->pc = 0x1acc90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15624), bits); }
    // 0x1acc94: 0x3c010030
    ctx->pc = 0x1acc94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acc98: 0xe4223d0c
    ctx->pc = 0x1acc98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15628), bits); }
    // 0x1acc9c: 0x3c010030
    ctx->pc = 0x1acc9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acca0: 0xe4213d10
    ctx->pc = 0x1acca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15632), bits); }
    // 0x1acca4: 0x3c010030
    ctx->pc = 0x1acca4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acca8: 0xe4203d14
    ctx->pc = 0x1acca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15636), bits); }
    // 0x1accac: 0x3c010030
    ctx->pc = 0x1accacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1accb0: 0xc4215728
    ctx->pc = 0x1accb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1accb4: 0x3c010030
    ctx->pc = 0x1accb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1accb8: 0xc420572c
    ctx->pc = 0x1accb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1accbc: 0x3c010030
    ctx->pc = 0x1accbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1accc0: 0xe4213d18
    ctx->pc = 0x1accc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15640), bits); }
    // 0x1accc4: 0x3c010030
    ctx->pc = 0x1accc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1accc8: 0xc069338
    ctx->pc = 0x1ACCC8u;
    SET_GPR_U32(ctx, 31, 0x1ACCD0u);
    ctx->pc = 0x1ACCCCu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15644), bits); }
    ctx->pc = 0x1A4CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlMatrixMode_0x1a4ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCD0u; }
        else if (ctx->pc != 0x1ACCD0u) { ctx->pc = 0x1ACCD0u; }
    }
    if (ctx->pc != 0x1ACCD0u) { return; }
    ctx->pc = 0x1ACCD0u;
    // 0x1accd0: 0xc06c20d
    ctx->pc = 0x1ACCD0u;
    SET_GPR_U32(ctx, 31, 0x1ACCD8u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCD8u; }
        else if (ctx->pc != 0x1ACCD8u) { ctx->pc = 0x1ACCD8u; }
    }
    if (ctx->pc != 0x1ACCD8u) { return; }
    ctx->pc = 0x1ACCD8u;
    // 0x1accd8: 0x3c020030
    ctx->pc = 0x1accd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1accdc: 0x24465770
    ctx->pc = 0x1accdcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 22384));
    // 0x1acce0: 0x27a50040
    ctx->pc = 0x1acce0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1acce4: 0x24040008
    ctx->pc = 0x1acce4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_1acce8:
    // 0x1acce8: 0x8cc30000
    ctx->pc = 0x1acce8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1accec: 0x8cc20004
    ctx->pc = 0x1accecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1accf0: 0x2484ffff
    ctx->pc = 0x1accf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1accf4: 0xaca30000
    ctx->pc = 0x1accf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1accf8: 0xaca20004
    ctx->pc = 0x1accf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1accfc: 0x24c60008
    ctx->pc = 0x1accfcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x1acd00: 0x1c80fff9
    ctx->pc = 0x1ACD00u;
    {
        const bool branch_taken_0x1acd00 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1ACD04u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x1acd00) {
            ctx->pc = 0x1ACCE8u;
            goto label_1acce8;
        }
    }
    ctx->pc = 0x1ACD08u;
    // 0x1acd08: 0xc0693a0
    ctx->pc = 0x1ACD08u;
    SET_GPR_U32(ctx, 31, 0x1ACD10u);
    ctx->pc = 0x1ACD0Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPushMatrix_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD10u; }
        else if (ctx->pc != 0x1ACD10u) { ctx->pc = 0x1ACD10u; }
    }
    if (ctx->pc != 0x1ACD10u) { return; }
    ctx->pc = 0x1ACD10u;
    // 0x1acd10: 0x3c020030
    ctx->pc = 0x1acd10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1acd14: 0xc06c038
    ctx->pc = 0x1ACD14u;
    SET_GPR_U32(ctx, 31, 0x1ACD1Cu);
    ctx->pc = 0x1ACD18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 22384));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD1Cu; }
        else if (ctx->pc != 0x1ACD1Cu) { ctx->pc = 0x1ACD1Cu; }
    }
    if (ctx->pc != 0x1ACD1Cu) { return; }
    ctx->pc = 0x1ACD1Cu;
    // 0x1acd1c: 0x4bf8e33c
    ctx->pc = 0x1acd1cu;
    ctx->vu0_vf[24] = ctx->vu0_vf[28];
    // 0x1acd20: 0x4bf9eb3c
    ctx->pc = 0x1acd20u;
    ctx->vu0_vf[25] = ctx->vu0_vf[29];
    // 0x1acd24: 0x4bfaf33c
    ctx->pc = 0x1acd24u;
    ctx->vu0_vf[26] = ctx->vu0_vf[30];
    // 0x1acd28: 0x4bfbfb3c
    ctx->pc = 0x1acd28u;
    ctx->vu0_vf[27] = ctx->vu0_vf[31];
    // 0x1acd2c: 0xc069394
    ctx->pc = 0x1ACD2Cu;
    SET_GPR_U32(ctx, 31, 0x1ACD34u);
    ctx->pc = 0x1ACD30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A4E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPopMatrix_0x1a4e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD34u; }
        else if (ctx->pc != 0x1ACD34u) { ctx->pc = 0x1ACD34u; }
    }
    if (ctx->pc != 0x1ACD34u) { return; }
    ctx->pc = 0x1ACD34u;
    // 0x1acd34: 0x3c010030
    ctx->pc = 0x1acd34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acd38: 0xac203c30
    ctx->pc = 0x1acd38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15408), GPR_U32(ctx, 0));
    // 0x1acd3c: 0x3c010030
    ctx->pc = 0x1acd3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acd40: 0xac203c34
    ctx->pc = 0x1acd40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15412), GPR_U32(ctx, 0));
    // 0x1acd44: 0x3c010030
    ctx->pc = 0x1acd44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acd48: 0xac203c38
    ctx->pc = 0x1acd48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15416), GPR_U32(ctx, 0));
    // 0x1acd4c: 0x3c026c0b
    ctx->pc = 0x1acd4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)27659 << 16));
    // 0x1acd50: 0x34428000
    ctx->pc = 0x1acd50u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x1acd54: 0x3c010030
    ctx->pc = 0x1acd54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acd58: 0xac223c3c
    ctx->pc = 0x1acd58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15420), GPR_U32(ctx, 2));
    // 0x1acd5c: 0x3c021400
    ctx->pc = 0x1acd5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)5120 << 16));
    // 0x1acd60: 0x3442000c
    ctx->pc = 0x1acd60u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 12));
    // 0x1acd64: 0x3c010030
    ctx->pc = 0x1acd64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acd68: 0xac223cf0
    ctx->pc = 0x1acd68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15600), GPR_U32(ctx, 2));
    // 0x1acd6c: 0x3c010030
    ctx->pc = 0x1acd6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acd70: 0xac203cf4
    ctx->pc = 0x1acd70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15604), GPR_U32(ctx, 0));
    // 0x1acd74: 0x3c010030
    ctx->pc = 0x1acd74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acd78: 0xac203cf8
    ctx->pc = 0x1acd78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15608), GPR_U32(ctx, 0));
    // 0x1acd7c: 0x3c010030
    ctx->pc = 0x1acd7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acd80: 0xc7818a18
    ctx->pc = 0x1acd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1acd84: 0xac203cfc
    ctx->pc = 0x1acd84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15612), GPR_U32(ctx, 0));
    // 0x1acd88: 0x3c021000
    ctx->pc = 0x1acd88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1acd8c: 0xc7808a14
    ctx->pc = 0x1acd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1acd90: 0x3442000d
    ctx->pc = 0x1acd90u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13));
    // 0x1acd94: 0x3c010030
    ctx->pc = 0x1acd94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acd98: 0xac223c20
    ctx->pc = 0x1acd98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15392), GPR_U32(ctx, 2));
    // 0x1acd9c: 0x3c010030
    ctx->pc = 0x1acd9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acda0: 0xac203c24
    ctx->pc = 0x1acda0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15396), GPR_U32(ctx, 0));
    // 0x1acda4: 0x3c010030
    ctx->pc = 0x1acda4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acda8: 0xe7a10068
    ctx->pc = 0x1acda8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1acdac: 0xac203c28
    ctx->pc = 0x1acdacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15400), GPR_U32(ctx, 0));
    // 0x1acdb0: 0x3c010030
    ctx->pc = 0x1acdb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acdb4: 0xe7a00078
    ctx->pc = 0x1acdb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1acdb8: 0xc069558
    ctx->pc = 0x1ACDB8u;
    SET_GPR_U32(ctx, 31, 0x1ACDC0u);
    ctx->pc = 0x1ACDBCu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15404), GPR_U32(ctx, 0));
    ctx->pc = 0x1A5560u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoStat_0x1a5560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACDC0u; }
        else if (ctx->pc != 0x1ACDC0u) { ctx->pc = 0x1ACDC0u; }
    }
    if (ctx->pc != 0x1ACDC0u) { return; }
    ctx->pc = 0x1ACDC0u;
    // 0x1acdc0: 0x70409628
    ctx->pc = 0x1acdc0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1acdc4: 0x16400004
    ctx->pc = 0x1ACDC4u;
    {
        const bool branch_taken_0x1acdc4 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ACDC8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1acdc4) {
            ctx->pc = 0x1ACDD8u;
            goto label_1acdd8;
        }
    }
    ctx->pc = 0x1ACDCCu;
    // 0x1acdcc: 0xc0694bc
    ctx->pc = 0x1ACDCCu;
    SET_GPR_U32(ctx, 31, 0x1ACDD4u);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACDD4u; }
        else if (ctx->pc != 0x1ACDD4u) { ctx->pc = 0x1ACDD4u; }
    }
    if (ctx->pc != 0x1ACDD4u) { return; }
    ctx->pc = 0x1ACDD4u;
    // 0x1acdd4: 0x70002628
    ctx->pc = 0x1acdd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1acdd8:
    // 0x1acdd8: 0xc0552d8
    ctx->pc = 0x1ACDD8u;
    SET_GPR_U32(ctx, 31, 0x1ACDE0u);
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACDE0u; }
        else if (ctx->pc != 0x1ACDE0u) { ctx->pc = 0x1ACDE0u; }
    }
    if (ctx->pc != 0x1ACDE0u) { return; }
    ctx->pc = 0x1ACDE0u;
    // 0x1acde0: 0xc069528
    ctx->pc = 0x1ACDE0u;
    SET_GPR_U32(ctx, 31, 0x1ACDE8u);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACDE8u; }
        else if (ctx->pc != 0x1ACDE8u) { ctx->pc = 0x1ACDE8u; }
    }
    if (ctx->pc != 0x1ACDE8u) { return; }
    ctx->pc = 0x1ACDE8u;
label_1acde8:
    // 0x1acde8: 0x3c011001
    ctx->pc = 0x1acde8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1acdec: 0x8c23d000
    ctx->pc = 0x1acdecu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1acdf0: 0x30630100
    ctx->pc = 0x1acdf0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1acdf4: 0x0
    ctx->pc = 0x1acdf4u;
    // NOP
    // 0x1acdf8: 0x0
    ctx->pc = 0x1acdf8u;
    // NOP
    // 0x1acdfc: 0x1460fffa
    ctx->pc = 0x1ACDFCu;
    {
        const bool branch_taken_0x1acdfc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1acdfc) {
            ctx->pc = 0x1ACDE8u;
            goto label_1acde8;
        }
    }
    ctx->pc = 0x1ACE04u;
    // 0x1ace04: 0x70402628
    ctx->pc = 0x1ace04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ace08: 0x3c020030
    ctx->pc = 0x1ace08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ace0c: 0x24453c20
    ctx->pc = 0x1ace0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 15392));
    // 0x1ace10: 0xc06ac36
    ctx->pc = 0x1ACE10u;
    SET_GPR_U32(ctx, 31, 0x1ACE18u);
    ctx->pc = 0x1ACE14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE18u; }
        else if (ctx->pc != 0x1ACE18u) { ctx->pc = 0x1ACE18u; }
    }
    if (ctx->pc != 0x1ACE18u) { return; }
    ctx->pc = 0x1ACE18u;
    // 0x1ace18: 0xc06952c
    ctx->pc = 0x1ACE18u;
    SET_GPR_U32(ctx, 31, 0x1ACE20u);
    ctx->pc = 0x1ACE1Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE20u; }
        else if (ctx->pc != 0x1ACE20u) { ctx->pc = 0x1ACE20u; }
    }
    if (ctx->pc != 0x1ACE20u) { return; }
    ctx->pc = 0x1ACE20u;
    // 0x1ace20: 0x16400005
    ctx->pc = 0x1ACE20u;
    {
        const bool branch_taken_0x1ace20 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ACE24u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
        if (branch_taken_0x1ace20) {
            ctx->pc = 0x1ACE38u;
            goto label_1ace38;
        }
    }
    ctx->pc = 0x1ACE28u;
    // 0x1ace28: 0x70002628
    ctx->pc = 0x1ace28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ace2c: 0xc0694e8
    ctx->pc = 0x1ACE2Cu;
    SET_GPR_U32(ctx, 31, 0x1ACE34u);
    ctx->pc = 0x1ACE30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE34u; }
        else if (ctx->pc != 0x1ACE34u) { ctx->pc = 0x1ACE34u; }
    }
    if (ctx->pc != 0x1ACE34u) { return; }
    ctx->pc = 0x1ACE34u;
    // 0x1ace34: 0x27a40040
    ctx->pc = 0x1ace34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
label_1ace38:
    // 0x1ace38: 0xc06c038
    ctx->pc = 0x1ACE38u;
    SET_GPR_U32(ctx, 31, 0x1ACE40u);
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE40u; }
        else if (ctx->pc != 0x1ACE40u) { ctx->pc = 0x1ACE40u; }
    }
    if (ctx->pc != 0x1ACE40u) { return; }
    ctx->pc = 0x1ACE40u;
    // 0x1ace40: 0xc06b254
    ctx->pc = 0x1ACE40u;
    SET_GPR_U32(ctx, 31, 0x1ACE48u);
    ctx->pc = 0x1AC950u;
    {
        const uint32_t __entryPc = ctx->pc;
        nl_set_cnv_proj_pers_0x1ac950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE48u; }
        else if (ctx->pc != 0x1ACE48u) { ctx->pc = 0x1ACE48u; }
    }
    if (ctx->pc != 0x1ACE48u) { return; }
    ctx->pc = 0x1ACE48u;
    // 0x1ace48: 0xc06c038
    ctx->pc = 0x1ACE48u;
    SET_GPR_U32(ctx, 31, 0x1ACE50u);
    ctx->pc = 0x1ACE4Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 256));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE50u; }
        else if (ctx->pc != 0x1ACE50u) { ctx->pc = 0x1ACE50u; }
    }
    if (ctx->pc != 0x1ACE50u) { return; }
    ctx->pc = 0x1ACE50u;
    // 0x1ace50: 0xc069338
    ctx->pc = 0x1ACE50u;
    SET_GPR_U32(ctx, 31, 0x1ACE58u);
    ctx->pc = 0x1ACE54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlMatrixMode_0x1a4ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE58u; }
        else if (ctx->pc != 0x1ACE58u) { ctx->pc = 0x1ACE58u; }
    }
    if (ctx->pc != 0x1ACE58u) { return; }
    ctx->pc = 0x1ACE58u;
    // 0x1ace58: 0x7bbf0030
    ctx->pc = 0x1ace58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ace5c: 0x7bb20020
    ctx->pc = 0x1ace5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ace60: 0x7bb10010
    ctx->pc = 0x1ace60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ace64: 0x7bb00000
    ctx->pc = 0x1ace64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ace68: 0x3e00008
    ctx->pc = 0x1ACE68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACE6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACBF4u: goto label_1acbf4;
            case 0x1ACC28u: goto label_1acc28;
            case 0x1ACCE8u: goto label_1acce8;
            case 0x1ACDD8u: goto label_1acdd8;
            case 0x1ACDE8u: goto label_1acde8;
            case 0x1ACE38u: goto label_1ace38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ACE70u;
}
