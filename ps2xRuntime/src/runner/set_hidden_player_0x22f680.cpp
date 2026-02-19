#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_hidden_player
// Address: 0x22f680 - 0x22f8a4
void set_hidden_player_0x22f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22f680u;

    // 0x22f680: 0x27bdff60
    ctx->pc = 0x22f680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x22f684: 0xffbf0090
    ctx->pc = 0x22f684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x22f688: 0xffbe0080
    ctx->pc = 0x22f688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x22f68c: 0xffb70070
    ctx->pc = 0x22f68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x22f690: 0xffb60060
    ctx->pc = 0x22f690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x22f694: 0xffb50050
    ctx->pc = 0x22f694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22f698: 0xffb40040
    ctx->pc = 0x22f698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22f69c: 0xffb30030
    ctx->pc = 0x22f69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22f6a0: 0xffb20020
    ctx->pc = 0x22f6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22f6a4: 0xffb10010
    ctx->pc = 0x22f6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22f6a8: 0xffb00000
    ctx->pc = 0x22f6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f6ac: 0x3c020031
    ctx->pc = 0x22f6acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x22f6b0: 0x8c42f184
    ctx->pc = 0x22f6b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x22f6b4: 0x1440006e
    ctx->pc = 0x22F6B4u;
    {
        const bool branch_taken_0x22f6b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22F6B8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22f6b4) {
            ctx->pc = 0x22F870u;
            goto label_22f870;
        }
    }
    ctx->pc = 0x22F6BCu;
    // 0x22f6bc: 0x902d
    ctx->pc = 0x22f6bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f6c0: 0x24130024
    ctx->pc = 0x22f6c0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 36));
    // 0x22f6c4: 0x3c020032
    ctx->pc = 0x22f6c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22f6c8: 0x245416a0
    ctx->pc = 0x22f6c8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 5792));
    // 0x22f6cc: 0x26950018
    ctx->pc = 0x22f6ccu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 20), 24));
    // 0x22f6d0: 0x3c160032
    ctx->pc = 0x22f6d0u;
    SET_GPR_U32(ctx, 22, ((uint32_t)50 << 16));
    // 0x22f6d4: 0x3c020032
    ctx->pc = 0x22f6d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22f6d8: 0x24571698
    ctx->pc = 0x22f6d8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 5784));
    // 0x22f6dc: 0x3c020032
    ctx->pc = 0x22f6dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22f6e0: 0x245e169c
    ctx->pc = 0x22f6e0u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 5788));
    // 0x22f6e4: 0x2538018
    ctx->pc = 0x22f6e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22f6e8:
    // 0x22f6e8: 0x2624099c
    ctx->pc = 0x22f6e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 2460));
    // 0x22f6ec: 0x2142821
    ctx->pc = 0x22f6ecu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x22f6f0: 0xc0bf3c0
    ctx->pc = 0x22F6F0u;
    SET_GPR_U32(ctx, 31, 0x22F6F8u);
    ctx->pc = 0x22F6F4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x2FCF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x2fcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F6F8u; }
    }
    if (ctx->pc != 0x22F6F8u) { return; }
    ctx->pc = 0x22F6F8u;
    // 0x22f6f8: 0x54400016
    ctx->pc = 0x22F6F8u;
    {
        const bool branch_taken_0x22f6f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22f6f8) {
            ctx->pc = 0x22F6FCu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x22F754u;
            goto label_22f754;
        }
    }
    ctx->pc = 0x22F700u;
    // 0x22f700: 0x2b01021
    ctx->pc = 0x22f700u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x22f704: 0x8c420000
    ctx->pc = 0x22f704u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f708: 0x10400006
    ctx->pc = 0x22F708u;
    {
        const bool branch_taken_0x22f708 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F70Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x22f708) {
            ctx->pc = 0x22F724u;
            goto label_22f724;
        }
    }
    ctx->pc = 0x22F710u;
    // 0x22f710: 0x8ec2081c
    ctx->pc = 0x22f710u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 2076)));
    // 0x22f714: 0x28420002
    ctx->pc = 0x22f714u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x22f718: 0x5440000e
    ctx->pc = 0x22F718u;
    {
        const bool branch_taken_0x22f718 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22f718) {
            ctx->pc = 0x22F71Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x22F754u;
            goto label_22f754;
        }
    }
    ctx->pc = 0x22F720u;
    // 0x22f720: 0x2531818
    ctx->pc = 0x22f720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22f724:
    // 0x22f724: 0x771021
    ctx->pc = 0x22f724u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x22f728: 0x8c420000
    ctx->pc = 0x22f728u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f72c: 0xae220004
    ctx->pc = 0x22f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x22f730: 0x7e1021
    ctx->pc = 0x22f730u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x22f734: 0x8c420000
    ctx->pc = 0x22f734u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f738: 0xae22000c
    ctx->pc = 0x22f738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x22f73c: 0x3c020032
    ctx->pc = 0x22f73cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22f740: 0x244216a8
    ctx->pc = 0x22f740u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5800));
    // 0x22f744: 0x621821
    ctx->pc = 0x22f744u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f748: 0xae230104
    ctx->pc = 0x22f748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 3));
    // 0x22f74c: 0x10000049
    ctx->pc = 0x22F74Cu;
    {
        const bool branch_taken_0x22f74c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F750u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x22f74c) {
            ctx->pc = 0x22F874u;
            goto label_22f874;
        }
    }
    ctx->pc = 0x22F754u;
