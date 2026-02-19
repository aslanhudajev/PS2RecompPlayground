#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnemyWallCollide
// Address: 0x21ef78 - 0x21f060
void EnemyWallCollide_0x21ef78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21ef78u;

    // 0x21ef78: 0x27bdffd0
    ctx->pc = 0x21ef78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21ef7c: 0xffbf0020
    ctx->pc = 0x21ef7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21ef80: 0xffb10010
    ctx->pc = 0x21ef80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21ef84: 0xffb00000
    ctx->pc = 0x21ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ef88: 0xc0802d
    ctx->pc = 0x21ef88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef8c: 0x40034800
    ctx->pc = 0x21ef8cu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x21ef90: 0x3c02003a
    ctx->pc = 0x21ef90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21ef94: 0x8c4221d0
    ctx->pc = 0x21ef94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x21ef98: 0xac4300e8
    ctx->pc = 0x21ef98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 3));
    // 0x21ef9c: 0x3c030032
    ctx->pc = 0x21ef9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21efa0: 0x24020007
    ctx->pc = 0x21efa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x21efa4: 0xac62fd3c
    ctx->pc = 0x21efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966588), GPR_U32(ctx, 2));
    // 0x21efa8: 0x3c020032
    ctx->pc = 0x21efa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21efac: 0x3c01bf5d
    ctx->pc = 0x21efacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48989 << 16));
    // 0x21efb0: 0x3421b22d
    ctx->pc = 0x21efb0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 45613));
    // 0x21efb4: 0x44810000
    ctx->pc = 0x21efb4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21efb8: 0xe440fd2c
    ctx->pc = 0x21efb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966572), bits); }
    // 0x21efbc: 0x3c020032
    ctx->pc = 0x21efbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21efc0: 0x3c013f5d
    ctx->pc = 0x21efc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16221 << 16));
    // 0x21efc4: 0x3421b22d
    ctx->pc = 0x21efc4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 45613));
    // 0x21efc8: 0x44810000
    ctx->pc = 0x21efc8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21efcc: 0xe440fd30
    ctx->pc = 0x21efccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966576), bits); }
    // 0x21efd0: 0x3c110032
    ctx->pc = 0x21efd0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x21efd4: 0x2626fc00
    ctx->pc = 0x21efd4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 4294966272));
    // 0x21efd8: 0x2407013a
    ctx->pc = 0x21efd8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 314));
    // 0x21efdc: 0xc087866
    ctx->pc = 0x21EFDCu;
    SET_GPR_U32(ctx, 31, 0x21EFE4u);
    ctx->pc = 0x21EFE0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x21E198u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldCollide_0x21e198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EFE4u; }
    }
    if (ctx->pc != 0x21EFE4u) { return; }
    ctx->pc = 0x21EFE4u;
    // 0x21efe4: 0x1200000d
    ctx->pc = 0x21EFE4u;
    {
        const bool branch_taken_0x21efe4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EFE8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21efe4) {
            ctx->pc = 0x21F01Cu;
            goto label_21f01c;
        }
    }
    ctx->pc = 0x21EFECu;
    // 0x21efec: 0x10a00008
    ctx->pc = 0x21EFECu;
    {
        const bool branch_taken_0x21efec = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EFF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294966272));
        if (branch_taken_0x21efec) {
            ctx->pc = 0x21F010u;
            goto label_21f010;
        }
    }
    ctx->pc = 0x21EFF4u;
    // 0x21eff4: 0xc4400030
    ctx->pc = 0x21eff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21eff8: 0xe6000000
    ctx->pc = 0x21eff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21effc: 0xc4400034
    ctx->pc = 0x21effcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f000: 0xe6000004
    ctx->pc = 0x21f000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x21f004: 0xc4400038
    ctx->pc = 0x21f004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f008: 0x10000004
    ctx->pc = 0x21F008u;
    {
        const bool branch_taken_0x21f008 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F00Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        if (branch_taken_0x21f008) {
            ctx->pc = 0x21F01Cu;
            goto label_21f01c;
        }
    }
    ctx->pc = 0x21F010u;
label_21f010:
    // 0x21f010: 0xae000000
    ctx->pc = 0x21f010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x21f014: 0xae000004
    ctx->pc = 0x21f014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x21f018: 0xae000008
    ctx->pc = 0x21f018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_21f01c:
    // 0x21f01c: 0x40034800
    ctx->pc = 0x21f01cu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x21f020: 0x3c02003a
    ctx->pc = 0x21f020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21f024: 0x8c4421d0
    ctx->pc = 0x21f024u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x21f028: 0x8c8200e8
    ctx->pc = 0x21f028u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x21f02c: 0x621823
    ctx->pc = 0x21f02cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f030: 0x8c8200e0
    ctx->pc = 0x21f030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x21f034: 0x621821
    ctx->pc = 0x21f034u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f038: 0xac8300e0
    ctx->pc = 0x21f038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
    // 0x21f03c: 0x8c8200e4
    ctx->pc = 0x21f03cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x21f040: 0x24420001
    ctx->pc = 0x21f040u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f044: 0xac8200e4
    ctx->pc = 0x21f044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 2));
    // 0x21f048: 0xa0102d
    ctx->pc = 0x21f048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f04c: 0xdfbf0020
    ctx->pc = 0x21f04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f050: 0xdfb10010
    ctx->pc = 0x21f050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f054: 0xdfb00000
    ctx->pc = 0x21f054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f058: 0x3e00008
    ctx->pc = 0x21F058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F05Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F010u: goto label_21f010;
            case 0x21F01Cu: goto label_21f01c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F060u;
}
