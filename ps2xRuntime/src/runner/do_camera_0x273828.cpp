#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_camera
// Address: 0x273828 - 0x273c00
void do_camera_0x273828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x273828u;

    // 0x273828: 0x27bdff80
    ctx->pc = 0x273828u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27382c: 0xffbf0070
    ctx->pc = 0x27382cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x273830: 0xffb60060
    ctx->pc = 0x273830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x273834: 0xffb50050
    ctx->pc = 0x273834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x273838: 0xffb40040
    ctx->pc = 0x273838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27383c: 0xffb30030
    ctx->pc = 0x27383cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x273840: 0xffb20020
    ctx->pc = 0x273840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x273844: 0xffb10010
    ctx->pc = 0x273844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x273848: 0xffb00000
    ctx->pc = 0x273848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27384c: 0xc08ca24
    ctx->pc = 0x27384Cu;
    SET_GPR_U32(ctx, 31, 0x273854u);
    ctx->pc = 0x273850u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    ctx->pc = 0x232890u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerOnMovingObject_0x232890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273854u; }
    }
    if (ctx->pc != 0x273854u) { return; }
    ctx->pc = 0x273854u;
    // 0x273854: 0x2c420001
    ctx->pc = 0x273854u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x273858: 0xae02eb04
    ctx->pc = 0x273858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294961924), GPR_U32(ctx, 2));
    // 0x27385c: 0x882d
    ctx->pc = 0x27385cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273860: 0x3c020034
    ctx->pc = 0x273860u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x273864: 0x2450f530
    ctx->pc = 0x273864u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294964528));
label_273868:
    // 0x273868: 0x8e020000
    ctx->pc = 0x273868u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27386c: 0x4420001
    ctx->pc = 0x27386Cu;
    {
        const bool branch_taken_0x27386c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27386c) {
            ctx->pc = 0x273870u;
            SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->pc = 0x273874u;
            goto label_273874;
        }
    }
    ctx->pc = 0x273874u;
label_273874:
    // 0x273874: 0x24030001
    ctx->pc = 0x273874u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x273878: 0x54430048
    ctx->pc = 0x273878u;
    {
        const bool branch_taken_0x273878 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x273878) {
            ctx->pc = 0x27387Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x27399Cu;
            goto label_27399c;
        }
    }
    ctx->pc = 0x273880u;
    // 0x273880: 0x8e070004
    ctx->pc = 0x273880u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x273884: 0x202d
    ctx->pc = 0x273884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273888: 0x26050020
    ctx->pc = 0x273888u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 32));
    // 0x27388c: 0x26060024
    ctx->pc = 0x27388cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 36));
    // 0x273890: 0xc09cf78
    ctx->pc = 0x273890u;
    SET_GPR_U32(ctx, 31, 0x273898u);
    ctx->pc = 0x273894u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 64));
    ctx->pc = 0x273DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_screen_pos_0x273de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273898u; }
    }
    if (ctx->pc != 0x273898u) { return; }
    ctx->pc = 0x273898u;
    // 0x273898: 0x3c01c4fa
    ctx->pc = 0x273898u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50426 << 16));
    // 0x27389c: 0x44810800
    ctx->pc = 0x27389cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2738a0: 0xc6000020
    ctx->pc = 0x2738a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2738a4: 0x46010034
    ctx->pc = 0x2738a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2738a8: 0x0
    ctx->pc = 0x2738a8u;
    // NOP
    // 0x2738ac: 0x4503000a
    ctx->pc = 0x2738ACu;
    {
        const bool branch_taken_0x2738ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2738ac) {
            ctx->pc = 0x2738B0u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
            ctx->pc = 0x2738D8u;
            goto label_2738d8;
        }
    }
    ctx->pc = 0x2738B4u;
    // 0x2738b4: 0x3c0144fa
    ctx->pc = 0x2738b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17658 << 16));
    // 0x2738b8: 0x44810800
    ctx->pc = 0x2738b8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2738bc: 0xc6000020
    ctx->pc = 0x2738bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2738c0: 0x46000834
    ctx->pc = 0x2738c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2738c4: 0x0
    ctx->pc = 0x2738c4u;
    // NOP
    // 0x2738c8: 0x45030001
    ctx->pc = 0x2738C8u;
    {
        const bool branch_taken_0x2738c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2738c8) {
            ctx->pc = 0x2738CCu;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
            ctx->pc = 0x2738D0u;
            goto label_2738d0;
        }
    }
    ctx->pc = 0x2738D0u;
