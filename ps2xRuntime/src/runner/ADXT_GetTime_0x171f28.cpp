#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_GetTime
// Address: 0x171f28 - 0x172164
void ADXT_GetTime_0x171f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_GetTime");


    ctx->pc = 0x171f28u;

    // 0x171f28: 0x27bdffa0
    ctx->pc = 0x171f28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x171f2c: 0x8f82822c
    ctx->pc = 0x171f2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935084)));
    // 0x171f30: 0xffb30040
    ctx->pc = 0x171f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x171f34: 0xffb10020
    ctx->pc = 0x171f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x171f38: 0xc0982d
    ctx->pc = 0x171f38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171f3c: 0xffb00010
    ctx->pc = 0x171f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x171f40: 0xa0882d
    ctx->pc = 0x171f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171f44: 0xffbf0050
    ctx->pc = 0x171f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x171f48: 0x80802d
    ctx->pc = 0x171f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171f4c: 0x14400005
    ctx->pc = 0x171F4Cu;
    {
        const bool branch_taken_0x171f4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x171F50u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
        if (branch_taken_0x171f4c) {
            ctx->pc = 0x171F64u;
            goto label_171f64;
        }
    }
    ctx->pc = 0x171F54u;
    // 0x171f54: 0xc05c790
    ctx->pc = 0x171F54u;
    SET_GPR_U32(ctx, 31, 0x171F5Cu);
    ctx->pc = 0x171E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetTimeSfreq2_0x171e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F5Cu; }
        else if (ctx->pc != 0x171F5Cu) { ctx->pc = 0x171F5Cu; }
    }
    if (ctx->pc != 0x171F5Cu) { return; }
    ctx->pc = 0x171F5Cu;
    // 0x171f5c: 0x1000007b
    ctx->pc = 0x171F5Cu;
    {
        const bool branch_taken_0x171f5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x171F60u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x171f5c) {
            ctx->pc = 0x17214Cu;
            goto label_17214c;
        }
    }
    ctx->pc = 0x171F64u;
label_171f64:
    // 0x171f64: 0xaf80825c
    ctx->pc = 0x171f64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935132), GPR_U32(ctx, 0));
    // 0x171f68: 0x92030001
    ctx->pc = 0x171f68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x171f6c: 0x2462fffd
    ctx->pc = 0x171f6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x171f70: 0x2c420002
    ctx->pc = 0x171f70u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x171f74: 0x10400046
    ctx->pc = 0x171F74u;
    {
        const bool branch_taken_0x171f74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x171F78u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
        if (branch_taken_0x171f74) {
            ctx->pc = 0x172090u;
            goto label_172090;
        }
    }
    ctx->pc = 0x171F7Cu;
    // 0x171f7c: 0x82020072
    ctx->pc = 0x171f7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
    // 0x171f80: 0x54400008
    ctx->pc = 0x171F80u;
    {
        const bool branch_taken_0x171f80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x171f80) {
            ctx->pc = 0x171F84u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 156)));
            ctx->pc = 0x171FA4u;
            goto label_171fa4;
        }
    }
    ctx->pc = 0x171F88u;
    // 0x171f88: 0x8f828120
    ctx->pc = 0x171f88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
    // 0x171f8c: 0x24050064
    ctx->pc = 0x171f8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 100));
    // 0x171f90: 0x8e0300a0
    ctx->pc = 0x171f90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x171f94: 0x8e04009c
    ctx->pc = 0x171f94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x171f98: 0x431023
    ctx->pc = 0x171f98u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171f9c: 0x451018
    ctx->pc = 0x171f9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x171fa0: 0x441021
    ctx->pc = 0x171fa0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_171fa4:
    // 0x171fa4: 0xae220000
    ctx->pc = 0x171fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x171fa8: 0x27b20004
    ctx->pc = 0x171fa8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 4));
    // 0x171fac: 0x200202d
    ctx->pc = 0x171facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171fb0: 0x3a0282d
    ctx->pc = 0x171fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171fb4: 0xc05c790
    ctx->pc = 0x171FB4u;
    SET_GPR_U32(ctx, 31, 0x171FBCu);
    ctx->pc = 0x171FB8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetTimeSfreq2_0x171e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171FBCu; }
        else if (ctx->pc != 0x171FBCu) { ctx->pc = 0x171FBCu; }
    }
    if (ctx->pc != 0x171FBCu) { return; }
    ctx->pc = 0x171FBCu;
    // 0x171fbc: 0x8fa20004
    ctx->pc = 0x171fbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x171fc0: 0xc7a10000
    ctx->pc = 0x171fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171fc4: 0x46800860
    ctx->pc = 0x171fc4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x171fc8: 0x8e230000
    ctx->pc = 0x171fc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x171fcc: 0xc7848258
    ctx->pc = 0x171fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x171fd0: 0x46802120
    ctx->pc = 0x171fd0u;
    ctx->f[4] = FPU_CVT_S_W(*(int32_t*)&ctx->f[4]);
    // 0x171fd4: 0x44821000
    ctx->pc = 0x171fd4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x171fd8: 0x468010a0
    ctx->pc = 0x171fd8u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x171fdc: 0x3c01447a
    ctx->pc = 0x171fdcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
    // 0x171fe0: 0x44812800
    ctx->pc = 0x171fe0u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 1);
    // 0x171fe4: 0x44830000
    ctx->pc = 0x171fe4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x171fe8: 0x46800020
    ctx->pc = 0x171fe8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x171fec: 0x3c014270
    ctx->pc = 0x171fecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17008 << 16));
    // 0x171ff0: 0x44811800
    ctx->pc = 0x171ff0u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x171ff4: 0x0
    ctx->pc = 0x171ff4u;
    // NOP
    // 0x171ff8: 0x0
    ctx->pc = 0x171ff8u;
    // NOP
    // 0x171ffc: 0x46020843
    ctx->pc = 0x171ffcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x172000: 0x0
    ctx->pc = 0x172000u;
    // NOP
    // 0x172004: 0x0
    ctx->pc = 0x172004u;
    // NOP
    // 0x172008: 0x46040003
    ctx->pc = 0x172008u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x17200c: 0x46000841
    ctx->pc = 0x17200cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172010: 0x46050842
    ctx->pc = 0x172010u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x172014: 0x46011834
    ctx->pc = 0x172014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172018: 0x0
    ctx->pc = 0x172018u;
    // NOP
    // 0x17201c: 0x45010007
    ctx->pc = 0x17201Cu;
    {
        const bool branch_taken_0x17201c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x172020u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294935132), bits); }
        if (branch_taken_0x17201c) {
            ctx->pc = 0x17203Cu;
            goto label_17203c;
        }
    }
    ctx->pc = 0x172024u;
    // 0x172024: 0x3c01c270
    ctx->pc = 0x172024u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49776 << 16));
    // 0x172028: 0x44810000
    ctx->pc = 0x172028u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x17202c: 0x46000834
    ctx->pc = 0x17202cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172030: 0x0
    ctx->pc = 0x172030u;
    // NOP
    // 0x172034: 0x45020040
    ctx->pc = 0x172034u;
    {
        const bool branch_taken_0x172034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172034) {
            ctx->pc = 0x172038u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->pc = 0x172138u;
            goto label_172138;
        }
    }
    ctx->pc = 0x17203Cu;
