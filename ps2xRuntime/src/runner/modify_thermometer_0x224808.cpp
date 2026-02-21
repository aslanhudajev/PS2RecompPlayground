#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: modify_thermometer
// Address: 0x224808 - 0x224a48
void modify_thermometer_0x224808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x224808u;

    // 0x224808: 0x27bdffb0
    ctx->pc = 0x224808u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22480c: 0xffbf0030
    ctx->pc = 0x22480cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x224810: 0xffb10020
    ctx->pc = 0x224810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x224814: 0xffb00010
    ctx->pc = 0x224814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x224818: 0xe7b50048
    ctx->pc = 0x224818u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x22481c: 0xe7b40040
    ctx->pc = 0x22481cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x224820: 0x80802d
    ctx->pc = 0x224820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224824: 0xa0882d
    ctx->pc = 0x224824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224828: 0x3c020032
    ctx->pc = 0x224828u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22482c: 0xc0b0cf2
    ctx->pc = 0x22482Cu;
    SET_GPR_U32(ctx, 31, 0x224834u);
    ctx->pc = 0x224830u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2216)));
    ctx->pc = 0x2C33C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitGetHide_0x2c33c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224834u; }
    }
    if (ctx->pc != 0x224834u) { return; }
    ctx->pc = 0x224834u;
    // 0x224834: 0x14400006
    ctx->pc = 0x224834u;
    {
        const bool branch_taken_0x224834 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x224838u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x224834) {
            ctx->pc = 0x224850u;
            goto label_224850;
        }
    }
    ctx->pc = 0x22483Cu;
    // 0x22483c: 0x3c020034
    ctx->pc = 0x22483cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x224840: 0x8c42d1cc
    ctx->pc = 0x224840u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955468)));
    // 0x224844: 0x5440000b
    ctx->pc = 0x224844u;
    {
        const bool branch_taken_0x224844 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x224844) {
            ctx->pc = 0x224848u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x224874u;
            goto label_224874;
        }
    }
    ctx->pc = 0x22484Cu;
    // 0x22484c: 0x3c020032
    ctx->pc = 0x22484cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_224850:
    // 0x224850: 0x245008a8
    ctx->pc = 0x224850u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 2216));
    // 0x224854: 0x8c4408a8
    ctx->pc = 0x224854u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2216)));
    // 0x224858: 0xc0b0ce8
    ctx->pc = 0x224858u;
    SET_GPR_U32(ctx, 31, 0x224860u);
    ctx->pc = 0x22485Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224860u; }
    }
    if (ctx->pc != 0x224860u) { return; }
    ctx->pc = 0x224860u;
    // 0x224860: 0x8e040004
    ctx->pc = 0x224860u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x224864: 0xc0b0ce8
    ctx->pc = 0x224864u;
    SET_GPR_U32(ctx, 31, 0x22486Cu);
    ctx->pc = 0x224868u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22486Cu; }
    }
    if (ctx->pc != 0x22486Cu) { return; }
    ctx->pc = 0x22486Cu;
    // 0x22486c: 0x10000070
    ctx->pc = 0x22486Cu;
    {
        const bool branch_taken_0x22486c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224870u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x22486c) {
            ctx->pc = 0x224A30u;
            goto label_224a30;
        }
    }
    ctx->pc = 0x224874u;
