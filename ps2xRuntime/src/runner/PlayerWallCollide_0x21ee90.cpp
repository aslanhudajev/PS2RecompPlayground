#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerWallCollide
// Address: 0x21ee90 - 0x21ef78
void PlayerWallCollide_0x21ee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21ee90u;

    // 0x21ee90: 0x27bdffd0
    ctx->pc = 0x21ee90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21ee94: 0xffbf0020
    ctx->pc = 0x21ee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21ee98: 0xffb10010
    ctx->pc = 0x21ee98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21ee9c: 0xffb00000
    ctx->pc = 0x21ee9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21eea0: 0xc0802d
    ctx->pc = 0x21eea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eea4: 0x40034800
    ctx->pc = 0x21eea4u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x21eea8: 0x3c02003a
    ctx->pc = 0x21eea8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21eeac: 0x8c4221d0
    ctx->pc = 0x21eeacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x21eeb0: 0xac4300e8
    ctx->pc = 0x21eeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 3));
    // 0x21eeb4: 0x3c030032
    ctx->pc = 0x21eeb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21eeb8: 0x24020007
    ctx->pc = 0x21eeb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x21eebc: 0xac62fd3c
    ctx->pc = 0x21eebcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966588), GPR_U32(ctx, 2));
    // 0x21eec0: 0x3c020032
    ctx->pc = 0x21eec0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21eec4: 0x3c01bf5d
    ctx->pc = 0x21eec4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48989 << 16));
    // 0x21eec8: 0x3421b22d
    ctx->pc = 0x21eec8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 45613));
    // 0x21eecc: 0x44810000
    ctx->pc = 0x21eeccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21eed0: 0xe440fd2c
    ctx->pc = 0x21eed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966572), bits); }
    // 0x21eed4: 0x3c020032
    ctx->pc = 0x21eed4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21eed8: 0x3c013f5d
    ctx->pc = 0x21eed8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16221 << 16));
    // 0x21eedc: 0x3421b22d
    ctx->pc = 0x21eedcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 45613));
    // 0x21eee0: 0x44810000
    ctx->pc = 0x21eee0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21eee4: 0xe440fd30
    ctx->pc = 0x21eee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966576), bits); }
    // 0x21eee8: 0x3c110032
    ctx->pc = 0x21eee8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x21eeec: 0x2626fc00
    ctx->pc = 0x21eeecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 4294966272));
    // 0x21eef0: 0x2407013a
    ctx->pc = 0x21eef0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 314));
    // 0x21eef4: 0xc087866
    ctx->pc = 0x21EEF4u;
    SET_GPR_U32(ctx, 31, 0x21EEFCu);
    ctx->pc = 0x21EEF8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21E198u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldCollide_0x21e198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EEFCu; }
    }
    if (ctx->pc != 0x21EEFCu) { return; }
    ctx->pc = 0x21EEFCu;
    // 0x21eefc: 0x1200000d
    ctx->pc = 0x21EEFCu;
    {
        const bool branch_taken_0x21eefc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EF00u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21eefc) {
            ctx->pc = 0x21EF34u;
            goto label_21ef34;
        }
    }
    ctx->pc = 0x21EF04u;
    // 0x21ef04: 0x10a00008
    ctx->pc = 0x21EF04u;
    {
        const bool branch_taken_0x21ef04 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EF08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294966272));
        if (branch_taken_0x21ef04) {
            ctx->pc = 0x21EF28u;
            goto label_21ef28;
        }
    }
    ctx->pc = 0x21EF0Cu;
    // 0x21ef0c: 0xc4400030
    ctx->pc = 0x21ef0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ef10: 0xe6000000
    ctx->pc = 0x21ef10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21ef14: 0xc4400034
    ctx->pc = 0x21ef14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ef18: 0xe6000004
    ctx->pc = 0x21ef18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x21ef1c: 0xc4400038
    ctx->pc = 0x21ef1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ef20: 0x10000004
    ctx->pc = 0x21EF20u;
    {
        const bool branch_taken_0x21ef20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EF24u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        if (branch_taken_0x21ef20) {
            ctx->pc = 0x21EF34u;
            goto label_21ef34;
        }
    }
    ctx->pc = 0x21EF28u;
label_21ef28:
    // 0x21ef28: 0xae000000
    ctx->pc = 0x21ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x21ef2c: 0xae000004
    ctx->pc = 0x21ef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x21ef30: 0xae000008
    ctx->pc = 0x21ef30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_21ef34:
    // 0x21ef34: 0x40034800
    ctx->pc = 0x21ef34u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x21ef38: 0x3c02003a
    ctx->pc = 0x21ef38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21ef3c: 0x8c4421d0
    ctx->pc = 0x21ef3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x21ef40: 0x8c8200e8
    ctx->pc = 0x21ef40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x21ef44: 0x621823
    ctx->pc = 0x21ef44u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21ef48: 0x8c8200e0
    ctx->pc = 0x21ef48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x21ef4c: 0x621821
    ctx->pc = 0x21ef4cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21ef50: 0xac8300e0
    ctx->pc = 0x21ef50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
    // 0x21ef54: 0x8c8200e4
    ctx->pc = 0x21ef54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x21ef58: 0x24420001
    ctx->pc = 0x21ef58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21ef5c: 0xac8200e4
    ctx->pc = 0x21ef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 2));
    // 0x21ef60: 0xa0102d
    ctx->pc = 0x21ef60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef64: 0xdfbf0020
    ctx->pc = 0x21ef64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ef68: 0xdfb10010
    ctx->pc = 0x21ef68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ef6c: 0xdfb00000
    ctx->pc = 0x21ef6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ef70: 0x3e00008
    ctx->pc = 0x21EF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EF74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21EF28u: goto label_21ef28;
            case 0x21EF34u: goto label_21ef34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21EF78u;
}