label_2738d0:
    // 0x2738d0: 0x3c01c4fa
    ctx->pc = 0x2738d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50426 << 16));
    // 0x2738d4: 0x44810800
    ctx->pc = 0x2738d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2738d8:
    // 0x2738d8: 0xc6000024
    ctx->pc = 0x2738d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2738dc: 0x46010034
    ctx->pc = 0x2738dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2738e0: 0x0
    ctx->pc = 0x2738e0u;
    // NOP
    // 0x2738e4: 0x45030009
    ctx->pc = 0x2738E4u;
    {
        const bool branch_taken_0x2738e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2738e4) {
            ctx->pc = 0x2738E8u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
            ctx->pc = 0x27390Cu;
            goto label_27390c;
        }
    }
    ctx->pc = 0x2738ECu;
    // 0x2738ec: 0x3c0144fa
    ctx->pc = 0x2738ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17658 << 16));
    // 0x2738f0: 0x44810800
    ctx->pc = 0x2738f0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2738f4: 0xc6000024
    ctx->pc = 0x2738f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2738f8: 0x46000834
    ctx->pc = 0x2738f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2738fc: 0x0
    ctx->pc = 0x2738fcu;
    // NOP
    // 0x273900: 0x45020003
    ctx->pc = 0x273900u;
    {
        const bool branch_taken_0x273900 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273900) {
            ctx->pc = 0x273904u;
            SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x273910u;
            goto label_273910;
        }
    }
    ctx->pc = 0x273908u;
    // 0x273908: 0xe6010024
    ctx->pc = 0x273908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_27390c:
    // 0x27390c: 0x8e070004
    ctx->pc = 0x27390cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_273910:
    // 0x273910: 0x202d
    ctx->pc = 0x273910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273914: 0x26050028
    ctx->pc = 0x273914u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 40));
    // 0x273918: 0x2606002c
    ctx->pc = 0x273918u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 44));
    // 0x27391c: 0xc09cf78
    ctx->pc = 0x27391Cu;
    SET_GPR_U32(ctx, 31, 0x273924u);
    ctx->pc = 0x273920u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 48));
    ctx->pc = 0x273DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_screen_pos_0x273de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273924u; }
    }
    if (ctx->pc != 0x273924u) { return; }
    ctx->pc = 0x273924u;
    // 0x273924: 0x3c01c4fa
    ctx->pc = 0x273924u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50426 << 16));
    // 0x273928: 0x44810800
    ctx->pc = 0x273928u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27392c: 0xc6000028
    ctx->pc = 0x27392cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273930: 0x46010034
    ctx->pc = 0x273930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273934: 0x0
    ctx->pc = 0x273934u;
    // NOP
    // 0x273938: 0x4503000a
    ctx->pc = 0x273938u;
    {
        const bool branch_taken_0x273938 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273938) {
            ctx->pc = 0x27393Cu;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
            ctx->pc = 0x273964u;
            goto label_273964;
        }
    }
    ctx->pc = 0x273940u;
    // 0x273940: 0x3c0144fa
    ctx->pc = 0x273940u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17658 << 16));
    // 0x273944: 0x44810800
    ctx->pc = 0x273944u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x273948: 0xc6000028
    ctx->pc = 0x273948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27394c: 0x46000834
    ctx->pc = 0x27394cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273950: 0x0
    ctx->pc = 0x273950u;
    // NOP
    // 0x273954: 0x45030001
    ctx->pc = 0x273954u;
    {
        const bool branch_taken_0x273954 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273954) {
            ctx->pc = 0x273958u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
            ctx->pc = 0x27395Cu;
            goto label_27395c;
        }
    }
    ctx->pc = 0x27395Cu;