label_224874:
    // 0x224874: 0xc6200000
    ctx->pc = 0x224874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224878: 0x46000b01
    ctx->pc = 0x224878u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22487c: 0xe7ac0000
    ctx->pc = 0x22487cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x224880: 0xc6020004
    ctx->pc = 0x224880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224884: 0xc6200004
    ctx->pc = 0x224884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224888: 0x46001081
    ctx->pc = 0x224888u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x22488c: 0xe7a20004
    ctx->pc = 0x22488cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x224890: 0xc6010008
    ctx->pc = 0x224890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224894: 0xc6200008
    ctx->pc = 0x224894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224898: 0x46000841
    ctx->pc = 0x224898u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22489c: 0xe7a10008
    ctx->pc = 0x22489cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2248a0: 0x460c6002
    ctx->pc = 0x2248a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2248a4: 0x46021082
    ctx->pc = 0x2248a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2248a8: 0x46020000
    ctx->pc = 0x2248a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2248ac: 0x46010842
    ctx->pc = 0x2248acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2248b0: 0x46010000
    ctx->pc = 0x2248b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2248b4: 0x0
    ctx->pc = 0x2248b4u;
    // NOP
    // 0x2248b8: 0x0
    ctx->pc = 0x2248b8u;
    // NOP
    // 0x2248bc: 0x460000c4
    ctx->pc = 0x2248bcu;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x2248c0: 0x46031832
    ctx->pc = 0x2248c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2248c4: 0x45010006
    ctx->pc = 0x2248C4u;
    {
        const bool branch_taken_0x2248c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2248c4) {
            ctx->pc = 0x2248E0u;
            goto label_2248e0;
        }
    }
    ctx->pc = 0x2248CCu;
    // 0x2248cc: 0x460c6302
    ctx->pc = 0x2248ccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2248d0: 0x46026300
    ctx->pc = 0x2248d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2248d4: 0xc0ba284
    ctx->pc = 0x2248D4u;
    SET_GPR_U32(ctx, 31, 0x2248DCu);
    ctx->pc = 0x2248D8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2248DCu; }
    }
    if (ctx->pc != 0x2248DCu) { return; }
    ctx->pc = 0x2248DCu;
    // 0x2248dc: 0x460000c6
    ctx->pc = 0x2248dcu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_2248e0:
    // 0x2248e0: 0x3c014100
    ctx->pc = 0x2248e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16640 << 16));
    // 0x2248e4: 0x44810000
    ctx->pc = 0x2248e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2248e8: 0x46001d41
    ctx->pc = 0x2248e8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2248ec: 0x3c020032
    ctx->pc = 0x2248ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2248f0: 0xc4400708
    ctx->pc = 0x2248f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2248f4: 0x4600ad42
    ctx->pc = 0x2248f4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2248f8: 0x44800000
    ctx->pc = 0x2248f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2248fc: 0x4600a834
    ctx->pc = 0x2248fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224900: 0x0
    ctx->pc = 0x224900u;
    // NOP
    // 0x224904: 0x45010008
    ctx->pc = 0x224904u;
    {
        const bool branch_taken_0x224904 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x224908u;
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x224904) {
            ctx->pc = 0x224928u;
            goto label_224928;
        }
    }
    ctx->pc = 0x22490Cu;
    // 0x22490c: 0x3c013f80
    ctx->pc = 0x22490cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x224910: 0x44810000
    ctx->pc = 0x224910u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x224914: 0x46150034
    ctx->pc = 0x224914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224918: 0x0
    ctx->pc = 0x224918u;
    // NOP
    // 0x22491c: 0x45000004
    ctx->pc = 0x22491Cu;
    {
        const bool branch_taken_0x22491c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224920u;
        ctx->f[1] = FPU_MOV_S(ctx->f[21]);
        if (branch_taken_0x22491c) {
            ctx->pc = 0x224930u;
            goto label_224930;
        }
    }
    ctx->pc = 0x224924u;
    // 0x224924: 0x46000046
    ctx->pc = 0x224924u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_224928:
    // 0x224928: 0x3c013f80
    ctx->pc = 0x224928u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x22492c: 0x44810000
    ctx->pc = 0x22492cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_224930:
    // 0x224930: 0x46010041
    ctx->pc = 0x224930u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x224934: 0x46010842
    ctx->pc = 0x224934u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x224938: 0x3c03003c
    ctx->pc = 0x224938u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x22493c: 0x8c621810
    ctx->pc = 0x22493cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 6160)));
    // 0x224940: 0x1440000c
    ctx->pc = 0x224940u;
    {
        const bool branch_taken_0x224940 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x224944u;
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x224940) {
            ctx->pc = 0x224974u;
            goto label_224974;
        }
    }
    ctx->pc = 0x224948u;
    // 0x224948: 0x3c013e80
    ctx->pc = 0x224948u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16000 << 16));
    // 0x22494c: 0x44810000
    ctx->pc = 0x22494cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x224950: 0x4600a834
    ctx->pc = 0x224950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224954: 0x0
    ctx->pc = 0x224954u;
    // NOP
    // 0x224958: 0x45000006
    ctx->pc = 0x224958u;
    {
        const bool branch_taken_0x224958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22495Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x224958) {
            ctx->pc = 0x224974u;
            goto label_224974;
        }
    }
    ctx->pc = 0x224960u;
    // 0x224960: 0xac621810
    ctx->pc = 0x224960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6160), GPR_U32(ctx, 2));
    // 0x224964: 0xc097790
    ctx->pc = 0x224964u;
    SET_GPR_U32(ctx, 31, 0x22496Cu);
    ctx->pc = 0x224968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25DE40u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioRuneGetCloser_0x25de40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22496Cu; }
    }
    if (ctx->pc != 0x22496Cu) { return; }
    ctx->pc = 0x22496Cu;
    // 0x22496c: 0x1000000f
    ctx->pc = 0x22496Cu;
    {
        const bool branch_taken_0x22496c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x22496c) {
            ctx->pc = 0x2249ACu;
            goto label_2249ac;
        }
    }
    ctx->pc = 0x224974u;
