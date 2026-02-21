#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerFacePlayer
// Address: 0x2445c0 - 0x244700
void PlayerFacePlayer_0x2445c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2445c0u;

    // 0x2445c0: 0x27bdffc0
    ctx->pc = 0x2445c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2445c4: 0xffbf0020
    ctx->pc = 0x2445c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2445c8: 0xffb00010
    ctx->pc = 0x2445c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2445cc: 0xe7b40030
    ctx->pc = 0x2445ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2445d0: 0x80802d
    ctx->pc = 0x2445d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2445d4: 0x46006506
    ctx->pc = 0x2445d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2445d8: 0xc4a00050
    ctx->pc = 0x2445d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2445dc: 0xc6010050
    ctx->pc = 0x2445dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2445e0: 0x46010001
    ctx->pc = 0x2445e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2445e4: 0xe7a00000
    ctx->pc = 0x2445e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2445e8: 0xc4a00054
    ctx->pc = 0x2445e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2445ec: 0xc6010054
    ctx->pc = 0x2445ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2445f0: 0x46010001
    ctx->pc = 0x2445f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2445f4: 0xe7a00004
    ctx->pc = 0x2445f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2445f8: 0xc4a00058
    ctx->pc = 0x2445f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2445fc: 0xc6010058
    ctx->pc = 0x2445fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244600: 0x46010001
    ctx->pc = 0x244600u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x244604: 0xe7a00008
    ctx->pc = 0x244604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x244608: 0xc0b58ca
    ctx->pc = 0x244608u;
    SET_GPR_U32(ctx, 31, 0x244610u);
    ctx->pc = 0x24460Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlowNormalVector_0x2d6328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244610u; }
    }
    if (ctx->pc != 0x244610u) { return; }
    ctx->pc = 0x244610u;
    // 0x244610: 0xc7ac0000
    ctx->pc = 0x244610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x244614: 0xc0ba04a
    ctx->pc = 0x244614u;
    SET_GPR_U32(ctx, 31, 0x24461Cu);
    ctx->pc = 0x244618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24461Cu; }
    }
    if (ctx->pc != 0x24461Cu) { return; }
    ctx->pc = 0x24461Cu;
    // 0x24461c: 0x46140500
    ctx->pc = 0x24461cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x244620: 0x3c014049
    ctx->pc = 0x244620u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x244624: 0x34210fdb
    ctx->pc = 0x244624u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x244628: 0x44810000
    ctx->pc = 0x244628u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24462c: 0x46140034
    ctx->pc = 0x24462cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244630: 0x45000006
    ctx->pc = 0x244630u;
    {
        const bool branch_taken_0x244630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244630) {
            ctx->pc = 0x24464Cu;
            goto label_24464c;
        }
    }
    ctx->pc = 0x244638u;
    // 0x244638: 0x3c0140c9
    ctx->pc = 0x244638u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x24463c: 0x34210fdb
    ctx->pc = 0x24463cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x244640: 0x44810000
    ctx->pc = 0x244640u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x244644: 0x1000000c
    ctx->pc = 0x244644u;
    {
        const bool branch_taken_0x244644 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244648u;
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x244644) {
            ctx->pc = 0x244678u;
            goto label_244678;
        }
    }
    ctx->pc = 0x24464Cu;
label_24464c:
    // 0x24464c: 0x3c01c049
    ctx->pc = 0x24464cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x244650: 0x34210fdb
    ctx->pc = 0x244650u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x244654: 0x44810000
    ctx->pc = 0x244654u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x244658: 0x4600a036
    ctx->pc = 0x244658u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24465c: 0x0
    ctx->pc = 0x24465cu;
    // NOP
    // 0x244660: 0x45020005
    ctx->pc = 0x244660u;
    {
        const bool branch_taken_0x244660 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244660) {
            ctx->pc = 0x244664u;
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x244678u;
            goto label_244678;
        }
    }
    ctx->pc = 0x244668u;
    // 0x244668: 0x3c0140c9
    ctx->pc = 0x244668u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x24466c: 0x34210fdb
    ctx->pc = 0x24466cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x244670: 0x44810000
    ctx->pc = 0x244670u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x244674: 0x4600a000
    ctx->pc = 0x244674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_244678:
    // 0x244678: 0x46000506
    ctx->pc = 0x244678u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x24467c: 0xc60c0040
    ctx->pc = 0x24467cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x244680: 0xc0ba04a
    ctx->pc = 0x244680u;
    SET_GPR_U32(ctx, 31, 0x244688u);
    ctx->pc = 0x244684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244688u; }
    }
    if (ctx->pc != 0x244688u) { return; }
    ctx->pc = 0x244688u;
    // 0x244688: 0x4600a301
    ctx->pc = 0x244688u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x24468c: 0x3c014049
    ctx->pc = 0x24468cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x244690: 0x34210fdb
    ctx->pc = 0x244690u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x244694: 0x44810000
    ctx->pc = 0x244694u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x244698: 0x460c0034
    ctx->pc = 0x244698u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24469c: 0x45000006
    ctx->pc = 0x24469Cu;
    {
        const bool branch_taken_0x24469c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24469c) {
            ctx->pc = 0x2446B8u;
            goto label_2446b8;
        }
    }
    ctx->pc = 0x2446A4u;
    // 0x2446a4: 0x3c0140c9
    ctx->pc = 0x2446a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2446a8: 0x34210fdb
    ctx->pc = 0x2446a8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2446ac: 0x44810000
    ctx->pc = 0x2446acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2446b0: 0x1000000b
    ctx->pc = 0x2446B0u;
    {
        const bool branch_taken_0x2446b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2446B4u;
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x2446b0) {
            ctx->pc = 0x2446E0u;
            goto label_2446e0;
        }
    }
    ctx->pc = 0x2446B8u;
label_2446b8:
    // 0x2446b8: 0x3c01c049
    ctx->pc = 0x2446b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2446bc: 0x34210fdb
    ctx->pc = 0x2446bcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2446c0: 0x44810000
    ctx->pc = 0x2446c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2446c4: 0x46006036
    ctx->pc = 0x2446c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2446c8: 0x45000005
    ctx->pc = 0x2446C8u;
    {
        const bool branch_taken_0x2446c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2446c8) {
            ctx->pc = 0x2446E0u;
            goto label_2446e0;
        }
    }
    ctx->pc = 0x2446D0u;
    // 0x2446d0: 0x3c0140c9
    ctx->pc = 0x2446d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2446d4: 0x34210fdb
    ctx->pc = 0x2446d4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2446d8: 0x44810000
    ctx->pc = 0x2446d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2446dc: 0x46006300
    ctx->pc = 0x2446dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2446e0:
    // 0x2446e0: 0xc0b5632
    ctx->pc = 0x2446E0u;
    SET_GPR_U32(ctx, 31, 0x2446E8u);
    ctx->pc = 0x2446E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x2D58C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawMat3_0x2d58c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2446E8u; }
    }
    if (ctx->pc != 0x2446E8u) { return; }
    ctx->pc = 0x2446E8u;
    // 0x2446e8: 0xe614086c
    ctx->pc = 0x2446e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2156), bits); }
    // 0x2446ec: 0xdfbf0020
    ctx->pc = 0x2446ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2446f0: 0xdfb00010
    ctx->pc = 0x2446f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2446f4: 0xc7b40030
    ctx->pc = 0x2446f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2446f8: 0x3e00008
    ctx->pc = 0x2446F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2446FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24464Cu: goto label_24464c;
            case 0x244678u: goto label_244678;
            case 0x2446B8u: goto label_2446b8;
            case 0x2446E0u: goto label_2446e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244700u;
}