label_17203c:
    // 0x17203c: 0x8e04000c
    ctx->pc = 0x17203cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x172040: 0x240302d
    ctx->pc = 0x172040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172044: 0xc05b694
    ctx->pc = 0x172044u;
    SET_GPR_U32(ctx, 31, 0x17204Cu);
    ctx->pc = 0x172048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DA50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_GetTime_0x16da50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17204Cu; }
        else if (ctx->pc != 0x17204Cu) { ctx->pc = 0x17204Cu; }
    }
    if (ctx->pc != 0x17204Cu) { return; }
    ctx->pc = 0x17204Cu;
    // 0x17204c: 0x8fa30004
    ctx->pc = 0x17204cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x172050: 0xc7a00000
    ctx->pc = 0x172050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172054: 0x46800020
    ctx->pc = 0x172054u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x172058: 0xc7828258
    ctx->pc = 0x172058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17205c: 0x468010a0
    ctx->pc = 0x17205cu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x172060: 0x8f828120
    ctx->pc = 0x172060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
    // 0x172064: 0x44830800
    ctx->pc = 0x172064u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x172068: 0x46800860
    ctx->pc = 0x172068u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x17206c: 0xae0200a0
    ctx->pc = 0x17206cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x172070: 0x0
    ctx->pc = 0x172070u;
    // NOP
    // 0x172074: 0x0
    ctx->pc = 0x172074u;
    // NOP
    // 0x172078: 0x46010003
    ctx->pc = 0x172078u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x17207c: 0x46020002
    ctx->pc = 0x17207cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x172080: 0x46000064
    ctx->pc = 0x172080u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x172084: 0xe601009c
    ctx->pc = 0x172084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x172088: 0x1000002a
    ctx->pc = 0x172088u;
    {
        const bool branch_taken_0x172088 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17208Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x172088) {
            ctx->pc = 0x172134u;
            goto label_172134;
        }
    }
    ctx->pc = 0x172090u;