label_224974:
    // 0x224974: 0x3c03003c
    ctx->pc = 0x224974u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x224978: 0x8c62180c
    ctx->pc = 0x224978u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 6156)));
    // 0x22497c: 0x1440000b
    ctx->pc = 0x22497Cu;
    {
        const bool branch_taken_0x22497c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22497c) {
            ctx->pc = 0x2249ACu;
            goto label_2249ac;
        }
    }
    ctx->pc = 0x224984u;
    // 0x224984: 0x3c013ccc
    ctx->pc = 0x224984u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15564 << 16));
    // 0x224988: 0x3421cccd
    ctx->pc = 0x224988u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x22498c: 0x44810000
    ctx->pc = 0x22498cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x224990: 0x4600a834
    ctx->pc = 0x224990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224994: 0x0
    ctx->pc = 0x224994u;
    // NOP
    // 0x224998: 0x45000004
    ctx->pc = 0x224998u;
    {
        const bool branch_taken_0x224998 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22499Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x224998) {
            ctx->pc = 0x2249ACu;
            goto label_2249ac;
        }
    }
    ctx->pc = 0x2249A0u;
    // 0x2249a0: 0xac62180c
    ctx->pc = 0x2249a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6156), GPR_U32(ctx, 2));
    // 0x2249a4: 0xc097780
    ctx->pc = 0x2249A4u;
    SET_GPR_U32(ctx, 31, 0x2249ACu);
    ctx->pc = 0x2249A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25DE00u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioRuneIsNear_0x25de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249ACu; }
    }
    if (ctx->pc != 0x2249ACu) { return; }
    ctx->pc = 0x2249ACu;