label_27395c:
    // 0x27395c: 0x3c01c4fa
    ctx->pc = 0x27395cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50426 << 16));
    // 0x273960: 0x44810800
    ctx->pc = 0x273960u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_273964:
    // 0x273964: 0xc600002c
    ctx->pc = 0x273964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273968: 0x46010034
    ctx->pc = 0x273968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27396c: 0x0
    ctx->pc = 0x27396cu;
    // NOP
    // 0x273970: 0x45030009
    ctx->pc = 0x273970u;
    {
        const bool branch_taken_0x273970 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273970) {
            ctx->pc = 0x273974u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
            ctx->pc = 0x273998u;
            goto label_273998;
        }
    }
    ctx->pc = 0x273978u;
    // 0x273978: 0x3c0144fa
    ctx->pc = 0x273978u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17658 << 16));
    // 0x27397c: 0x44810800
    ctx->pc = 0x27397cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x273980: 0xc600002c
    ctx->pc = 0x273980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273984: 0x46000834
    ctx->pc = 0x273984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273988: 0x0
    ctx->pc = 0x273988u;
    // NOP
    // 0x27398c: 0x45020003
    ctx->pc = 0x27398Cu;
    {
        const bool branch_taken_0x27398c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27398c) {
            ctx->pc = 0x273990u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x27399Cu;
            goto label_27399c;
        }
    }
    ctx->pc = 0x273994u;
    // 0x273994: 0xe601002c
    ctx->pc = 0x273994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_273998:
    // 0x273998: 0x26310001
    ctx->pc = 0x273998u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_27399c:
    // 0x27399c: 0x2a22000f
    ctx->pc = 0x27399cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 15));
    // 0x2739a0: 0x1440ffb1
    ctx->pc = 0x2739A0u;
    {
        const bool branch_taken_0x2739a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2739A4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
        if (branch_taken_0x2739a0) {
            ctx->pc = 0x273868u;
            goto label_273868;
        }
    }
    ctx->pc = 0x2739A8u;
    // 0x2739a8: 0x3c02003c
    ctx->pc = 0x2739a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2739ac: 0xac4038d4
    ctx->pc = 0x2739acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14548), GPR_U32(ctx, 0));
    // 0x2739b0: 0x3c020031
    ctx->pc = 0x2739b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2739b4: 0x3c030031
    ctx->pc = 0x2739b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2739b8: 0x8c42ff9c
    ctx->pc = 0x2739b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x2739bc: 0x8c630024
    ctx->pc = 0x2739bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2739c0: 0x431025
    ctx->pc = 0x2739c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2739c4: 0x14400009
    ctx->pc = 0x2739C4u;
    {
        const bool branch_taken_0x2739c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2739C8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2739c4) {
            ctx->pc = 0x2739ECu;
            goto label_2739ec;
        }
    }
    ctx->pc = 0x2739CCu;
    // 0x2739cc: 0x3c04003c
    ctx->pc = 0x2739ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2739d0: 0x8c8338dc
    ctx->pc = 0x2739d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 14556)));
    // 0x2739d4: 0x18600005
    ctx->pc = 0x2739D4u;
    {
        const bool branch_taken_0x2739d4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2739D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2739d4) {
            ctx->pc = 0x2739ECu;
            goto label_2739ec;
        }
    }
    ctx->pc = 0x2739DCu;
    // 0x2739dc: 0x8c42ffbc
    ctx->pc = 0x2739dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x2739e0: 0x621023
    ctx->pc = 0x2739e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2739e4: 0xac8238dc
    ctx->pc = 0x2739e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14556), GPR_U32(ctx, 2));
    // 0x2739e8: 0x882d
    ctx->pc = 0x2739e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2739ec:
    // 0x2739ec: 0x3c020034
    ctx->pc = 0x2739ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2739f0: 0x2450eb60
    ctx->pc = 0x2739f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x2739f4: 0x24160001
    ctx->pc = 0x2739f4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2739f8: 0x3c150031
    ctx->pc = 0x2739f8u;
    SET_GPR_U32(ctx, 21, ((uint32_t)49 << 16));
    // 0x2739fc: 0x3c140031
    ctx->pc = 0x2739fcu;
    SET_GPR_U32(ctx, 20, ((uint32_t)49 << 16));
    // 0x273a00: 0x3c13003c
    ctx->pc = 0x273a00u;
    SET_GPR_U32(ctx, 19, ((uint32_t)60 << 16));
    // 0x273a04: 0x3c120034
    ctx->pc = 0x273a04u;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
