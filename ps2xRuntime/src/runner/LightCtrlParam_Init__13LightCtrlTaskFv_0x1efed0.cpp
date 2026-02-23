#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LightCtrlParam_Init__13LightCtrlTaskFv
// Address: 0x1efed0 - 0x1f0310
void LightCtrlParam_Init__13LightCtrlTaskFv_0x1efed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LightCtrlParam_Init__13LightCtrlTaskFv");


    ctx->pc = 0x1efed0u;

    // 0x1efed0: 0x27bdffd0
    ctx->pc = 0x1efed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1efed4: 0x7fbf0020
    ctx->pc = 0x1efed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1efed8: 0x7fb10010
    ctx->pc = 0x1efed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1efedc: 0x7fb00000
    ctx->pc = 0x1efedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1efee0: 0x70808628
    ctx->pc = 0x1efee0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1efee4: 0x70008e28
    ctx->pc = 0x1efee4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1efee8:
    // 0x1efee8: 0x72202628
    ctx->pc = 0x1efee8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1efeec: 0xc069b30
    ctx->pc = 0x1EFEECu;
    SET_GPR_U32(ctx, 31, 0x1EFEF4u);
    ctx->pc = 0x1EFEF0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A6CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightSwitch_0x1a6cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFEF4u; }
        else if (ctx->pc != 0x1EFEF4u) { ctx->pc = 0x1EFEF4u; }
    }
    if (ctx->pc != 0x1EFEF4u) { return; }
    ctx->pc = 0x1EFEF4u;
    // 0x1efef4: 0x26310001
    ctx->pc = 0x1efef4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1efef8: 0x2a230004
    ctx->pc = 0x1efef8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 4));
    // 0x1efefc: 0x1460fffa
    ctx->pc = 0x1EFEFCu;
    {
        const bool branch_taken_0x1efefc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1efefc) {
            ctx->pc = 0x1EFEE8u;
            goto label_1efee8;
        }
    }
    ctx->pc = 0x1EFF04u;
    // 0x1eff04: 0xae00000c
    ctx->pc = 0x1eff04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1eff08: 0x8e04000c
    ctx->pc = 0x1eff08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1eff0c: 0x70003628
    ctx->pc = 0x1eff0cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eff10: 0x72002e28
    ctx->pc = 0x1eff10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eff14: 0x41840
    ctx->pc = 0x1eff14u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1eff18: 0x641821
    ctx->pc = 0x1eff18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1eff1c: 0x318c0
    ctx->pc = 0x1eff1cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1eff20: 0x641823
    ctx->pc = 0x1eff20u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1eff24: 0x31880
    ctx->pc = 0x1eff24u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eff28: 0x2031821
    ctx->pc = 0x1eff28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1eff2c: 0x24630010
    ctx->pc = 0x1eff2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1eff30: 0xaf838d44
    ctx->pc = 0x1eff30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937924), GPR_U32(ctx, 3));
