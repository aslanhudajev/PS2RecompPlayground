#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: att_dest_pyr
// Address: 0x26c7a8 - 0x26c904
void att_dest_pyr_0x26c7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26c7a8u;

    // 0x26c7a8: 0x27bdffc0
    ctx->pc = 0x26c7a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26c7ac: 0xffbf0030
    ctx->pc = 0x26c7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26c7b0: 0xffb20020
    ctx->pc = 0x26c7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26c7b4: 0xffb10010
    ctx->pc = 0x26c7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26c7b8: 0xffb00000
    ctx->pc = 0x26c7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26c7bc: 0x240201a0
    ctx->pc = 0x26c7bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26c7c0: 0x822018
    ctx->pc = 0x26c7c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26c7c4: 0x3c020034
    ctx->pc = 0x26c7c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c7c8: 0x2442eb60
    ctx->pc = 0x26c7c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26c7cc: 0x822021
    ctx->pc = 0x26c7ccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26c7d0: 0x3c020034
    ctx->pc = 0x26c7d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c7d4: 0x3c120034
    ctx->pc = 0x26c7d4u;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
    // 0x26c7d8: 0x8c42f928
    ctx->pc = 0x26c7d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965544)));
    // 0x26c7dc: 0x8e45f92c
    ctx->pc = 0x26c7dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4294965548)));
    // 0x26c7e0: 0x10450042
    ctx->pc = 0x26C7E0u;
    {
        const bool branch_taken_0x26c7e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x26C7E4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 112));
        if (branch_taken_0x26c7e0) {
            ctx->pc = 0x26C8ECu;
            goto label_26c8ec;
        }
    }
    ctx->pc = 0x26C7E8u;
    // 0x26c7e8: 0x52980
    ctx->pc = 0x26c7e8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 6));
    // 0x26c7ec: 0x3c100033
    ctx->pc = 0x26c7ecu;
    SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
    // 0x26c7f0: 0x26104b80
    ctx->pc = 0x26c7f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 19328));
    // 0x26c7f4: 0x220202d
    ctx->pc = 0x26c7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c7f8: 0xc09a278
    ctx->pc = 0x26C7F8u;
    SET_GPR_U32(ctx, 31, 0x26C800u);
    ctx->pc = 0x26C7FCu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->pc = 0x2689E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_pitch_0x2689e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C800u; }
    }
    if (ctx->pc != 0x26C800u) { return; }
    ctx->pc = 0x26C800u;
    // 0x26c800: 0x3c02003c
    ctx->pc = 0x26c800u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26c804: 0xe4403950
    ctx->pc = 0x26c804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14672), bits); }
    // 0x26c808: 0x8e45f92c
    ctx->pc = 0x26c808u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4294965548)));
    // 0x26c80c: 0x52980
    ctx->pc = 0x26c80cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 6));
    // 0x26c810: 0x220202d
    ctx->pc = 0x26c810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c814: 0xc09a2aa
    ctx->pc = 0x26C814u;
    SET_GPR_U32(ctx, 31, 0x26C81Cu);
    ctx->pc = 0x26C818u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->pc = 0x268AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_yaw_0x268aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C81Cu; }
    }
    if (ctx->pc != 0x26C81Cu) { return; }
    ctx->pc = 0x26C81Cu;
    // 0x26c81c: 0x3c02003c
    ctx->pc = 0x26c81cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26c820: 0xe4403954
    ctx->pc = 0x26c820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14676), bits); }
    // 0x26c824: 0x3c0140c9
    ctx->pc = 0x26c824u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26c828: 0x34210fdb
    ctx->pc = 0x26c828u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26c82c: 0x44816000
    ctx->pc = 0x26c82cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x26c830: 0xc0b5a1a
    ctx->pc = 0x26C830u;
    SET_GPR_U32(ctx, 31, 0x26C838u);
    ctx->pc = 0x26C834u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->pc = 0x2D6868u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixAngle_0x2d6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C838u; }
    }
    if (ctx->pc != 0x26C838u) { return; }
    ctx->pc = 0x26C838u;
    // 0x26c838: 0x3c014334
    ctx->pc = 0x26c838u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17204 << 16));
    // 0x26c83c: 0x44810800
    ctx->pc = 0x26c83cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26c840: 0x46010302
    ctx->pc = 0x26c840u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26c844: 0x3c013ea2
    ctx->pc = 0x26c844u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
    // 0x26c848: 0x3421f983
    ctx->pc = 0x26c848u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x26c84c: 0x44810000
    ctx->pc = 0x26c84cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26c850: 0x46006302
    ctx->pc = 0x26c850u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x26c854: 0x44800000
    ctx->pc = 0x26c854u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26c858: 0x46006034
    ctx->pc = 0x26c858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c85c: 0x45000004
    ctx->pc = 0x26C85Cu;
    {
        const bool branch_taken_0x26c85c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c85c) {
            ctx->pc = 0x26C870u;
            goto label_26c870;
        }
    }
    ctx->pc = 0x26C864u;
    // 0x26c864: 0x3c0143b4
    ctx->pc = 0x26c864u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17332 << 16));
    // 0x26c868: 0x44810000
    ctx->pc = 0x26c868u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26c86c: 0x46006300
    ctx->pc = 0x26c86cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_26c870:
    // 0x26c870: 0x3c0143b3
    ctx->pc = 0x26c870u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17331 << 16));
    // 0x26c874: 0x3421f99a
    ctx->pc = 0x26c874u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63898));
    // 0x26c878: 0x44810000
    ctx->pc = 0x26c878u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26c87c: 0x460c0034
    ctx->pc = 0x26c87cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c880: 0x0
    ctx->pc = 0x26c880u;
    // NOP
    // 0x26c884: 0x45000002
    ctx->pc = 0x26C884u;
    {
        const bool branch_taken_0x26c884 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26C888u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x26c884) {
            ctx->pc = 0x26C890u;
            goto label_26c890;
        }
    }
    ctx->pc = 0x26C88Cu;
    // 0x26c88c: 0x44806000
    ctx->pc = 0x26c88cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_26c890:
    // 0x26c890: 0x8c429b88
    ctx->pc = 0x26c890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941576)));
    // 0x26c894: 0x14400016
    ctx->pc = 0x26C894u;
    {
        const bool branch_taken_0x26c894 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26C898u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x26c894) {
            ctx->pc = 0x26C8F0u;
            goto label_26c8f0;
        }
    }
    ctx->pc = 0x26C89Cu;
    // 0x26c89c: 0x3c02003c
    ctx->pc = 0x26c89cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26c8a0: 0xc4403950
    ctx->pc = 0x26c8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c8a4: 0x3c014334
    ctx->pc = 0x26c8a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17204 << 16));
    // 0x26c8a8: 0x44810800
    ctx->pc = 0x26c8a8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26c8ac: 0x46010002
    ctx->pc = 0x26c8acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26c8b0: 0x3c013ea2
    ctx->pc = 0x26c8b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
    // 0x26c8b4: 0x3421f983
    ctx->pc = 0x26c8b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x26c8b8: 0x44810800
    ctx->pc = 0x26c8b8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26c8bc: 0x46010002
    ctx->pc = 0x26c8bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26c8c0: 0x46000064
    ctx->pc = 0x26c8c0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x26c8c4: 0x44100800
    ctx->pc = 0x26c8c4u;
    SET_GPR_U32(ctx, 16, *(uint32_t*)&ctx->f[1]);
    // 0x26c8c8: 0xc0be862
    ctx->pc = 0x26C8C8u;
    SET_GPR_U32(ctx, 31, 0x26C8D0u);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C8D0u; }
    }
    if (ctx->pc != 0x26C8D0u) { return; }
    ctx->pc = 0x26C8D0u;
    // 0x26c8d0: 0x24040002
    ctx->pc = 0x26c8d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c8d4: 0x24050003
    ctx->pc = 0x26c8d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x26c8d8: 0x3c06003b
    ctx->pc = 0x26c8d8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x26c8dc: 0x24c6a610
    ctx->pc = 0x26c8dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294944272));
    // 0x26c8e0: 0x200382d
    ctx->pc = 0x26c8e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c8e4: 0xc0b47da
    ctx->pc = 0x26C8E4u;
    SET_GPR_U32(ctx, 31, 0x26C8ECu);
    ctx->pc = 0x26C8E8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C8ECu; }
    }
    if (ctx->pc != 0x26C8ECu) { return; }
    ctx->pc = 0x26C8ECu;
label_26c8ec:
    // 0x26c8ec: 0xdfbf0030
    ctx->pc = 0x26c8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26c8f0:
    // 0x26c8f0: 0xdfb20020
    ctx->pc = 0x26c8f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c8f4: 0xdfb10010
    ctx->pc = 0x26c8f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c8f8: 0xdfb00000
    ctx->pc = 0x26c8f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c8fc: 0x3e00008
    ctx->pc = 0x26C8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C900u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26C870u: goto label_26c870;
            case 0x26C890u: goto label_26c890;
            case 0x26C8ECu: goto label_26c8ec;
            case 0x26C8F0u: goto label_26c8f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26C904u;
}