label_273a08:
    // 0x273a08: 0x8e020000
    ctx->pc = 0x273a08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x273a0c: 0x54560011
    ctx->pc = 0x273A0Cu;
    {
        const bool branch_taken_0x273a0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 22));
        if (branch_taken_0x273a0c) {
            ctx->pc = 0x273A10u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x273A54u;
            goto label_273a54;
        }
    }
    ctx->pc = 0x273A14u;
    // 0x273a14: 0x8ea2ff9c
    ctx->pc = 0x273a14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294967196)));
    // 0x273a18: 0x8e830024
    ctx->pc = 0x273a18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x273a1c: 0x431025
    ctx->pc = 0x273a1cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273a20: 0x54400007
    ctx->pc = 0x273A20u;
    {
        const bool branch_taken_0x273a20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x273a20) {
            ctx->pc = 0x273A24u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->pc = 0x273A40u;
            goto label_273a40;
        }
    }
    ctx->pc = 0x273A28u;
    // 0x273a28: 0xae6038d4
    ctx->pc = 0x273a28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 14548), GPR_U32(ctx, 0));
    // 0x273a2c: 0xc09ccb8
    ctx->pc = 0x273A2Cu;
    SET_GPR_U32(ctx, 31, 0x273A34u);
    ctx->pc = 0x273A30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2732E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_camera_mode_0x2732e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273A34u; }
    }
    if (ctx->pc != 0x273A34u) { return; }
    ctx->pc = 0x273A34u;
    // 0x273a34: 0xc09ca9a
    ctx->pc = 0x273A34u;
    SET_GPR_U32(ctx, 31, 0x273A3Cu);
    ctx->pc = 0x273A38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x272A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_camera_0x272a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273A3Cu; }
    }
    if (ctx->pc != 0x273A3Cu) { return; }
    ctx->pc = 0x273A3Cu;
    // 0x273a3c: 0x8e0200f8
    ctx->pc = 0x273a3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_273a40:
    // 0x273a40: 0x10400003
    ctx->pc = 0x273A40u;
    {
        const bool branch_taken_0x273a40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x273A44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x273a40) {
            ctx->pc = 0x273A50u;
            goto label_273a50;
        }
    }
    ctx->pc = 0x273A48u;
    // 0x273a48: 0xc099c48
    ctx->pc = 0x273A48u;
    SET_GPR_U32(ctx, 31, 0x273A50u);
    ctx->pc = 0x273A4Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4294965764)));
    ctx->pc = 0x267120u;
    {
        const uint32_t __entryPc = ctx->pc;
        ProcCamera_0x267120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273A50u; }
    }
    if (ctx->pc != 0x273A50u) { return; }
    ctx->pc = 0x273A50u;