label_172090:
    // 0x172090: 0x24030005
    ctx->pc = 0x172090u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x172094: 0x21603
    ctx->pc = 0x172094u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x172098: 0x54430025
    ctx->pc = 0x172098u;
    {
        const bool branch_taken_0x172098 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x172098) {
            ctx->pc = 0x17209Cu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x172130u;
            goto label_172130;
        }
    }
    ctx->pc = 0x1720A0u;
    // 0x1720a0: 0xc05ba04
    ctx->pc = 0x1720A0u;
    SET_GPR_U32(ctx, 31, 0x1720A8u);
    ctx->pc = 0x1720A4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x16E810u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetTotalNumSmpl_0x16e810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1720A8u; }
        else if (ctx->pc != 0x1720A8u) { ctx->pc = 0x1720A8u; }
    }
    if (ctx->pc != 0x1720A8u) { return; }
    ctx->pc = 0x1720A8u;
    // 0x1720a8: 0x8e040004
    ctx->pc = 0x1720a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1720ac: 0xc05b9dc
    ctx->pc = 0x1720ACu;
    SET_GPR_U32(ctx, 31, 0x1720B4u);
    ctx->pc = 0x1720B0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x16E770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetSfreq_0x16e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1720B4u; }
        else if (ctx->pc != 0x1720B4u) { ctx->pc = 0x1720B4u; }
    }
    if (ctx->pc != 0x1720B4u) { return; }
    ctx->pc = 0x1720B4u;
    // 0x1720b4: 0x8e040004
    ctx->pc = 0x1720b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1720b8: 0xc05b9ec
    ctx->pc = 0x1720B8u;
    SET_GPR_U32(ctx, 31, 0x1720C0u);
    ctx->pc = 0x1720BCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x16E7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetOutBps_0x16e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1720C0u; }
        else if (ctx->pc != 0x1720C0u) { ctx->pc = 0x1720C0u; }
    }
    if (ctx->pc != 0x1720C0u) { return; }
    ctx->pc = 0x1720C0u;
    // 0x1720c0: 0x24040010
    ctx->pc = 0x1720c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1720c4: 0x50400001
    ctx->pc = 0x1720C4u;
    {
        const bool branch_taken_0x1720c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1720c4) {
            ctx->pc = 0x1720C8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1720CCu;
            goto label_1720cc;
        }
    }
    ctx->pc = 0x1720CCu;
label_1720cc:
    // 0x1720cc: 0x82001a
    ctx->pc = 0x1720ccu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1720d0: 0x8fa30000
    ctx->pc = 0x1720d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1720d4: 0x8fa20004
    ctx->pc = 0x1720d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1720d8: 0xc7828258
    ctx->pc = 0x1720d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1720dc: 0x468010a0
    ctx->pc = 0x1720dcu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x1720e0: 0x44820800
    ctx->pc = 0x1720e0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1720e4: 0x46800860
    ctx->pc = 0x1720e4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1720e8: 0x2012
    ctx->pc = 0x1720e8u;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x1720ec: 0x641818
    ctx->pc = 0x1720ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1720f0: 0x44830000
    ctx->pc = 0x1720f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1720f4: 0x46800020
    ctx->pc = 0x1720f4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1720f8: 0xafa30000
    ctx->pc = 0x1720f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1720fc: 0x0
    ctx->pc = 0x1720fcu;
    // NOP
    // 0x172100: 0x0
    ctx->pc = 0x172100u;
    // NOP
    // 0x172104: 0x46010003
    ctx->pc = 0x172104u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x172108: 0x46020002
    ctx->pc = 0x172108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x17210c: 0x46000064
    ctx->pc = 0x17210cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x172110: 0x44020800
    ctx->pc = 0x172110u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x172114: 0xae220000
    ctx->pc = 0x172114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x172118: 0x24420001
    ctx->pc = 0x172118u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x17211c: 0x8e03009c
    ctx->pc = 0x17211cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x172120: 0x431021
    ctx->pc = 0x172120u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172124: 0x40182d
    ctx->pc = 0x172124u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172128: 0x10000002
    ctx->pc = 0x172128u;
    {
        const bool branch_taken_0x172128 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17212Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x172128) {
            ctx->pc = 0x172134u;
            goto label_172134;
        }
    }
    ctx->pc = 0x172130u;
label_172130:
    // 0x172130: 0x182d
    ctx->pc = 0x172130u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172134:
    // 0x172134: 0x8e020088
    ctx->pc = 0x172134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_172138:
    // 0x172138: 0x621021
    ctx->pc = 0x172138u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17213c: 0xae220000
    ctx->pc = 0x17213cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x172140: 0x8f838258
    ctx->pc = 0x172140u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935128)));
    // 0x172144: 0xae630000
    ctx->pc = 0x172144u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x172148: 0xdfbf0050
    ctx->pc = 0x172148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17214c:
    // 0x17214c: 0xdfb30040
    ctx->pc = 0x17214cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172150: 0xdfb20030
    ctx->pc = 0x172150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172154: 0xdfb10020
    ctx->pc = 0x172154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172158: 0xdfb00010
    ctx->pc = 0x172158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17215c: 0x3e00008
    ctx->pc = 0x17215Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172160u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171F64u: goto label_171f64;
            case 0x171FA4u: goto label_171fa4;
            case 0x17203Cu: goto label_17203c;
            case 0x172090u: goto label_172090;
            case 0x1720CCu: goto label_1720cc;
            case 0x172130u: goto label_172130;
            case 0x172134u: goto label_172134;
            case 0x172138u: goto label_172138;
            case 0x17214Cu: goto label_17214c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172164u;
}