label_22f754:
    // 0x22f754: 0x2e42001b
    ctx->pc = 0x22f754u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 27));
    // 0x22f758: 0x1440ffe3
    ctx->pc = 0x22F758u;
    {
        const bool branch_taken_0x22f758 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22F75Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x22f758) {
            ctx->pc = 0x22F6E8u;
            goto label_22f6e8;
        }
    }
    ctx->pc = 0x22F760u;
    // 0x22f760: 0x902d
    ctx->pc = 0x22f760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f764: 0x24130014
    ctx->pc = 0x22f764u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 20));
    // 0x22f768: 0x3c020032
    ctx->pc = 0x22f768u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22f76c: 0x24571a68
    ctx->pc = 0x22f76cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 6760));
    // 0x22f770: 0x3c020032
    ctx->pc = 0x22f770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22f774: 0x24551a70
    ctx->pc = 0x22f774u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 6768));
    // 0x22f778: 0x3c020032
    ctx->pc = 0x22f778u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22f77c: 0x24541a74
    ctx->pc = 0x22f77cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 6772));
    // 0x22f780: 0x3c020032
    ctx->pc = 0x22f780u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22f784: 0x24561a78
    ctx->pc = 0x22f784u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 6776));
    // 0x22f788: 0x2538018
    ctx->pc = 0x22f788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22f78c: 0x0
    ctx->pc = 0x22f78cu;
    // NOP
label_22f790:
    // 0x22f790: 0x2624099c
    ctx->pc = 0x22f790u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 2460));
    // 0x22f794: 0x2172821
    ctx->pc = 0x22f794u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x22f798: 0xc0bf3c0
    ctx->pc = 0x22F798u;
    SET_GPR_U32(ctx, 31, 0x22F7A0u);
    ctx->pc = 0x22F79Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x2FCF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x2fcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F7A0u; }
    }
    if (ctx->pc != 0x22F7A0u) { return; }
    ctx->pc = 0x22F7A0u;
    // 0x22f7a0: 0x54400030
    ctx->pc = 0x22F7A0u;
    {
        const bool branch_taken_0x22f7a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22f7a0) {
            ctx->pc = 0x22F7A4u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x22F864u;
            goto label_22f864;
        }
    }
    ctx->pc = 0x22F7A8u;
    // 0x22f7a8: 0x2151021
    ctx->pc = 0x22f7a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x22f7ac: 0x8c450000
    ctx->pc = 0x22f7acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f7b0: 0x24020002
    ctx->pc = 0x22f7b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x22f7b4: 0x10a20013
    ctx->pc = 0x22F7B4u;
    {
        const bool branch_taken_0x22f7b4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x22F7B8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
        if (branch_taken_0x22f7b4) {
            ctx->pc = 0x22F804u;
            goto label_22f804;
        }
    }
    ctx->pc = 0x22F7BCu;
    // 0x22f7bc: 0x10400005
    ctx->pc = 0x22F7BCu;
    {
        const bool branch_taken_0x22f7bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F7C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x22f7bc) {
            ctx->pc = 0x22F7D4u;
            goto label_22f7d4;
        }
    }
    ctx->pc = 0x22F7C4u;
    // 0x22f7c4: 0x10a20008
    ctx->pc = 0x22F7C4u;
    {
        const bool branch_taken_0x22f7c4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x22F7C8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x22f7c4) {
            ctx->pc = 0x22F7E8u;
            goto label_22f7e8;
        }
    }
    ctx->pc = 0x22F7CCu;
    // 0x22f7cc: 0x1000001b
    ctx->pc = 0x22F7CCu;
    {
        const bool branch_taken_0x22f7cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F7D0u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        if (branch_taken_0x22f7cc) {
            ctx->pc = 0x22F83Cu;
            goto label_22f83c;
        }
    }
    ctx->pc = 0x22F7D4u;
label_22f7d4:
    // 0x22f7d4: 0x24020004
    ctx->pc = 0x22f7d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x22f7d8: 0x10a20011
    ctx->pc = 0x22F7D8u;
    {
        const bool branch_taken_0x22f7d8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x22F7DCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x22f7d8) {
            ctx->pc = 0x22F820u;
            goto label_22f820;
        }
    }
    ctx->pc = 0x22F7E0u;
    // 0x22f7e0: 0x10000016
    ctx->pc = 0x22F7E0u;
    {
        const bool branch_taken_0x22f7e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F7E4u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        if (branch_taken_0x22f7e0) {
            ctx->pc = 0x22F83Cu;
            goto label_22f83c;
        }
    }
    ctx->pc = 0x22F7E8u;