label_273a50:
    // 0x273a50: 0x26310001
    ctx->pc = 0x273a50u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_273a54:
    // 0x273a54: 0x2a220006
    ctx->pc = 0x273a54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 6));
    // 0x273a58: 0x1440ffeb
    ctx->pc = 0x273A58u;
    {
        const bool branch_taken_0x273a58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x273A5Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 416));
        if (branch_taken_0x273a58) {
            ctx->pc = 0x273A08u;
            goto label_273a08;
        }
    }
    ctx->pc = 0x273A60u;
    // 0x273a60: 0x882d
    ctx->pc = 0x273a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273a64: 0x3c020034
    ctx->pc = 0x273a64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x273a68: 0x2450f530
    ctx->pc = 0x273a68u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294964528));
    // 0x273a6c: 0x0
    ctx->pc = 0x273a6cu;
    // NOP
label_273a70:
    // 0x273a70: 0x8e020000
    ctx->pc = 0x273a70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x273a74: 0x4420001
    ctx->pc = 0x273A74u;
    {
        const bool branch_taken_0x273a74 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x273a74) {
            ctx->pc = 0x273A78u;
            SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->pc = 0x273A7Cu;
            goto label_273a7c;
        }
    }
    ctx->pc = 0x273A7Cu;
label_273a7c:
    // 0x273a7c: 0x24030001
    ctx->pc = 0x273a7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x273a80: 0x54430048
    ctx->pc = 0x273A80u;
    {
        const bool branch_taken_0x273a80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x273a80) {
            ctx->pc = 0x273A84u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x273BA4u;
            goto label_273ba4;
        }
    }
    ctx->pc = 0x273A88u;
    // 0x273a88: 0x8e070004
    ctx->pc = 0x273a88u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x273a8c: 0x202d
    ctx->pc = 0x273a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273a90: 0x26050030
    ctx->pc = 0x273a90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 48));
    // 0x273a94: 0x26060034
    ctx->pc = 0x273a94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 52));
    // 0x273a98: 0xc09cf78
    ctx->pc = 0x273A98u;
    SET_GPR_U32(ctx, 31, 0x273AA0u);
    ctx->pc = 0x273A9Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 64));
    ctx->pc = 0x273DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_screen_pos_0x273de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273AA0u; }
    }
    if (ctx->pc != 0x273AA0u) { return; }
    ctx->pc = 0x273AA0u;
    // 0x273aa0: 0x3c01c4fa
    ctx->pc = 0x273aa0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50426 << 16));
    // 0x273aa4: 0x44810800
    ctx->pc = 0x273aa4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x273aa8: 0xc6000030
    ctx->pc = 0x273aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273aac: 0x46010034
    ctx->pc = 0x273aacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273ab0: 0x0
    ctx->pc = 0x273ab0u;
    // NOP
    // 0x273ab4: 0x4503000a
    ctx->pc = 0x273AB4u;
    {
        const bool branch_taken_0x273ab4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273ab4) {
            ctx->pc = 0x273AB8u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
            ctx->pc = 0x273AE0u;
            goto label_273ae0;
        }
    }
    ctx->pc = 0x273ABCu;
    // 0x273abc: 0x3c0144fa
    ctx->pc = 0x273abcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17658 << 16));
    // 0x273ac0: 0x44810800
    ctx->pc = 0x273ac0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x273ac4: 0xc6000030
    ctx->pc = 0x273ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273ac8: 0x46000834
    ctx->pc = 0x273ac8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273acc: 0x0
    ctx->pc = 0x273accu;
    // NOP
    // 0x273ad0: 0x45030001
    ctx->pc = 0x273AD0u;
    {
        const bool branch_taken_0x273ad0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273ad0) {
            ctx->pc = 0x273AD4u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
            ctx->pc = 0x273AD8u;
            goto label_273ad8;
        }
    }
    ctx->pc = 0x273AD8u;
