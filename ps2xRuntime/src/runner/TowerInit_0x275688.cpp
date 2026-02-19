#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TowerInit
// Address: 0x275688 - 0x275748
void TowerInit_0x275688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x275688u;

    // 0x275688: 0x3c020034
    ctx->pc = 0x275688u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27568c: 0x8c42fa8c
    ctx->pc = 0x27568cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965900)));
    // 0x275690: 0x14400022
    ctx->pc = 0x275690u;
    {
        const bool branch_taken_0x275690 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x275694u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x275690) {
            ctx->pc = 0x27571Cu;
            goto label_27571c;
        }
    }
    ctx->pc = 0x275698u;
    // 0x275698: 0x24030001
    ctx->pc = 0x275698u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27569c: 0xac43fbb8
    ctx->pc = 0x27569cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966200), GPR_U32(ctx, 3));
    // 0x2756a0: 0x302d
    ctx->pc = 0x2756a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2756a4: 0x24082b00
    ctx->pc = 0x2756a4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2756a8: 0x3c020032
    ctx->pc = 0x2756a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2756ac: 0x244a1bc0
    ctx->pc = 0x2756acu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2756b0: 0xc81018
    ctx->pc = 0x2756b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2756b4: 0x0
    ctx->pc = 0x2756b4u;
    // NOP
label_2756b8:
    // 0x2756b8: 0x4a1821
    ctx->pc = 0x2756b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2756bc: 0x8c6200fc
    ctx->pc = 0x2756bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x2756c0: 0x10400010
    ctx->pc = 0x2756C0u;
    {
        const bool branch_taken_0x2756c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2756C4u;
        SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
        if (branch_taken_0x2756c0) {
            ctx->pc = 0x275704u;
            goto label_275704;
        }
    }
    ctx->pc = 0x2756C8u;
    // 0x2756c8: 0x202d
    ctx->pc = 0x2756c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2756cc: 0x24070018
    ctx->pc = 0x2756ccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2756d0: 0x246b09ac
    ctx->pc = 0x2756d0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 3), 2476));
    // 0x2756d4: 0x8ca3fbb8
    ctx->pc = 0x2756d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294966200)));
    // 0x2756d8: 0x874818
    ctx->pc = 0x2756d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2756dc: 0x0
    ctx->pc = 0x2756dcu;
    // NOP
label_2756e0:
    // 0x2756e0: 0x12b1021
    ctx->pc = 0x2756e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x2756e4: 0x8c420000
    ctx->pc = 0x2756e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2756e8: 0x5c400001
    ctx->pc = 0x2756E8u;
    {
        const bool branch_taken_0x2756e8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2756e8) {
            ctx->pc = 0x2756ECu;
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2756F0u;
            goto label_2756f0;
        }
    }
    ctx->pc = 0x2756F0u;
label_2756f0:
    // 0x2756f0: 0x24840001
    ctx->pc = 0x2756f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2756f4: 0x28820010
    ctx->pc = 0x2756f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 16));
    // 0x2756f8: 0x1440fff9
    ctx->pc = 0x2756F8u;
    {
        const bool branch_taken_0x2756f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2756FCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2756f8) {
            ctx->pc = 0x2756E0u;
            goto label_2756e0;
        }
    }
    ctx->pc = 0x275700u;
    // 0x275700: 0xaca3fbb8
    ctx->pc = 0x275700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294966200), GPR_U32(ctx, 3));
label_275704:
    // 0x275704: 0x24c60001
    ctx->pc = 0x275704u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x275708: 0x28c20004
    ctx->pc = 0x275708u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
    // 0x27570c: 0x1440ffea
    ctx->pc = 0x27570Cu;
    {
        const bool branch_taken_0x27570c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x275710u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x27570c) {
            ctx->pc = 0x2756B8u;
            goto label_2756b8;
        }
    }
    ctx->pc = 0x275714u;
    // 0x275714: 0x10000003
    ctx->pc = 0x275714u;
    {
        const bool branch_taken_0x275714 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x275718u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x275714) {
            ctx->pc = 0x275724u;
            goto label_275724;
        }
    }
    ctx->pc = 0x27571Cu;
label_27571c:
    // 0x27571c: 0xac40fbb8
    ctx->pc = 0x27571cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966200), GPR_U32(ctx, 0));
    // 0x275720: 0x3c020034
    ctx->pc = 0x275720u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_275724:
    // 0x275724: 0x8c42fbb8
    ctx->pc = 0x275724u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966200)));
    // 0x275728: 0x10400003
    ctx->pc = 0x275728u;
    {
        const bool branch_taken_0x275728 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27572Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x275728) {
            ctx->pc = 0x275738u;
            goto label_275738;
        }
    }
    ctx->pc = 0x275730u;
    // 0x275730: 0x3e00008
    ctx->pc = 0x275730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275734u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966196), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2756B8u: goto label_2756b8;
            case 0x2756E0u: goto label_2756e0;
            case 0x2756F0u: goto label_2756f0;
            case 0x275704u: goto label_275704;
            case 0x27571Cu: goto label_27571c;
            case 0x275724u: goto label_275724;
            case 0x275738u: goto label_275738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x275738u;
label_275738:
    // 0x275738: 0x3c01bf80
    ctx->pc = 0x275738u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x27573c: 0x44810000
    ctx->pc = 0x27573cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x275740: 0x3e00008
    ctx->pc = 0x275740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275744u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966196), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2756B8u: goto label_2756b8;
            case 0x2756E0u: goto label_2756e0;
            case 0x2756F0u: goto label_2756f0;
            case 0x275704u: goto label_275704;
            case 0x27571Cu: goto label_27571c;
            case 0x275724u: goto label_275724;
            case 0x275738u: goto label_275738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x275748u;
}