label_1eff34:
    // 0x1eff34: 0x3c010027
    ctx->pc = 0x1eff34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1eff38: 0xc420c730
    ctx->pc = 0x1eff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eff3c: 0x24c60001
    ctx->pc = 0x1eff3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1eff40: 0x28c30004
    ctx->pc = 0x1eff40u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 4));
    // 0x1eff44: 0xe4a00010
    ctx->pc = 0x1eff44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x1eff48: 0x3c010027
    ctx->pc = 0x1eff48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1eff4c: 0xc420c734
    ctx->pc = 0x1eff4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eff50: 0xe4a00014
    ctx->pc = 0x1eff50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x1eff54: 0x3c010027
    ctx->pc = 0x1eff54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1eff58: 0xc420c738
    ctx->pc = 0x1eff58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eff5c: 0xe4a00018
    ctx->pc = 0x1eff5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x1eff60: 0x3c010027
    ctx->pc = 0x1eff60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1eff64: 0xc420c73c
    ctx->pc = 0x1eff64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eff68: 0xe4a0001c
    ctx->pc = 0x1eff68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x1eff6c: 0x3c010027
    ctx->pc = 0x1eff6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1eff70: 0xc420c740
    ctx->pc = 0x1eff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eff74: 0xe4a00020
    ctx->pc = 0x1eff74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x1eff78: 0x3c010027
    ctx->pc = 0x1eff78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1eff7c: 0xc420c744
    ctx->pc = 0x1eff7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eff80: 0xe4a00024
    ctx->pc = 0x1eff80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x1eff84: 0x3c010027
    ctx->pc = 0x1eff84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1eff88: 0xc420c748
    ctx->pc = 0x1eff88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eff8c: 0xe4a00028
    ctx->pc = 0x1eff8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x1eff90: 0x3c010027
    ctx->pc = 0x1eff90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1eff94: 0xc420c74c
    ctx->pc = 0x1eff94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eff98: 0xe4a0002c
    ctx->pc = 0x1eff98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x1eff9c: 0x3c010027
    ctx->pc = 0x1eff9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1effa0: 0xc420c750
    ctx->pc = 0x1effa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1effa4: 0xe4a00030
    ctx->pc = 0x1effa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x1effa8: 0x3c010027
    ctx->pc = 0x1effa8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1effac: 0xc420c754
    ctx->pc = 0x1effacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1effb0: 0xe4a00034
    ctx->pc = 0x1effb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x1effb4: 0x3c010027
    ctx->pc = 0x1effb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1effb8: 0xc420c758
    ctx->pc = 0x1effb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1effbc: 0xe4a00038
    ctx->pc = 0x1effbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x1effc0: 0x3c010027
    ctx->pc = 0x1effc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1effc4: 0xc420c75c
    ctx->pc = 0x1effc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1effc8: 0xe4a0003c
    ctx->pc = 0x1effc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x1effcc: 0x3c010027
    ctx->pc = 0x1effccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1effd0: 0xc420c760
    ctx->pc = 0x1effd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1effd4: 0xe4a00040
    ctx->pc = 0x1effd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x1effd8: 0x3c010027
    ctx->pc = 0x1effd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1effdc: 0xc420c764
    ctx->pc = 0x1effdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1effe0: 0xe4a00044
    ctx->pc = 0x1effe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x1effe4: 0x3c010027
    ctx->pc = 0x1effe4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1effe8: 0xc420c768
    ctx->pc = 0x1effe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1effec: 0xe4a00048
    ctx->pc = 0x1effecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x1efff0: 0x3c010027
    ctx->pc = 0x1efff0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1efff4: 0xc420c76c
    ctx->pc = 0x1efff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efff8: 0xe4a0004c
    ctx->pc = 0x1efff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x1efffc: 0x3c010027
    ctx->pc = 0x1efffcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0000: 0xc420c770
    ctx->pc = 0x1f0000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0004: 0xe4a00050
    ctx->pc = 0x1f0004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x1f0008: 0x3c010027
    ctx->pc = 0x1f0008u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f000c: 0xc420c774
    ctx->pc = 0x1f000cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0010: 0xe4a00054
    ctx->pc = 0x1f0010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x1f0014: 0x3c010027
    ctx->pc = 0x1f0014u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0018: 0x8c24c778
    ctx->pc = 0x1f0018u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294952824)));
    // 0x1f001c: 0xaca40058
    ctx->pc = 0x1f001cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 4));
    // 0x1f0020: 0x3c010027
    ctx->pc = 0x1f0020u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0024: 0x8c24c77c
    ctx->pc = 0x1f0024u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294952828)));
    // 0x1f0028: 0xaca4005c
    ctx->pc = 0x1f0028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 4));
    // 0x1f002c: 0x3c010027
    ctx->pc = 0x1f002cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0030: 0xc420c780
    ctx->pc = 0x1f0030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0034: 0xe4a00060
    ctx->pc = 0x1f0034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
    // 0x1f0038: 0x3c010027
    ctx->pc = 0x1f0038u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f003c: 0xc420c784
    ctx->pc = 0x1f003cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0040: 0xe4a00064
    ctx->pc = 0x1f0040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x1f0044: 0x3c010027
    ctx->pc = 0x1f0044u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0048: 0xc420c788
    ctx->pc = 0x1f0048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f004c: 0xe4a00068
    ctx->pc = 0x1f004cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 104), bits); }
    // 0x1f0050: 0x1460ffb8
    ctx->pc = 0x1F0050u;
    {
        const bool branch_taken_0x1f0050 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F0054u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 92));
        if (branch_taken_0x1f0050) {
            ctx->pc = 0x1EFF34u;
            goto label_1eff34;
        }
    }
    ctx->pc = 0x1F0058u;
    // 0x1f0058: 0x70003628
    ctx->pc = 0x1f0058u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f005c: 0x72002e28
    ctx->pc = 0x1f005cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1f0060:
    // 0x1f0060: 0x3c010027
    ctx->pc = 0x1f0060u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0064: 0x8c24c790
    ctx->pc = 0x1f0064u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294952848)));
    // 0x1f0068: 0x24c60001
    ctx->pc = 0x1f0068u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f006c: 0x28c30003
    ctx->pc = 0x1f006cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 3));
    // 0x1f0070: 0xaca40180
    ctx->pc = 0x1f0070u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 384), GPR_U32(ctx, 4));
    // 0x1f0074: 0x3c010027
    ctx->pc = 0x1f0074u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0078: 0x8c24c794
    ctx->pc = 0x1f0078u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294952852)));
    // 0x1f007c: 0xaca40184
    ctx->pc = 0x1f007cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 388), GPR_U32(ctx, 4));
    // 0x1f0080: 0x3c010027
    ctx->pc = 0x1f0080u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0084: 0xc420c798
    ctx->pc = 0x1f0084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0088: 0xe4a00188
    ctx->pc = 0x1f0088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x1f008c: 0x3c010027
    ctx->pc = 0x1f008cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0090: 0xc420c79c
    ctx->pc = 0x1f0090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0094: 0xe4a0018c
    ctx->pc = 0x1f0094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 396), bits); }
    // 0x1f0098: 0x3c010027
    ctx->pc = 0x1f0098u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f009c: 0xc420c7a0
    ctx->pc = 0x1f009cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f00a0: 0xe4a00190
    ctx->pc = 0x1f00a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 400), bits); }
    // 0x1f00a4: 0x3c010027
    ctx->pc = 0x1f00a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f00a8: 0xc420c7a4
    ctx->pc = 0x1f00a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f00ac: 0xe4a00194
    ctx->pc = 0x1f00acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 404), bits); }
    // 0x1f00b0: 0x3c010027
    ctx->pc = 0x1f00b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f00b4: 0xc420c7a8
    ctx->pc = 0x1f00b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f00b8: 0xe4a00198
    ctx->pc = 0x1f00b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 408), bits); }
    // 0x1f00bc: 0x3c010027
    ctx->pc = 0x1f00bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f00c0: 0xc420c7ac
    ctx->pc = 0x1f00c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f00c4: 0xe4a0019c
    ctx->pc = 0x1f00c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 412), bits); }
    // 0x1f00c8: 0x3c010027
    ctx->pc = 0x1f00c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f00cc: 0x8c24c7b0
    ctx->pc = 0x1f00ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294952880)));
    // 0x1f00d0: 0xaca401a0
    ctx->pc = 0x1f00d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 416), GPR_U32(ctx, 4));
    // 0x1f00d4: 0x3c010027
    ctx->pc = 0x1f00d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f00d8: 0x8c24c7b4
    ctx->pc = 0x1f00d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294952884)));
    // 0x1f00dc: 0xaca401a4
    ctx->pc = 0x1f00dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 420), GPR_U32(ctx, 4));
    // 0x1f00e0: 0x3c010027
    ctx->pc = 0x1f00e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f00e4: 0xc420c7b8
    ctx->pc = 0x1f00e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f00e8: 0xe4a001a8
    ctx->pc = 0x1f00e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 424), bits); }
    // 0x1f00ec: 0x3c010027
    ctx->pc = 0x1f00ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f00f0: 0xc420c7bc
    ctx->pc = 0x1f00f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f00f4: 0xe4a001ac
    ctx->pc = 0x1f00f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 428), bits); }
    // 0x1f00f8: 0x3c010027
    ctx->pc = 0x1f00f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f00fc: 0xc420c7c0
    ctx->pc = 0x1f00fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0100: 0xe4a001b0
    ctx->pc = 0x1f0100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 432), bits); }
    // 0x1f0104: 0x3c010027
    ctx->pc = 0x1f0104u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0108: 0x8c24c7c4
    ctx->pc = 0x1f0108u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294952900)));
    // 0x1f010c: 0xaca401b4
    ctx->pc = 0x1f010cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 436), GPR_U32(ctx, 4));
    // 0x1f0110: 0x3c010027
    ctx->pc = 0x1f0110u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0114: 0x8c24c7c8
    ctx->pc = 0x1f0114u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294952904)));
    // 0x1f0118: 0xaca401b8
    ctx->pc = 0x1f0118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 440), GPR_U32(ctx, 4));
    // 0x1f011c: 0x3c010027
    ctx->pc = 0x1f011cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0120: 0xc420c7cc
    ctx->pc = 0x1f0120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0124: 0xe4a001bc
    ctx->pc = 0x1f0124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 444), bits); }
    // 0x1f0128: 0x3c010027
    ctx->pc = 0x1f0128u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f012c: 0xc420c7d0
    ctx->pc = 0x1f012cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0130: 0xe4a001c0
    ctx->pc = 0x1f0130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 448), bits); }
    // 0x1f0134: 0x3c010027
    ctx->pc = 0x1f0134u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0138: 0xc420c7d4
    ctx->pc = 0x1f0138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f013c: 0xe4a001c4
    ctx->pc = 0x1f013cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 452), bits); }
    // 0x1f0140: 0x1460ffc7
    ctx->pc = 0x1F0140u;
    {
        const bool branch_taken_0x1f0140 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F0144u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 72));
        if (branch_taken_0x1f0140) {
            ctx->pc = 0x1F0060u;
            goto label_1f0060;
        }
    }
    ctx->pc = 0x1F0148u;
    // 0x1f0148: 0x3c010027
    ctx->pc = 0x1f0148u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f014c: 0x8c23c080
    ctx->pc = 0x1f014cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294951040)));
    // 0x1f0150: 0xae030454
    ctx->pc = 0x1f0150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1108), GPR_U32(ctx, 3));
    // 0x1f0154: 0x3c010027
    ctx->pc = 0x1f0154u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0158: 0xc420c084
    ctx->pc = 0x1f0158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294951044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f015c: 0xe6000458
    ctx->pc = 0x1f015cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1112), bits); }
    // 0x1f0160: 0x3c010027
    ctx->pc = 0x1f0160u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0164: 0xc420c088
    ctx->pc = 0x1f0164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294951048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0168: 0xe600045c
    ctx->pc = 0x1f0168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1116), bits); }
    // 0x1f016c: 0x3c010027
    ctx->pc = 0x1f016cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0170: 0xc420c08c
    ctx->pc = 0x1f0170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294951052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0174: 0xe6000460
    ctx->pc = 0x1f0174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1120), bits); }
    // 0x1f0178: 0x8e030454
    ctx->pc = 0x1f0178u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x1f017c: 0xae030414
    ctx->pc = 0x1f017cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 3));
    // 0x1f0180: 0xc6000458
    ctx->pc = 0x1f0180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0184: 0xe6000418
    ctx->pc = 0x1f0184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1048), bits); }
    // 0x1f0188: 0xc600045c
    ctx->pc = 0x1f0188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f018c: 0xe600041c
    ctx->pc = 0x1f018cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1052), bits); }
    // 0x1f0190: 0xc6000460
    ctx->pc = 0x1f0190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0194: 0xe6000420
    ctx->pc = 0x1f0194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1056), bits); }
    // 0x1f0198: 0x8e030414
    ctx->pc = 0x1f0198u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1044)));
    // 0x1f019c: 0xae030404
    ctx->pc = 0x1f019cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 3));
    // 0x1f01a0: 0xc6000418
    ctx->pc = 0x1f01a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f01a4: 0xe6000408
    ctx->pc = 0x1f01a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1032), bits); }
    // 0x1f01a8: 0xc600041c
    ctx->pc = 0x1f01a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f01ac: 0xe600040c
    ctx->pc = 0x1f01acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1036), bits); }
    // 0x1f01b0: 0xc6000420
    ctx->pc = 0x1f01b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f01b4: 0xe6000410
    ctx->pc = 0x1f01b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1040), bits); }
    // 0x1f01b8: 0x8e030404
    ctx->pc = 0x1f01b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x1f01bc: 0xae0303f4
    ctx->pc = 0x1f01bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1012), GPR_U32(ctx, 3));
    // 0x1f01c0: 0xc6000408
    ctx->pc = 0x1f01c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f01c4: 0xe60003f8
    ctx->pc = 0x1f01c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1016), bits); }
    // 0x1f01c8: 0xc600040c
    ctx->pc = 0x1f01c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f01cc: 0xe60003fc
    ctx->pc = 0x1f01ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1020), bits); }
    // 0x1f01d0: 0xc6000410
    ctx->pc = 0x1f01d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f01d4: 0xe6000400
    ctx->pc = 0x1f01d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1024), bits); }
    // 0x1f01d8: 0x8e0303f4
    ctx->pc = 0x1f01d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1012)));
    // 0x1f01dc: 0xae0303e4
    ctx->pc = 0x1f01dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 996), GPR_U32(ctx, 3));
    // 0x1f01e0: 0xc60003f8
    ctx->pc = 0x1f01e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f01e4: 0xe60003e8
    ctx->pc = 0x1f01e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1000), bits); }
    // 0x1f01e8: 0xc60003fc
    ctx->pc = 0x1f01e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f01ec: 0xe60003ec
    ctx->pc = 0x1f01ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1004), bits); }
    // 0x1f01f0: 0xc6000400
    ctx->pc = 0x1f01f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f01f4: 0xe60003f0
    ctx->pc = 0x1f01f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1008), bits); }
    // 0x1f01f8: 0x8e0303e4
    ctx->pc = 0x1f01f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 996)));
    // 0x1f01fc: 0xae0303d4
    ctx->pc = 0x1f01fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 980), GPR_U32(ctx, 3));
    // 0x1f0200: 0xc60003e8
    ctx->pc = 0x1f0200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0204: 0xe60003d8
    ctx->pc = 0x1f0204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 984), bits); }
    // 0x1f0208: 0xc60003ec
    ctx->pc = 0x1f0208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f020c: 0xe60003dc
    ctx->pc = 0x1f020cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 988), bits); }
    // 0x1f0210: 0xc60003f0
    ctx->pc = 0x1f0210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0214: 0xe60003e0
    ctx->pc = 0x1f0214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 992), bits); }
    // 0x1f0218: 0x8e0303d4
    ctx->pc = 0x1f0218u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 980)));
    // 0x1f021c: 0xae0303c4
    ctx->pc = 0x1f021cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 3));
    // 0x1f0220: 0xc60003d8
    ctx->pc = 0x1f0220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0224: 0xe60003c8
    ctx->pc = 0x1f0224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 968), bits); }
    // 0x1f0228: 0xc60003dc
    ctx->pc = 0x1f0228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f022c: 0xe60003cc
    ctx->pc = 0x1f022cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 972), bits); }
    // 0x1f0230: 0xc60003e0
    ctx->pc = 0x1f0230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0234: 0xe60003d0
    ctx->pc = 0x1f0234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 976), bits); }
    // 0x1f0238: 0x8e0303c4
    ctx->pc = 0x1f0238u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 964)));
    // 0x1f023c: 0xae030444
    ctx->pc = 0x1f023cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1092), GPR_U32(ctx, 3));
    // 0x1f0240: 0xc60003c8
    ctx->pc = 0x1f0240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0244: 0xe6000448
    ctx->pc = 0x1f0244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1096), bits); }
    // 0x1f0248: 0xc60003cc
    ctx->pc = 0x1f0248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f024c: 0xe600044c
    ctx->pc = 0x1f024cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1100), bits); }
    // 0x1f0250: 0xc60003d0
    ctx->pc = 0x1f0250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0254: 0xe6000450
    ctx->pc = 0x1f0254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1104), bits); }
    // 0x1f0258: 0x8e030444
    ctx->pc = 0x1f0258u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1092)));
    // 0x1f025c: 0xae030434
    ctx->pc = 0x1f025cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1076), GPR_U32(ctx, 3));
    // 0x1f0260: 0xc6000448
    ctx->pc = 0x1f0260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0264: 0xe6000438
    ctx->pc = 0x1f0264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1080), bits); }
    // 0x1f0268: 0xc600044c
    ctx->pc = 0x1f0268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f026c: 0xe600043c
    ctx->pc = 0x1f026cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1084), bits); }
    // 0x1f0270: 0xc6000450
    ctx->pc = 0x1f0270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0274: 0xe6000440
    ctx->pc = 0x1f0274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1088), bits); }
    // 0x1f0278: 0x8e030434
    ctx->pc = 0x1f0278u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1076)));
    // 0x1f027c: 0xae030424
    ctx->pc = 0x1f027cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 3));
    // 0x1f0280: 0xc6000438
    ctx->pc = 0x1f0280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0284: 0xe6000428
    ctx->pc = 0x1f0284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1064), bits); }
    // 0x1f0288: 0xc600043c
    ctx->pc = 0x1f0288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f028c: 0xe600042c
    ctx->pc = 0x1f028cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1068), bits); }
    // 0x1f0290: 0xc6000440
    ctx->pc = 0x1f0290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0294: 0xe6000430
    ctx->pc = 0x1f0294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1072), bits); }
    // 0x1f0298: 0x8e030424
    ctx->pc = 0x1f0298u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1060)));
    // 0x1f029c: 0xae0303b4
    ctx->pc = 0x1f029cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 3));
    // 0x1f02a0: 0xc6000428
    ctx->pc = 0x1f02a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f02a4: 0xe60003b8
    ctx->pc = 0x1f02a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 952), bits); }
    // 0x1f02a8: 0xc600042c
    ctx->pc = 0x1f02a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f02ac: 0xe60003bc
    ctx->pc = 0x1f02acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 956), bits); }
    // 0x1f02b0: 0xc6000430
    ctx->pc = 0x1f02b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f02b4: 0xe60003c0
    ctx->pc = 0x1f02b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 960), bits); }
    // 0x1f02b8: 0x8e0303b4
    ctx->pc = 0x1f02b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 948)));
    // 0x1f02bc: 0xae0303a4
    ctx->pc = 0x1f02bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 3));
    // 0x1f02c0: 0xc60003b8
    ctx->pc = 0x1f02c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f02c4: 0xe60003a8
    ctx->pc = 0x1f02c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 936), bits); }
    // 0x1f02c8: 0xc60003bc
    ctx->pc = 0x1f02c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f02cc: 0xe60003ac
    ctx->pc = 0x1f02ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 940), bits); }
    // 0x1f02d0: 0xc60003c0
    ctx->pc = 0x1f02d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f02d4: 0xe60003b0
    ctx->pc = 0x1f02d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 944), bits); }
    // 0x1f02d8: 0x8e0303a4
    ctx->pc = 0x1f02d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 932)));
    // 0x1f02dc: 0xae030394
    ctx->pc = 0x1f02dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 916), GPR_U32(ctx, 3));
    // 0x1f02e0: 0xc60003a8
    ctx->pc = 0x1f02e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f02e4: 0xe6000398
    ctx->pc = 0x1f02e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 920), bits); }
    // 0x1f02e8: 0xc60003ac
    ctx->pc = 0x1f02e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f02ec: 0xe600039c
    ctx->pc = 0x1f02ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 924), bits); }
    // 0x1f02f0: 0xc60003b0
    ctx->pc = 0x1f02f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f02f4: 0xe60003a0
    ctx->pc = 0x1f02f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
    // 0x1f02f8: 0xae00046c
    ctx->pc = 0x1f02f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1132), GPR_U32(ctx, 0));
    // 0x1f02fc: 0x7bbf0020
    ctx->pc = 0x1f02fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0300: 0x7bb10010
    ctx->pc = 0x1f0300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0304: 0x7bb00000
    ctx->pc = 0x1f0304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0308: 0x3e00008
    ctx->pc = 0x1F0308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F030Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFEE8u: goto label_1efee8;
            case 0x1EFF34u: goto label_1eff34;
            case 0x1F0060u: goto label_1f0060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0310u;
}