label_273ad8:
    // 0x273ad8: 0x3c01c4fa
    ctx->pc = 0x273ad8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50426 << 16));
    // 0x273adc: 0x44810800
    ctx->pc = 0x273adcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_273ae0:
    // 0x273ae0: 0xc6000034
    ctx->pc = 0x273ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273ae4: 0x46010034
    ctx->pc = 0x273ae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273ae8: 0x0
    ctx->pc = 0x273ae8u;
    // NOP
    // 0x273aec: 0x45030009
    ctx->pc = 0x273AECu;
    {
        const bool branch_taken_0x273aec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273aec) {
            ctx->pc = 0x273AF0u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
            ctx->pc = 0x273B14u;
            goto label_273b14;
        }
    }
    ctx->pc = 0x273AF4u;
    // 0x273af4: 0x3c0144fa
    ctx->pc = 0x273af4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17658 << 16));
    // 0x273af8: 0x44810800
    ctx->pc = 0x273af8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x273afc: 0xc6000034
    ctx->pc = 0x273afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273b00: 0x46000834
    ctx->pc = 0x273b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273b04: 0x0
    ctx->pc = 0x273b04u;
    // NOP
    // 0x273b08: 0x45020003
    ctx->pc = 0x273B08u;
    {
        const bool branch_taken_0x273b08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273b08) {
            ctx->pc = 0x273B0Cu;
            SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x273B18u;
            goto label_273b18;
        }
    }
    ctx->pc = 0x273B10u;
    // 0x273b10: 0xe6010034
    ctx->pc = 0x273b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_273b14:
    // 0x273b14: 0x8e070004
    ctx->pc = 0x273b14u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_273b18:
    // 0x273b18: 0x202d
    ctx->pc = 0x273b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b1c: 0x26050038
    ctx->pc = 0x273b1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 56));
    // 0x273b20: 0x2606003c
    ctx->pc = 0x273b20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 60));
    // 0x273b24: 0xc09cf78
    ctx->pc = 0x273B24u;
    SET_GPR_U32(ctx, 31, 0x273B2Cu);
    ctx->pc = 0x273B28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 48));
    ctx->pc = 0x273DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_screen_pos_0x273de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B2Cu; }
    }
    if (ctx->pc != 0x273B2Cu) { return; }
    ctx->pc = 0x273B2Cu;
    // 0x273b2c: 0x3c01c4fa
    ctx->pc = 0x273b2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50426 << 16));
    // 0x273b30: 0x44810800
    ctx->pc = 0x273b30u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x273b34: 0xc6000038
    ctx->pc = 0x273b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273b38: 0x46010034
    ctx->pc = 0x273b38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273b3c: 0x0
    ctx->pc = 0x273b3cu;
    // NOP
    // 0x273b40: 0x4503000a
    ctx->pc = 0x273B40u;
    {
        const bool branch_taken_0x273b40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273b40) {
            ctx->pc = 0x273B44u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
            ctx->pc = 0x273B6Cu;
            goto label_273b6c;
        }
    }
    ctx->pc = 0x273B48u;
    // 0x273b48: 0x3c0144fa
    ctx->pc = 0x273b48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17658 << 16));
    // 0x273b4c: 0x44810800
    ctx->pc = 0x273b4cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x273b50: 0xc6000038
    ctx->pc = 0x273b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273b54: 0x46000834
    ctx->pc = 0x273b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273b58: 0x0
    ctx->pc = 0x273b58u;
    // NOP
    // 0x273b5c: 0x45030001
    ctx->pc = 0x273B5Cu;
    {
        const bool branch_taken_0x273b5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273b5c) {
            ctx->pc = 0x273B60u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
            ctx->pc = 0x273B64u;
            goto label_273b64;
        }
    }
    ctx->pc = 0x273B64u;