label_22f7e8:
    // 0x22f7e8: 0x2531818
    ctx->pc = 0x22f7e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22f7ec: 0x741021
    ctx->pc = 0x22f7ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x22f7f0: 0xc4400000
    ctx->pc = 0x22f7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f7f4: 0x46000064
    ctx->pc = 0x22f7f4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x22f7f8: 0xe6211a20
    ctx->pc = 0x22f7f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6688), bits); }
    // 0x22f7fc: 0x10000019
    ctx->pc = 0x22F7FCu;
    {
        const bool branch_taken_0x22f7fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F800u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x22f7fc) {
            ctx->pc = 0x22F864u;
            goto label_22f864;
        }
    }
    ctx->pc = 0x22F804u;
label_22f804:
    // 0x22f804: 0x2531818
    ctx->pc = 0x22f804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22f808: 0x741021
    ctx->pc = 0x22f808u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x22f80c: 0xc4400000
    ctx->pc = 0x22f80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f810: 0x46000064
    ctx->pc = 0x22f810u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x22f814: 0xe6211a14
    ctx->pc = 0x22f814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6676), bits); }
    // 0x22f818: 0x10000012
    ctx->pc = 0x22F818u;
    {
        const bool branch_taken_0x22f818 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F81Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x22f818) {
            ctx->pc = 0x22F864u;
            goto label_22f864;
        }
    }
    ctx->pc = 0x22F820u;
label_22f820:
    // 0x22f820: 0x2531818
    ctx->pc = 0x22f820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22f824: 0x741021
    ctx->pc = 0x22f824u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x22f828: 0xc4400000
    ctx->pc = 0x22f828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f82c: 0x46000064
    ctx->pc = 0x22f82cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x22f830: 0xe6211a18
    ctx->pc = 0x22f830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6680), bits); }
    // 0x22f834: 0x1000000b
    ctx->pc = 0x22F834u;
    {
        const bool branch_taken_0x22f834 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F838u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x22f834) {
            ctx->pc = 0x22F864u;
            goto label_22f864;
        }
    }
    ctx->pc = 0x22F83Cu;
label_22f83c:
    // 0x22f83c: 0x543021
    ctx->pc = 0x22f83cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x22f840: 0x561021
    ctx->pc = 0x22f840u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x22f844: 0x220202d
    ctx->pc = 0x22f844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f848: 0x8c650000
    ctx->pc = 0x22f848u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f84c: 0xc4cc0000
    ctx->pc = 0x22f84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22f850: 0x3c01bf80
    ctx->pc = 0x22f850u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x22f854: 0x44816800
    ctx->pc = 0x22f854u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x22f858: 0xc08b096
    ctx->pc = 0x22F858u;
    SET_GPR_U32(ctx, 31, 0x22F860u);
    ctx->pc = 0x22F85Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x22C258u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerAddPowerup_0x22c258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F860u; }
    }
    if (ctx->pc != 0x22F860u) { return; }
    ctx->pc = 0x22F860u;
    // 0x22f860: 0x26520001
    ctx->pc = 0x22f860u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_22f864:
    // 0x22f864: 0x2e42001b
    ctx->pc = 0x22f864u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 27));
    // 0x22f868: 0x1440ffc9
    ctx->pc = 0x22F868u;
    {
        const bool branch_taken_0x22f868 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22F86Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x22f868) {
            ctx->pc = 0x22F790u;
            goto label_22f790;
        }
    }
    ctx->pc = 0x22F870u;
label_22f870:
    // 0x22f870: 0x102d
    ctx->pc = 0x22f870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f874:
    // 0x22f874: 0xdfbf0090
    ctx->pc = 0x22f874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22f878: 0xdfbe0080
    ctx->pc = 0x22f878u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22f87c: 0xdfb70070
    ctx->pc = 0x22f87cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22f880: 0xdfb60060
    ctx->pc = 0x22f880u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22f884: 0xdfb50050
    ctx->pc = 0x22f884u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22f888: 0xdfb40040
    ctx->pc = 0x22f888u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22f88c: 0xdfb30030
    ctx->pc = 0x22f88cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f890: 0xdfb20020
    ctx->pc = 0x22f890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f894: 0xdfb10010
    ctx->pc = 0x22f894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f898: 0xdfb00000
    ctx->pc = 0x22f898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f89c: 0x3e00008
    ctx->pc = 0x22F89Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F8A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22F6E8u: goto label_22f6e8;
            case 0x22F724u: goto label_22f724;
            case 0x22F754u: goto label_22f754;
            case 0x22F790u: goto label_22f790;
            case 0x22F7D4u: goto label_22f7d4;
            case 0x22F7E8u: goto label_22f7e8;
            case 0x22F804u: goto label_22f804;
            case 0x22F820u: goto label_22f820;
            case 0x22F83Cu: goto label_22f83c;
            case 0x22F864u: goto label_22f864;
            case 0x22F870u: goto label_22f870;
            case 0x22F874u: goto label_22f874;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22F8A4u;
}
