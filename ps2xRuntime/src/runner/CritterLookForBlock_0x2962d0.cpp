#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterLookForBlock
// Address: 0x2962d0 - 0x296428
void CritterLookForBlock_0x2962d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2962d0u;

    // 0x2962d0: 0x27bdff90
    ctx->pc = 0x2962d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2962d4: 0xffbf0050
    ctx->pc = 0x2962d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2962d8: 0xffb40040
    ctx->pc = 0x2962d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2962dc: 0xffb30030
    ctx->pc = 0x2962dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2962e0: 0xffb20020
    ctx->pc = 0x2962e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2962e4: 0xffb10010
    ctx->pc = 0x2962e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2962e8: 0xffb00000
    ctx->pc = 0x2962e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2962ec: 0xe7b40060
    ctx->pc = 0x2962ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2962f0: 0x80802d
    ctx->pc = 0x2962f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962f4: 0x8e020004
    ctx->pc = 0x2962f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2962f8: 0x8c520124
    ctx->pc = 0x2962f8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x2962fc: 0x84420110
    ctx->pc = 0x2962fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x296300: 0x18400040
    ctx->pc = 0x296300u;
    {
        const bool branch_taken_0x296300 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x296304u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x296300) {
            ctx->pc = 0x296404u;
            goto label_296404;
        }
    }
    ctx->pc = 0x296308u;
    // 0x296308: 0x24130090
    ctx->pc = 0x296308u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 144));
    // 0x29630c: 0x4480a000
    ctx->pc = 0x29630cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x296310: 0x3c140031
    ctx->pc = 0x296310u;
    SET_GPR_U32(ctx, 20, ((uint32_t)49 << 16));
    // 0x296314: 0x2331018
    ctx->pc = 0x296314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_296318:
    // 0x296318: 0x522821
    ctx->pc = 0x296318u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x29631c: 0x8ca30000
    ctx->pc = 0x29631cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x296320: 0x24020023
    ctx->pc = 0x296320u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 35));
    // 0x296324: 0x54620032
    ctx->pc = 0x296324u;
    {
        const bool branch_taken_0x296324 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x296324) {
            ctx->pc = 0x296328u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x2963F0u;
            goto label_2963f0;
        }
    }
    ctx->pc = 0x29632Cu;
    // 0x29632c: 0x8ca30004
    ctx->pc = 0x29632cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x296330: 0x30620004
    ctx->pc = 0x296330u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
    // 0x296334: 0x5440002e
    ctx->pc = 0x296334u;
    {
        const bool branch_taken_0x296334 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x296334) {
            ctx->pc = 0x296338u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x2963F0u;
            goto label_2963f0;
        }
    }
    ctx->pc = 0x29633Cu;
    // 0x29633c: 0x30620002
    ctx->pc = 0x29633cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
    // 0x296340: 0x50400006
    ctx->pc = 0x296340u;
    {
        const bool branch_taken_0x296340 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x296340) {
            ctx->pc = 0x296344u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->pc = 0x29635Cu;
            goto label_29635c;
        }
    }
    ctx->pc = 0x296348u;
    // 0x296348: 0x82030486
    ctx->pc = 0x296348u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1158)));
    // 0x29634c: 0x82020487
    ctx->pc = 0x29634cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1159)));
    // 0x296350: 0x54620027
    ctx->pc = 0x296350u;
    {
        const bool branch_taken_0x296350 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x296350) {
            ctx->pc = 0x296354u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x2963F0u;
            goto label_2963f0;
        }
    }
    ctx->pc = 0x296358u;
    // 0x296358: 0x8ca20004
    ctx->pc = 0x296358u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_29635c:
    // 0x29635c: 0x30420010
    ctx->pc = 0x29635cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x296360: 0x5040000c
    ctx->pc = 0x296360u;
    {
        const bool branch_taken_0x296360 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x296360) {
            ctx->pc = 0x296364u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x296394u;
            goto label_296394;
        }
    }
    ctx->pc = 0x296368u;
    // 0x296368: 0x84a2000e
    ctx->pc = 0x296368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x29636c: 0x4420020
    ctx->pc = 0x29636Cu;
    {
        const bool branch_taken_0x29636c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x29636c) {
            ctx->pc = 0x296370u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x2963F0u;
            goto label_2963f0;
        }
    }
    ctx->pc = 0x296374u;
    // 0x296374: 0x84a20054
    ctx->pc = 0x296374u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x296378: 0x4400005
    ctx->pc = 0x296378u;
    {
        const bool branch_taken_0x296378 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29637Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x296378) {
            ctx->pc = 0x296390u;
            goto label_296390;
        }
    }
    ctx->pc = 0x296380u;
    // 0x296380: 0x721021
    ctx->pc = 0x296380u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x296384: 0x8442000e
    ctx->pc = 0x296384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x296388: 0x4420019
    ctx->pc = 0x296388u;
    {
        const bool branch_taken_0x296388 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x296388) {
            ctx->pc = 0x29638Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x2963F0u;
            goto label_2963f0;
        }
    }
    ctx->pc = 0x296390u;