label_273b64:
    // 0x273b64: 0x3c01c4fa
    ctx->pc = 0x273b64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50426 << 16));
    // 0x273b68: 0x44810800
    ctx->pc = 0x273b68u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_273b6c:
    // 0x273b6c: 0xc600003c
    ctx->pc = 0x273b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273b70: 0x46010034
    ctx->pc = 0x273b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273b74: 0x0
    ctx->pc = 0x273b74u;
    // NOP
    // 0x273b78: 0x45030009
    ctx->pc = 0x273B78u;
    {
        const bool branch_taken_0x273b78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273b78) {
            ctx->pc = 0x273B7Cu;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
            ctx->pc = 0x273BA0u;
            goto label_273ba0;
        }
    }
    ctx->pc = 0x273B80u;
    // 0x273b80: 0x3c0144fa
    ctx->pc = 0x273b80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17658 << 16));
    // 0x273b84: 0x44810800
    ctx->pc = 0x273b84u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x273b88: 0xc600003c
    ctx->pc = 0x273b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273b8c: 0x46000834
    ctx->pc = 0x273b8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273b90: 0x0
    ctx->pc = 0x273b90u;
    // NOP
    // 0x273b94: 0x45020003
    ctx->pc = 0x273B94u;
    {
        const bool branch_taken_0x273b94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273b94) {
            ctx->pc = 0x273B98u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x273BA4u;
            goto label_273ba4;
        }
    }
    ctx->pc = 0x273B9Cu;
    // 0x273b9c: 0xe601003c
    ctx->pc = 0x273b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_273ba0:
    // 0x273ba0: 0x26310001
    ctx->pc = 0x273ba0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_273ba4:
    // 0x273ba4: 0x2a22000f
    ctx->pc = 0x273ba4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 15));
    // 0x273ba8: 0x1440ffb1
    ctx->pc = 0x273BA8u;
    {
        const bool branch_taken_0x273ba8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x273BACu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
        if (branch_taken_0x273ba8) {
            ctx->pc = 0x273A70u;
            goto label_273a70;
        }
    }
    ctx->pc = 0x273BB0u;
    // 0x273bb0: 0xc099984
    ctx->pc = 0x273BB0u;
    SET_GPR_U32(ctx, 31, 0x273BB8u);
    ctx->pc = 0x266610u;
    {
        const uint32_t __entryPc = ctx->pc;
        debug_camera_pos_0x266610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273BB8u; }
    }
    if (ctx->pc != 0x273BB8u) { return; }
    ctx->pc = 0x273BB8u;
    // 0x273bb8: 0x3c020034
    ctx->pc = 0x273bb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x273bbc: 0x8c45f520
    ctx->pc = 0x273bbcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294964512)));
    // 0x273bc0: 0x240201a0
    ctx->pc = 0x273bc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x273bc4: 0xa22818
    ctx->pc = 0x273bc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x273bc8: 0x3c020034
    ctx->pc = 0x273bc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x273bcc: 0x2442eb70
    ctx->pc = 0x273bccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x273bd0: 0xa22821
    ctx->pc = 0x273bd0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x273bd4: 0x24a40030
    ctx->pc = 0x273bd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 48));
    // 0x273bd8: 0xdfbf0070
    ctx->pc = 0x273bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x273bdc: 0xdfb60060
    ctx->pc = 0x273bdcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x273be0: 0xdfb50050
    ctx->pc = 0x273be0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x273be4: 0xdfb40040
    ctx->pc = 0x273be4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x273be8: 0xdfb30030
    ctx->pc = 0x273be8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273bec: 0xdfb20020
    ctx->pc = 0x273becu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273bf0: 0xdfb10010
    ctx->pc = 0x273bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273bf4: 0xdfb00000
    ctx->pc = 0x273bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273bf8: 0x80b0f84
    ctx->pc = 0x273BF8u;
    ctx->pc = 0x273BFCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x2C3E10u;
    MBCameraUpdate_0x2c3e10(rdram, ctx, runtime); return;
    ctx->pc = 0x273C00u;
}
