#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerProcessScale
// Address: 0x22d088 - 0x22d1ac
void PlayerProcessScale_0x22d088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22d088u;

    // 0x22d088: 0x27bdffd0
    ctx->pc = 0x22d088u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22d08c: 0xffbf0020
    ctx->pc = 0x22d08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22d090: 0xffb10010
    ctx->pc = 0x22d090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22d094: 0xffb00000
    ctx->pc = 0x22d094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22d098: 0x80802d
    ctx->pc = 0x22d098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d09c: 0x8e03000c
    ctx->pc = 0x22d09cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x22d0a0: 0x2402000c
    ctx->pc = 0x22d0a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x22d0a4: 0x1462000c
    ctx->pc = 0x22D0A4u;
    {
        const bool branch_taken_0x22d0a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x22D0A8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22d0a4) {
            ctx->pc = 0x22D0D8u;
            goto label_22d0d8;
        }
    }
    ctx->pc = 0x22D0ACu;
    // 0x22d0ac: 0x8e040080
    ctx->pc = 0x22d0acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x22d0b0: 0x3c013fcc
    ctx->pc = 0x22d0b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16332 << 16));
    // 0x22d0b4: 0x3421cccd
    ctx->pc = 0x22d0b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x22d0b8: 0x44816000
    ctx->pc = 0x22d0b8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x22d0bc: 0x46006346
    ctx->pc = 0x22d0bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x22d0c0: 0x46006386
    ctx->pc = 0x22d0c0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x22d0c4: 0xdfbf0020
    ctx->pc = 0x22d0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d0c8: 0xdfb10010
    ctx->pc = 0x22d0c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d0cc: 0xdfb00000
    ctx->pc = 0x22d0ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d0d0: 0x80b41ae
    ctx->pc = 0x22D0D0u;
    ctx->pc = 0x22D0D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2D06B8u;
    MBTreeSetScale_0x2d06b8(rdram, ctx, runtime); return;
    ctx->pc = 0x22D0D8u;
label_22d0d8:
    // 0x22d0d8: 0x50a00010
    ctx->pc = 0x22D0D8u;
    {
        const bool branch_taken_0x22d0d8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x22d0d8) {
            ctx->pc = 0x22D0DCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
            ctx->pc = 0x22D11Cu;
            goto label_22d11c;
        }
    }
    ctx->pc = 0x22D0E0u;
    // 0x22d0e0: 0x8e020138
    ctx->pc = 0x22d0e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x22d0e4: 0x30420100
    ctx->pc = 0x22d0e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x22d0e8: 0x5040000c
    ctx->pc = 0x22D0E8u;
    {
        const bool branch_taken_0x22d0e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22d0e8) {
            ctx->pc = 0x22D0ECu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
            ctx->pc = 0x22D11Cu;
            goto label_22d11c;
        }
    }
    ctx->pc = 0x22D0F0u;
    // 0x22d0f0: 0x8e040080
    ctx->pc = 0x22d0f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x22d0f4: 0x3c013fa6
    ctx->pc = 0x22d0f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16294 << 16));
    // 0x22d0f8: 0x34216666
    ctx->pc = 0x22d0f8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
    // 0x22d0fc: 0x44816000
    ctx->pc = 0x22d0fcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x22d100: 0x46006346
    ctx->pc = 0x22d100u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x22d104: 0x46006386
    ctx->pc = 0x22d104u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x22d108: 0xdfbf0020
    ctx->pc = 0x22d108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d10c: 0xdfb10010
    ctx->pc = 0x22d10cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d110: 0xdfb00000
    ctx->pc = 0x22d110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d114: 0x80b41ae
    ctx->pc = 0x22D114u;
    ctx->pc = 0x22D118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2D06B8u;
    MBTreeSetScale_0x2d06b8(rdram, ctx, runtime); return;
    ctx->pc = 0x22D11Cu;
label_22d11c:
    // 0x22d11c: 0x28420063
    ctx->pc = 0x22d11cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 99));
    // 0x22d120: 0x1440000b
    ctx->pc = 0x22D120u;
    {
        const bool branch_taken_0x22d120 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22D124u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
        if (branch_taken_0x22d120) {
            ctx->pc = 0x22D150u;
            goto label_22d150;
        }
    }
    ctx->pc = 0x22D128u;
    // 0x22d128: 0x3c013f99
    ctx->pc = 0x22d128u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16281 << 16));
    // 0x22d12c: 0x3421999a
    ctx->pc = 0x22d12cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x22d130: 0x44816000
    ctx->pc = 0x22d130u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x22d134: 0x46006346
    ctx->pc = 0x22d134u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x22d138: 0x46006386
    ctx->pc = 0x22d138u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x22d13c: 0xdfbf0020
    ctx->pc = 0x22d13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d140: 0xdfb10010
    ctx->pc = 0x22d140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d144: 0xdfb00000
    ctx->pc = 0x22d144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d148: 0x80b41ae
    ctx->pc = 0x22D148u;
    ctx->pc = 0x22D14Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2D06B8u;
    MBTreeSetScale_0x2d06b8(rdram, ctx, runtime); return;
    ctx->pc = 0x22D150u;
label_22d150:
    // 0x22d150: 0x24050008
    ctx->pc = 0x22d150u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x22d154: 0xc0b41e4
    ctx->pc = 0x22D154u;
    SET_GPR_U32(ctx, 31, 0x22D15Cu);
    ctx->pc = 0x22D158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D15Cu; }
    }
    if (ctx->pc != 0x22D15Cu) { return; }
    ctx->pc = 0x22D15Cu;
    // 0x22d15c: 0x8e020080
    ctx->pc = 0x22d15cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x22d160: 0x3c013f80
    ctx->pc = 0x22d160u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x22d164: 0x44810000
    ctx->pc = 0x22d164u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x22d168: 0xe4400040
    ctx->pc = 0x22d168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x22d16c: 0x8e020080
    ctx->pc = 0x22d16cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x22d170: 0xe4400044
    ctx->pc = 0x22d170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x22d174: 0x8e020080
    ctx->pc = 0x22d174u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x22d178: 0xe4400048
    ctx->pc = 0x22d178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x22d17c: 0x32220100
    ctx->pc = 0x22d17cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 256));
    // 0x22d180: 0x10400006
    ctx->pc = 0x22D180u;
    {
        const bool branch_taken_0x22d180 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22D184u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x22d180) {
            ctx->pc = 0x22D19Cu;
            goto label_22d19c;
        }
    }
    ctx->pc = 0x22D188u;
    // 0x22d188: 0x8e040000
    ctx->pc = 0x22d188u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22d18c: 0xdfb10010
    ctx->pc = 0x22d18cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d190: 0xdfb00000
    ctx->pc = 0x22d190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d194: 0x809815e
    ctx->pc = 0x22D194u;
    ctx->pc = 0x22D198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x260578u;
    AudioUngrow_0x260578(rdram, ctx, runtime); return;
    ctx->pc = 0x22D19Cu;
label_22d19c:
    // 0x22d19c: 0xdfb10010
    ctx->pc = 0x22d19cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d1a0: 0xdfb00000
    ctx->pc = 0x22d1a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d1a4: 0x3e00008
    ctx->pc = 0x22D1A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D1A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22D0D8u: goto label_22d0d8;
            case 0x22D11Cu: goto label_22d11c;
            case 0x22D150u: goto label_22d150;
            case 0x22D19Cu: goto label_22d19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22D1ACu;
}