label_2249ac:
    // 0x2249ac: 0x3c013f80
    ctx->pc = 0x2249acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2249b0: 0x4481a000
    ctx->pc = 0x2249b0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2249b4: 0x4615a501
    ctx->pc = 0x2249b4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x2249b8: 0x3c100032
    ctx->pc = 0x2249b8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x2249bc: 0x261008a8
    ctx->pc = 0x2249bcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2216));
    // 0x2249c0: 0x3c014292
    ctx->pc = 0x2249c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17042 << 16));
    // 0x2249c4: 0x44810000
    ctx->pc = 0x2249c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2249c8: 0x4600a502
    ctx->pc = 0x2249c8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2249cc: 0x3c0142ca
    ctx->pc = 0x2249ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17098 << 16));
    // 0x2249d0: 0x44817000
    ctx->pc = 0x2249d0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x2249d4: 0x46147381
    ctx->pc = 0x2249d4u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[20]);
    // 0x2249d8: 0x3c013c00
    ctx->pc = 0x2249d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15360 << 16));
    // 0x2249dc: 0x44810000
    ctx->pc = 0x2249dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2249e0: 0x8e040004
    ctx->pc = 0x2249e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2249e4: 0x3c01bf80
    ctx->pc = 0x2249e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2249e8: 0x44816000
    ctx->pc = 0x2249e8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2249ec: 0x46006346
    ctx->pc = 0x2249ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2249f0: 0x46007382
    ctx->pc = 0x2249f0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x2249f4: 0xc0b0e6a
    ctx->pc = 0x2249F4u;
    SET_GPR_U32(ctx, 31, 0x2249FCu);
    ctx->pc = 0x2249F8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetCrop_0x2c39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249FCu; }
    }
    if (ctx->pc != 0x2249FCu) { return; }
    ctx->pc = 0x2249FCu;
    // 0x2249fc: 0xc0b5486
    ctx->pc = 0x2249FCu;
    SET_GPR_U32(ctx, 31, 0x224A04u);
    ctx->pc = 0x224A00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2D5218u;
    {
        const uint32_t __entryPc = ctx->pc;
        Round_0x2d5218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A04u; }
    }
    if (ctx->pc != 0x224A04u) { return; }
    ctx->pc = 0x224A04u;
    // 0x224a04: 0x8e040004
    ctx->pc = 0x224a04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x224a08: 0x282d
    ctx->pc = 0x224a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224a0c: 0xc0b0cf6
    ctx->pc = 0x224A0Cu;
    SET_GPR_U32(ctx, 31, 0x224A14u);
    ctx->pc = 0x224A10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 27));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A14u; }
    }
    if (ctx->pc != 0x224A14u) { return; }
    ctx->pc = 0x224A14u;
    // 0x224a14: 0xc0b5486
    ctx->pc = 0x224A14u;
    SET_GPR_U32(ctx, 31, 0x224A1Cu);
    ctx->pc = 0x224A18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2D5218u;
    {
        const uint32_t __entryPc = ctx->pc;
        Round_0x2d5218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A1Cu; }
    }
    if (ctx->pc != 0x224A1Cu) { return; }
    ctx->pc = 0x224A1Cu;
    // 0x224a1c: 0x24050066
    ctx->pc = 0x224a1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 102));
    // 0x224a20: 0x8e040004
    ctx->pc = 0x224a20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x224a24: 0xc0b0dc6
    ctx->pc = 0x224A24u;
    SET_GPR_U32(ctx, 31, 0x224A2Cu);
    ctx->pc = 0x224A28u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x2C3718u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetY_0x2c3718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A2Cu; }
    }
    if (ctx->pc != 0x224A2Cu) { return; }
    ctx->pc = 0x224A2Cu;
    // 0x224a2c: 0xdfbf0030
    ctx->pc = 0x224a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_224a30:
    // 0x224a30: 0xdfb10020
    ctx->pc = 0x224a30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224a34: 0xdfb00010
    ctx->pc = 0x224a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224a38: 0xc7b50048
    ctx->pc = 0x224a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x224a3c: 0xc7b40040
    ctx->pc = 0x224a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x224a40: 0x3e00008
    ctx->pc = 0x224A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224A44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224850u: goto label_224850;
            case 0x224874u: goto label_224874;
            case 0x2248E0u: goto label_2248e0;
            case 0x224928u: goto label_224928;
            case 0x224930u: goto label_224930;
            case 0x224974u: goto label_224974;
            case 0x2249ACu: goto label_2249ac;
            case 0x224A30u: goto label_224a30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224A48u;
}