label_296390:
    // 0x296390: 0xc4a10080
    ctx->pc = 0x296390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_296394:
    // 0x296394: 0x4601a034
    ctx->pc = 0x296394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296398: 0x0
    ctx->pc = 0x296398u;
    // NOP
    // 0x29639c: 0x45000009
    ctx->pc = 0x29639Cu;
    {
        const bool branch_taken_0x29639c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2963A0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x29639c) {
            ctx->pc = 0x2963C4u;
            goto label_2963c4;
        }
    }
    ctx->pc = 0x2963A4u;
    // 0x2963a4: 0x2021021
    ctx->pc = 0x2963a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2963a8: 0xc440025c
    ctx->pc = 0x2963a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2963ac: 0x46010000
    ctx->pc = 0x2963acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2963b0: 0xc681ffa4
    ctx->pc = 0x2963b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2963b4: 0x46000834
    ctx->pc = 0x2963b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2963b8: 0x0
    ctx->pc = 0x2963b8u;
    // NOP
    // 0x2963bc: 0x4503000c
    ctx->pc = 0x2963BCu;
    {
        const bool branch_taken_0x2963bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2963bc) {
            ctx->pc = 0x2963C0u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x2963F0u;
            goto label_2963f0;
        }
    }
    ctx->pc = 0x2963C4u;
label_2963c4:
    // 0x2963c4: 0x200202d
    ctx->pc = 0x2963c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2963c8: 0x24a50060
    ctx->pc = 0x2963c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 96));
    // 0x2963cc: 0xc0a6db6
    ctx->pc = 0x2963CCu;
    SET_GPR_U32(ctx, 31, 0x2963D4u);
    ctx->pc = 0x2963D0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29B6D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterMoveGetTarget_0x29b6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2963D4u; }
    }
    if (ctx->pc != 0x2963D4u) { return; }
    ctx->pc = 0x2963D4u;
    // 0x2963d4: 0x4400005
    ctx->pc = 0x2963D4u;
    {
        const bool branch_taken_0x2963d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2963D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2963d4) {
            ctx->pc = 0x2963ECu;
            goto label_2963ec;
        }
    }
    ctx->pc = 0x2963DCu;
    // 0x2963dc: 0xc08dba8
    ctx->pc = 0x2963DCu;
    SET_GPR_U32(ctx, 31, 0x2963E4u);
    ctx->pc = 0x2963E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x236EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerAttacking_0x236ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2963E4u; }
    }
    if (ctx->pc != 0x2963E4u) { return; }
    ctx->pc = 0x2963E4u;
    // 0x2963e4: 0x54400001
    ctx->pc = 0x2963E4u;
    {
        const bool branch_taken_0x2963e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2963e4) {
            ctx->pc = 0x2963E8u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 17));
            ctx->pc = 0x2963ECu;
            goto label_2963ec;
        }
    }
    ctx->pc = 0x2963ECu;
label_2963ec:
    // 0x2963ec: 0x26310001
    ctx->pc = 0x2963ecu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2963f0:
    // 0x2963f0: 0x8e020004
    ctx->pc = 0x2963f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2963f4: 0x84420110
    ctx->pc = 0x2963f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x2963f8: 0x222102a
    ctx->pc = 0x2963f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x2963fc: 0x1440ffc6
    ctx->pc = 0x2963FCu;
    {
        const bool branch_taken_0x2963fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x296400u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2963fc) {
            ctx->pc = 0x296318u;
            goto label_296318;
        }
    }
    ctx->pc = 0x296404u;
label_296404:
    // 0x296404: 0xdfbf0050
    ctx->pc = 0x296404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296408: 0xdfb40040
    ctx->pc = 0x296408u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29640c: 0xdfb30030
    ctx->pc = 0x29640cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296410: 0xdfb20020
    ctx->pc = 0x296410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296414: 0xdfb10010
    ctx->pc = 0x296414u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296418: 0xdfb00000
    ctx->pc = 0x296418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29641c: 0xc7b40060
    ctx->pc = 0x29641cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x296420: 0x3e00008
    ctx->pc = 0x296420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296424u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296318u: goto label_296318;
            case 0x29635Cu: goto label_29635c;
            case 0x296390u: goto label_296390;
            case 0x296394u: goto label_296394;
            case 0x2963C4u: goto label_2963c4;
            case 0x2963ECu: goto label_2963ec;
            case 0x2963F0u: goto label_2963f0;
            case 0x296404u: goto label_296404;
            default: break;
        }
        return;
    }
    ctx->pc = 0x296428u;
}
