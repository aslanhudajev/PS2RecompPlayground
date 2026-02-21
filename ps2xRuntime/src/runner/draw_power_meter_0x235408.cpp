#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: draw_power_meter
// Address: 0x235408 - 0x2358ec
void draw_power_meter_0x235408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x235408u;

    // 0x235408: 0x27bdff50
    ctx->pc = 0x235408u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x23540c: 0xffbf00a0
    ctx->pc = 0x23540cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x235410: 0xffbe0090
    ctx->pc = 0x235410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x235414: 0xffb70080
    ctx->pc = 0x235414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x235418: 0xffb60070
    ctx->pc = 0x235418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x23541c: 0xffb50060
    ctx->pc = 0x23541cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x235420: 0xffb40050
    ctx->pc = 0x235420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x235424: 0xffb30040
    ctx->pc = 0x235424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x235428: 0xffb20030
    ctx->pc = 0x235428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x23542c: 0xffb10020
    ctx->pc = 0x23542cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x235430: 0xffb00010
    ctx->pc = 0x235430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x235434: 0x80a82d
    ctx->pc = 0x235434u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235438: 0x24032b00
    ctx->pc = 0x235438u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x23543c: 0x2a31818
    ctx->pc = 0x23543cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x235440: 0x3c020032
    ctx->pc = 0x235440u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x235444: 0x24421bc0
    ctx->pc = 0x235444u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x235448: 0x62b021
    ctx->pc = 0x235448u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23544c: 0x982d
    ctx->pc = 0x23544cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235450: 0x3c020033
    ctx->pc = 0x235450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x235454: 0x2451cae8
    ctx->pc = 0x235454u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294953704));
    // 0x235458: 0x2402001c
    ctx->pc = 0x235458u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
    // 0x23545c: 0x2a28018
    ctx->pc = 0x23545cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x235460: 0x131080
    ctx->pc = 0x235460u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x235464: 0x0
    ctx->pc = 0x235464u;
    // NOP
label_235468:
    // 0x235468: 0x501021
    ctx->pc = 0x235468u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23546c: 0x511021
    ctx->pc = 0x23546cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x235470: 0x8c440000
    ctx->pc = 0x235470u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235474: 0xc0b0ce8
    ctx->pc = 0x235474u;
    SET_GPR_U32(ctx, 31, 0x23547Cu);
    ctx->pc = 0x235478u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23547Cu; }
    }
    if (ctx->pc != 0x23547Cu) { return; }
    ctx->pc = 0x23547Cu;
    // 0x23547c: 0x26730001
    ctx->pc = 0x23547cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x235480: 0x2a620007
    ctx->pc = 0x235480u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 7));
    // 0x235484: 0x1440fff8
    ctx->pc = 0x235484u;
    {
        const bool branch_taken_0x235484 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x235488u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x235484) {
            ctx->pc = 0x235468u;
            goto label_235468;
        }
    }
    ctx->pc = 0x23548Cu;
    // 0x23548c: 0x2c0202d
    ctx->pc = 0x23548cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235490: 0xc08d4bc
    ctx->pc = 0x235490u;
    SET_GPR_U32(ctx, 31, 0x235498u);
    ctx->pc = 0x235494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2352F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        power_bar_state_0x2352f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235498u; }
    }
    if (ctx->pc != 0x235498u) { return; }
    ctx->pc = 0x235498u;
    // 0x235498: 0xc6c00800
    ctx->pc = 0x235498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23549c: 0x3c0142c8
    ctx->pc = 0x23549cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x2354a0: 0x44810800
    ctx->pc = 0x2354a0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2354a4: 0x46000834
    ctx->pc = 0x2354a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2354a8: 0x0
    ctx->pc = 0x2354a8u;
    // NOP
    // 0x2354ac: 0x45000002
    ctx->pc = 0x2354ACu;
    {
        const bool branch_taken_0x2354ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2354B0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2354ac) {
            ctx->pc = 0x2354B8u;
            goto label_2354b8;
        }
    }
    ctx->pc = 0x2354B4u;
    // 0x2354b4: 0xe6c10800
    ctx->pc = 0x2354b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 2048), bits); }
label_2354b8:
    // 0x2354b8: 0xc6c10804
    ctx->pc = 0x2354b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 2052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2354bc: 0xc6c00800
    ctx->pc = 0x2354bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2354c0: 0x46000834
    ctx->pc = 0x2354c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2354c4: 0x0
    ctx->pc = 0x2354c4u;
    // NOP
    // 0x2354c8: 0x45000016
    ctx->pc = 0x2354C8u;
    {
        const bool branch_taken_0x2354c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2354CCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x2354c8) {
            ctx->pc = 0x235524u;
            goto label_235524;
        }
    }
    ctx->pc = 0x2354D0u;
    // 0x2354d0: 0x8c62ffc0
    ctx->pc = 0x2354d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967232)));
    // 0x2354d4: 0x4400005
    ctx->pc = 0x2354D4u;
    {
        const bool branch_taken_0x2354d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2354D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967232));
        if (branch_taken_0x2354d4) {
            ctx->pc = 0x2354ECu;
            goto label_2354ec;
        }
    }
    ctx->pc = 0x2354DCu;
    // 0x2354dc: 0x44820800
    ctx->pc = 0x2354dcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2354e0: 0x46800860
    ctx->pc = 0x2354e0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2354e4: 0x10000009
    ctx->pc = 0x2354E4u;
    {
        const bool branch_taken_0x2354e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2354E8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 2052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2354e4) {
            ctx->pc = 0x23550Cu;
            goto label_23550c;
        }
    }
    ctx->pc = 0x2354ECu;
label_2354ec:
    // 0x2354ec: 0x8c820000
    ctx->pc = 0x2354ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2354f0: 0x30430001
    ctx->pc = 0x2354f0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2354f4: 0x21042
    ctx->pc = 0x2354f4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x2354f8: 0x621825
    ctx->pc = 0x2354f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2354fc: 0x44830800
    ctx->pc = 0x2354fcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x235500: 0x46800860
    ctx->pc = 0x235500u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x235504: 0x46010840
    ctx->pc = 0x235504u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x235508: 0xc6c00804
    ctx->pc = 0x235508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 2052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23550c:
    // 0x23550c: 0x46000800
    ctx->pc = 0x23550cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x235510: 0xe6c00804
    ctx->pc = 0x235510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 2052), bits); }
    // 0x235514: 0xc6c10800
    ctx->pc = 0x235514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235518: 0x46000834
    ctx->pc = 0x235518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23551c: 0x10000015
    ctx->pc = 0x23551Cu;
    {
        const bool branch_taken_0x23551c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23551c) {
            ctx->pc = 0x235574u;
            goto label_235574;
        }
    }
    ctx->pc = 0x235524u;
label_235524:
    // 0x235524: 0x3c020031
    ctx->pc = 0x235524u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x235528: 0x8c42ffc0
    ctx->pc = 0x235528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967232)));
    // 0x23552c: 0x21840
    ctx->pc = 0x23552cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x235530: 0x4600005
    ctx->pc = 0x235530u;
    {
        const bool branch_taken_0x235530 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x235534u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x235530) {
            ctx->pc = 0x235548u;
            goto label_235548;
        }
    }
    ctx->pc = 0x235538u;
    // 0x235538: 0x44830800
    ctx->pc = 0x235538u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x23553c: 0x46800860
    ctx->pc = 0x23553cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x235540: 0x10000007
    ctx->pc = 0x235540u;
    {
        const bool branch_taken_0x235540 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x235544u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 2052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x235540) {
            ctx->pc = 0x235560u;
            goto label_235560;
        }
    }
    ctx->pc = 0x235548u;
label_235548:
    // 0x235548: 0x31842
    ctx->pc = 0x235548u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x23554c: 0x431025
    ctx->pc = 0x23554cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235550: 0x44820800
    ctx->pc = 0x235550u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x235554: 0x46800860
    ctx->pc = 0x235554u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x235558: 0x46010840
    ctx->pc = 0x235558u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x23555c: 0xc6c00804
    ctx->pc = 0x23555cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 2052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235560:
    // 0x235560: 0x46010001
    ctx->pc = 0x235560u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x235564: 0xe6c00804
    ctx->pc = 0x235564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 2052), bits); }
    // 0x235568: 0xc6c10800
    ctx->pc = 0x235568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23556c: 0x46010034
    ctx->pc = 0x23556cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235570: 0x0
    ctx->pc = 0x235570u;
    // NOP
label_235574:
    // 0x235574: 0x45030001
    ctx->pc = 0x235574u;
    {
        const bool branch_taken_0x235574 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x235574) {
            ctx->pc = 0x235578u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 2052), bits); }
            ctx->pc = 0x23557Cu;
            goto label_23557c;
        }
    }
    ctx->pc = 0x23557Cu;
label_23557c:
    // 0x23557c: 0x2c0202d
    ctx->pc = 0x23557cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235580: 0xc08d4bc
    ctx->pc = 0x235580u;
    SET_GPR_U32(ctx, 31, 0x235588u);
    ctx->pc = 0x235584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2352F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        power_bar_state_0x2352f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235588u; }
    }
    if (ctx->pc != 0x235588u) { return; }
    ctx->pc = 0x235588u;
    // 0x235588: 0x40902d
    ctx->pc = 0x235588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23558c: 0x16120008
    ctx->pc = 0x23558Cu;
    {
        const bool branch_taken_0x23558c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 18));
        ctx->pc = 0x235590u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x23558c) {
            ctx->pc = 0x2355B0u;
            goto label_2355b0;
        }
    }
    ctx->pc = 0x235594u;
    // 0x235594: 0x16420004
    ctx->pc = 0x235594u;
    {
        const bool branch_taken_0x235594 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x235598u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x235594) {
            ctx->pc = 0x2355A8u;
            goto label_2355a8;
        }
    }
    ctx->pc = 0x23559Cu;
    // 0x23559c: 0x8ec32adc
    ctx->pc = 0x23559cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 10972)));
    // 0x2355a0: 0x40802d
    ctx->pc = 0x2355a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2355a4: 0x243800b
    ctx->pc = 0x2355a4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 18));
label_2355a8:
    // 0x2355a8: 0x12120006
    ctx->pc = 0x2355A8u;
    {
        const bool branch_taken_0x2355a8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 18));
        ctx->pc = 0x2355ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2355a8) {
            ctx->pc = 0x2355C4u;
            goto label_2355c4;
        }
    }
    ctx->pc = 0x2355B0u;
label_2355b0:
    // 0x2355b0: 0x16420002
    ctx->pc = 0x2355B0u;
    {
        const bool branch_taken_0x2355b0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x2355B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2355b0) {
            ctx->pc = 0x2355BCu;
            goto label_2355bc;
        }
    }
    ctx->pc = 0x2355B8u;
    // 0x2355b8: 0x24020002
    ctx->pc = 0x2355b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2355bc:
    // 0x2355bc: 0xaec22adc
    ctx->pc = 0x2355bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 10972), GPR_U32(ctx, 2));
    // 0x2355c0: 0xaec02ae0
    ctx->pc = 0x2355c0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 10976), GPR_U32(ctx, 0));
label_2355c4:
    // 0x2355c4: 0x3c100033
    ctx->pc = 0x2355c4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
    // 0x2355c8: 0x2610cae8
    ctx->pc = 0x2355c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294953704));
    // 0x2355cc: 0x2411001c
    ctx->pc = 0x2355ccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 28));
    // 0x2355d0: 0x2b18818
    ctx->pc = 0x2355d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2355d4: 0x2111021
    ctx->pc = 0x2355d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2355d8: 0x8c440004
    ctx->pc = 0x2355d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2355dc: 0xc0b0ce8
    ctx->pc = 0x2355DCu;
    SET_GPR_U32(ctx, 31, 0x2355E4u);
    ctx->pc = 0x2355E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2355E4u; }
    }
    if (ctx->pc != 0x2355E4u) { return; }
    ctx->pc = 0x2355E4u;
    // 0x2355e4: 0x2301021
    ctx->pc = 0x2355e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2355e8: 0x8c440000
    ctx->pc = 0x2355e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2355ec: 0xc0b0ce8
    ctx->pc = 0x2355ECu;
    SET_GPR_U32(ctx, 31, 0x2355F4u);
    ctx->pc = 0x2355F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2355F4u; }
    }
    if (ctx->pc != 0x2355F4u) { return; }
    ctx->pc = 0x2355F4u;
    // 0x2355f4: 0x2118021
    ctx->pc = 0x2355f4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2355f8: 0x8e040008
    ctx->pc = 0x2355f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2355fc: 0xc0b0ce8
    ctx->pc = 0x2355FCu;
    SET_GPR_U32(ctx, 31, 0x235604u);
    ctx->pc = 0x235600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235604u; }
    }
    if (ctx->pc != 0x235604u) { return; }
    ctx->pc = 0x235604u;
    // 0x235604: 0x8ec32adc
    ctx->pc = 0x235604u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 10972)));
    // 0x235608: 0x24020001
    ctx->pc = 0x235608u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23560c: 0x50620061
    ctx->pc = 0x23560Cu;
    {
        const bool branch_taken_0x23560c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23560c) {
            ctx->pc = 0x235610u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 10976)));
            ctx->pc = 0x235794u;
            goto label_235794;
        }
    }
    ctx->pc = 0x235614u;
    // 0x235614: 0x10600005
    ctx->pc = 0x235614u;
    {
        const bool branch_taken_0x235614 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x235618u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x235614) {
            ctx->pc = 0x23562Cu;
            goto label_23562c;
        }
    }
    ctx->pc = 0x23561Cu;
    // 0x23561c: 0x10620077
    ctx->pc = 0x23561Cu;
    {
        const bool branch_taken_0x23561c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x235620u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23561c) {
            ctx->pc = 0x2357FCu;
            goto label_2357fc;
        }
    }
    ctx->pc = 0x235624u;
    // 0x235624: 0x100000a2
    ctx->pc = 0x235624u;
    {
        const bool branch_taken_0x235624 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x235628u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 10976)));
        if (branch_taken_0x235624) {
            ctx->pc = 0x2358B0u;
            goto label_2358b0;
        }
    }
    ctx->pc = 0x23562Cu;
label_23562c:
    // 0x23562c: 0xb82d
    ctx->pc = 0x23562cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235630: 0xc7a00000
    ctx->pc = 0x235630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235634: 0x3c0142fe
    ctx->pc = 0x235634u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17150 << 16));
    // 0x235638: 0x44810800
    ctx->pc = 0x235638u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23563c: 0x46010002
    ctx->pc = 0x23563cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x235640: 0x3c014300
    ctx->pc = 0x235640u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17152 << 16));
    // 0x235644: 0x44810800
    ctx->pc = 0x235644u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x235648: 0x46010000
    ctx->pc = 0x235648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23564c: 0x46000064
    ctx->pc = 0x23564cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x235650: 0x44030800
    ctx->pc = 0x235650u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x235654: 0x24020001
    ctx->pc = 0x235654u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x235658: 0x12420010
    ctx->pc = 0x235658u;
    {
        const bool branch_taken_0x235658 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x23565Cu;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x235658) {
            ctx->pc = 0x23569Cu;
            goto label_23569c;
        }
    }
    ctx->pc = 0x235660u;
    // 0x235660: 0x2a420002
    ctx->pc = 0x235660u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 2));
    // 0x235664: 0x10400005
    ctx->pc = 0x235664u;
    {
        const bool branch_taken_0x235664 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x235668u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
        if (branch_taken_0x235664) {
            ctx->pc = 0x23567Cu;
            goto label_23567c;
        }
    }
    ctx->pc = 0x23566Cu;
    // 0x23566c: 0x12400007
    ctx->pc = 0x23566Cu;
    {
        const bool branch_taken_0x23566c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x235670u;
        SET_GPR_U32(ctx, 19, ((uint32_t)51 << 16));
        if (branch_taken_0x23566c) {
            ctx->pc = 0x23568Cu;
            goto label_23568c;
        }
    }
    ctx->pc = 0x235674u;
    // 0x235674: 0x10000014
    ctx->pc = 0x235674u;
    {
        const bool branch_taken_0x235674 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x235678u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294953704));
        if (branch_taken_0x235674) {
            ctx->pc = 0x2356C8u;
            goto label_2356c8;
        }
    }
    ctx->pc = 0x23567Cu;
label_23567c:
    // 0x23567c: 0x10400011
    ctx->pc = 0x23567Cu;
    {
        const bool branch_taken_0x23567c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x235680u;
        SET_GPR_U32(ctx, 19, ((uint32_t)51 << 16));
        if (branch_taken_0x23567c) {
            ctx->pc = 0x2356C4u;
            goto label_2356c4;
        }
    }
    ctx->pc = 0x235684u;
    // 0x235684: 0x1000000b
    ctx->pc = 0x235684u;
    {
        const bool branch_taken_0x235684 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x235688u;
        SET_GPR_U32(ctx, 23, AND32(GPR_U32(ctx, 3), 255));
        if (branch_taken_0x235684) {
            ctx->pc = 0x2356B4u;
            goto label_2356b4;
        }
    }
    ctx->pc = 0x23568Cu;
label_23568c:
    // 0x23568c: 0x307700ff
    ctx->pc = 0x23568cu;
    SET_GPR_U32(ctx, 23, AND32(GPR_U32(ctx, 3), 255));
    // 0x235690: 0x17ba00
    ctx->pc = 0x235690u;
    SET_GPR_U32(ctx, 23, SLL32(GPR_U32(ctx, 23), 8));
    // 0x235694: 0x1000000a
    ctx->pc = 0x235694u;
    {
        const bool branch_taken_0x235694 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x235698u;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x235694) {
            ctx->pc = 0x2356C0u;
            goto label_2356c0;
        }
    }
    ctx->pc = 0x23569Cu;
label_23569c:
    // 0x23569c: 0x307700ff
    ctx->pc = 0x23569cu;
    SET_GPR_U32(ctx, 23, AND32(GPR_U32(ctx, 3), 255));
    // 0x2356a0: 0x17bc00
    ctx->pc = 0x2356a0u;
    SET_GPR_U32(ctx, 23, SLL32(GPR_U32(ctx, 23), 16));
    // 0x2356a4: 0x306200ff
    ctx->pc = 0x2356a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
    // 0x2356a8: 0x21200
    ctx->pc = 0x2356a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x2356ac: 0x10000004
    ctx->pc = 0x2356ACu;
    {
        const bool branch_taken_0x2356ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2356B0u;
        SET_GPR_U32(ctx, 23, OR32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        if (branch_taken_0x2356ac) {
            ctx->pc = 0x2356C0u;
            goto label_2356c0;
        }
    }
    ctx->pc = 0x2356B4u;
label_2356b4:
    // 0x2356b4: 0x17bc00
    ctx->pc = 0x2356b4u;
    SET_GPR_U32(ctx, 23, SLL32(GPR_U32(ctx, 23), 16));
    // 0x2356b8: 0x3c1e00ff
    ctx->pc = 0x2356b8u;
    SET_GPR_U32(ctx, 30, ((uint32_t)255 << 16));
    // 0x2356bc: 0x37deff00
    ctx->pc = 0x2356bcu;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 65280));
label_2356c0:
    // 0x2356c0: 0x3c130033
    ctx->pc = 0x2356c0u;
    SET_GPR_U32(ctx, 19, ((uint32_t)51 << 16));
label_2356c4:
    // 0x2356c4: 0x2673cae8
    ctx->pc = 0x2356c4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294953704));
label_2356c8:
    // 0x2356c8: 0x2412001c
    ctx->pc = 0x2356c8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 28));
    // 0x2356cc: 0x2b29018
    ctx->pc = 0x2356ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2356d0: 0x253a021
    ctx->pc = 0x2356d0u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2356d4: 0x8e820000
    ctx->pc = 0x2356d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2356d8: 0xc0b3da0
    ctx->pc = 0x2356D8u;
    SET_GPR_U32(ctx, 31, 0x2356E0u);
    ctx->pc = 0x2356DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x2CF680u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRomTexPtr_0x2cf680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2356E0u; }
    }
    if (ctx->pc != 0x2356E0u) { return; }
    ctx->pc = 0x2356E0u;
    // 0x2356e0: 0x94440016
    ctx->pc = 0x2356e0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x2356e4: 0x44840000
    ctx->pc = 0x2356e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x2356e8: 0x46800020
    ctx->pc = 0x2356e8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2356ec: 0xc7a10000
    ctx->pc = 0x2356ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2356f0: 0x46010002
    ctx->pc = 0x2356f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2356f4: 0x46000064
    ctx->pc = 0x2356f4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2356f8: 0x44100800
    ctx->pc = 0x2356f8u;
    SET_GPR_U32(ctx, 16, *(uint32_t*)&ctx->f[1]);
    // 0x2356fc: 0x108043
    ctx->pc = 0x2356fcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x235700: 0x24030001
    ctx->pc = 0x235700u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x235704: 0x10102a
    ctx->pc = 0x235704u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
    // 0x235708: 0x62800a
    ctx->pc = 0x235708u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x23570c: 0x15a9c0
    ctx->pc = 0x23570cu;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 21), 7));
    // 0x235710: 0x3c110032
    ctx->pc = 0x235710u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x235714: 0x26311338
    ctx->pc = 0x235714u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4920));
    // 0x235718: 0x8e250008
    ctx->pc = 0x235718u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23571c: 0x2a52821
    ctx->pc = 0x23571cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x235720: 0x42042
    ctx->pc = 0x235720u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 1));
    // 0x235724: 0xa42821
    ctx->pc = 0x235724u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x235728: 0x8e840000
    ctx->pc = 0x235728u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23572c: 0xb02823
    ctx->pc = 0x23572cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x235730: 0xc62c0010
    ctx->pc = 0x235730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x235734: 0x46806320
    ctx->pc = 0x235734u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x235738: 0xc0b0df2
    ctx->pc = 0x235738u;
    SET_GPR_U32(ctx, 31, 0x235740u);
    ctx->pc = 0x23573Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235740u; }
    }
    if (ctx->pc != 0x235740u) { return; }
    ctx->pc = 0x235740u;
    // 0x235740: 0x8e840000
    ctx->pc = 0x235740u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x235744: 0x102840
    ctx->pc = 0x235744u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 16), 1));
    // 0x235748: 0xc0b0cf6
    ctx->pc = 0x235748u;
    SET_GPR_U32(ctx, 31, 0x235750u);
    ctx->pc = 0x23574Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235750u; }
    }
    if (ctx->pc != 0x235750u) { return; }
    ctx->pc = 0x235750u;
    // 0x235750: 0x26730004
    ctx->pc = 0x235750u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
    // 0x235754: 0x2539021
    ctx->pc = 0x235754u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x235758: 0x8e25001c
    ctx->pc = 0x235758u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x23575c: 0x8e440000
    ctx->pc = 0x23575cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x235760: 0x2a52821
    ctx->pc = 0x235760u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x235764: 0xc62c0024
    ctx->pc = 0x235764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x235768: 0x46806320
    ctx->pc = 0x235768u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x23576c: 0xc0b0df2
    ctx->pc = 0x23576Cu;
    SET_GPR_U32(ctx, 31, 0x235774u);
    ctx->pc = 0x235770u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235774u; }
    }
    if (ctx->pc != 0x235774u) { return; }
    ctx->pc = 0x235774u;
    // 0x235774: 0x8e840000
    ctx->pc = 0x235774u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x235778: 0xc0b0f40
    ctx->pc = 0x235778u;
    SET_GPR_U32(ctx, 31, 0x235780u);
    ctx->pc = 0x23577Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetColor_0x2c3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235780u; }
    }
    if (ctx->pc != 0x235780u) { return; }
    ctx->pc = 0x235780u;
    // 0x235780: 0x8e440000
    ctx->pc = 0x235780u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x235784: 0xc0b0f40
    ctx->pc = 0x235784u;
    SET_GPR_U32(ctx, 31, 0x23578Cu);
    ctx->pc = 0x235788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetColor_0x2c3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23578Cu; }
    }
    if (ctx->pc != 0x23578Cu) { return; }
    ctx->pc = 0x23578Cu;
    // 0x23578c: 0x10000047
    ctx->pc = 0x23578Cu;
    {
        const bool branch_taken_0x23578c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x235790u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23578c) {
            ctx->pc = 0x2358ACu;
            goto label_2358ac;
        }
    }
    ctx->pc = 0x235794u;
label_235794:
    // 0x235794: 0x29883
    ctx->pc = 0x235794u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 2));
    // 0x235798: 0x2662fffb
    ctx->pc = 0x235798u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294967291));
    // 0x23579c: 0x2c420005
    ctx->pc = 0x23579cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 5));
    // 0x2357a0: 0x10400002
    ctx->pc = 0x2357A0u;
    {
        const bool branch_taken_0x2357a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2357A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x2357a0) {
            ctx->pc = 0x2357ACu;
            goto label_2357ac;
        }
    }
    ctx->pc = 0x2357A8u;
    // 0x2357a8: 0x539823
    ctx->pc = 0x2357a8u;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2357ac:
    // 0x2357ac: 0x2a620005
    ctx->pc = 0x2357acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 5));
    // 0x2357b0: 0x10400010
    ctx->pc = 0x2357B0u;
    {
        const bool branch_taken_0x2357b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2357B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x2357b0) {
            ctx->pc = 0x2357F4u;
            goto label_2357f4;
        }
    }
    ctx->pc = 0x2357B8u;
    // 0x2357b8: 0x2442cae8
    ctx->pc = 0x2357b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953704));
    // 0x2357bc: 0x2410001c
    ctx->pc = 0x2357bcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 28));
    // 0x2357c0: 0x2b08018
    ctx->pc = 0x2357c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2357c4: 0x24420018
    ctx->pc = 0x2357c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 24));
    // 0x2357c8: 0x2028021
    ctx->pc = 0x2357c8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2357cc: 0x8e040000
    ctx->pc = 0x2357ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2357d0: 0xc0b0ce8
    ctx->pc = 0x2357D0u;
    SET_GPR_U32(ctx, 31, 0x2357D8u);
    ctx->pc = 0x2357D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2357D8u; }
    }
    if (ctx->pc != 0x2357D8u) { return; }
    ctx->pc = 0x2357D8u;
    // 0x2357d8: 0x3c020032
    ctx->pc = 0x2357d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2357dc: 0x8e040000
    ctx->pc = 0x2357dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2357e0: 0x8c4513b0
    ctx->pc = 0x2357e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 5040)));
    // 0x2357e4: 0xc0b0ed6
    ctx->pc = 0x2357E4u;
    SET_GPR_U32(ctx, 31, 0x2357ECu);
    ctx->pc = 0x2357E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2357ECu; }
    }
    if (ctx->pc != 0x2357ECu) { return; }
    ctx->pc = 0x2357ECu;
    // 0x2357ec: 0x1000002f
    ctx->pc = 0x2357ECu;
    {
        const bool branch_taken_0x2357ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2357F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2357ec) {
            ctx->pc = 0x2358ACu;
            goto label_2358ac;
        }
    }
    ctx->pc = 0x2357F4u;
label_2357f4:
    // 0x2357f4: 0x1000002c
    ctx->pc = 0x2357F4u;
    {
        const bool branch_taken_0x2357f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2357F8u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 10972), GPR_U32(ctx, 0));
        if (branch_taken_0x2357f4) {
            ctx->pc = 0x2358A8u;
            goto label_2358a8;
        }
    }
    ctx->pc = 0x2357FCu;
label_2357fc:
    // 0x2357fc: 0x8ec32ae0
    ctx->pc = 0x2357fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 10976)));
    // 0x235800: 0x31a40
    ctx->pc = 0x235800u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 9));
    // 0x235804: 0x24020078
    ctx->pc = 0x235804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 120));
    // 0x235808: 0x62001a
    ctx->pc = 0x235808u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x23580c: 0x1812
    ctx->pc = 0x23580cu;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x235810: 0x50400001
    ctx->pc = 0x235810u;
    {
        const bool branch_taken_0x235810 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x235810) {
            ctx->pc = 0x235814u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x235818u;
            goto label_235818;
        }
    }
    ctx->pc = 0x235818u;
label_235818:
    // 0x235818: 0x60882d
    ctx->pc = 0x235818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23581c: 0x2622ff00
    ctx->pc = 0x23581cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967040));
    // 0x235820: 0x2c420100
    ctx->pc = 0x235820u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 256));
    // 0x235824: 0x10400002
    ctx->pc = 0x235824u;
    {
        const bool branch_taken_0x235824 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x235828u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 511));
        if (branch_taken_0x235824) {
            ctx->pc = 0x235830u;
            goto label_235830;
        }
    }
    ctx->pc = 0x23582Cu;
    // 0x23582c: 0x518823
    ctx->pc = 0x23582cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_235830:
    // 0x235830: 0x2a220100
    ctx->pc = 0x235830u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 256));
    // 0x235834: 0x1040000f
    ctx->pc = 0x235834u;
    {
        const bool branch_taken_0x235834 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x235838u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x235834) {
            ctx->pc = 0x235874u;
            goto label_235874;
        }
    }
    ctx->pc = 0x23583Cu;
    // 0x23583c: 0x2442cae8
    ctx->pc = 0x23583cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953704));
    // 0x235840: 0x2410001c
    ctx->pc = 0x235840u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 28));
    // 0x235844: 0x2b08018
    ctx->pc = 0x235844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x235848: 0x2442000c
    ctx->pc = 0x235848u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
    // 0x23584c: 0x2028021
    ctx->pc = 0x23584cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x235850: 0x8e040000
    ctx->pc = 0x235850u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x235854: 0xc0b0ce8
    ctx->pc = 0x235854u;
    SET_GPR_U32(ctx, 31, 0x23585Cu);
    ctx->pc = 0x235858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23585Cu; }
    }
    if (ctx->pc != 0x23585Cu) { return; }
    ctx->pc = 0x23585Cu;
    // 0x23585c: 0x240500ff
    ctx->pc = 0x23585cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x235860: 0x8e040000
    ctx->pc = 0x235860u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x235864: 0xc0b0f52
    ctx->pc = 0x235864u;
    SET_GPR_U32(ctx, 31, 0x23586Cu);
    ctx->pc = 0x235868u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23586Cu; }
    }
    if (ctx->pc != 0x23586Cu) { return; }
    ctx->pc = 0x23586Cu;
    // 0x23586c: 0x10000003
    ctx->pc = 0x23586Cu;
    {
        const bool branch_taken_0x23586c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x235870u;
        SET_GPR_U32(ctx, 17, ((uint32_t)51 << 16));
        if (branch_taken_0x23586c) {
            ctx->pc = 0x23587Cu;
            goto label_23587c;
        }
    }
    ctx->pc = 0x235874u;
label_235874:
    // 0x235874: 0xaec02ae0
    ctx->pc = 0x235874u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 10976), GPR_U32(ctx, 0));
    // 0x235878: 0x3c110033
    ctx->pc = 0x235878u;
    SET_GPR_U32(ctx, 17, ((uint32_t)51 << 16));
label_23587c:
    // 0x23587c: 0x2631cae8
    ctx->pc = 0x23587cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294953704));
    // 0x235880: 0x2410001c
    ctx->pc = 0x235880u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 28));
    // 0x235884: 0x2b08018
    ctx->pc = 0x235884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x235888: 0x2111021
    ctx->pc = 0x235888u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x23588c: 0x8c440000
    ctx->pc = 0x23588cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235890: 0xc0b0f40
    ctx->pc = 0x235890u;
    SET_GPR_U32(ctx, 31, 0x235898u);
    ctx->pc = 0x235894u;
    SET_GPR_U32(ctx, 5, ((uint32_t)255 << 16));
    ctx->pc = 0x2C3D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetColor_0x2c3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235898u; }
    }
    if (ctx->pc != 0x235898u) { return; }
    ctx->pc = 0x235898u;
    // 0x235898: 0x2308821
    ctx->pc = 0x235898u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x23589c: 0x8e240004
    ctx->pc = 0x23589cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2358a0: 0xc0b0f40
    ctx->pc = 0x2358A0u;
    SET_GPR_U32(ctx, 31, 0x2358A8u);
    ctx->pc = 0x2358A4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)255 << 16));
    ctx->pc = 0x2C3D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetColor_0x2c3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2358A8u; }
    }
    if (ctx->pc != 0x2358A8u) { return; }
    ctx->pc = 0x2358A8u;
label_2358a8:
    // 0x2358a8: 0x3c020031
    ctx->pc = 0x2358a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2358ac:
    // 0x2358ac: 0x8ec32ae0
    ctx->pc = 0x2358acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 10976)));
label_2358b0:
    // 0x2358b0: 0x8c42ffbc
    ctx->pc = 0x2358b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x2358b4: 0x621821
    ctx->pc = 0x2358b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2358b8: 0xaec32ae0
    ctx->pc = 0x2358b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 10976), GPR_U32(ctx, 3));
    // 0x2358bc: 0xdfbf00a0
    ctx->pc = 0x2358bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2358c0: 0xdfbe0090
    ctx->pc = 0x2358c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2358c4: 0xdfb70080
    ctx->pc = 0x2358c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2358c8: 0xdfb60070
    ctx->pc = 0x2358c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2358cc: 0xdfb50060
    ctx->pc = 0x2358ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2358d0: 0xdfb40050
    ctx->pc = 0x2358d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2358d4: 0xdfb30040
    ctx->pc = 0x2358d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2358d8: 0xdfb20030
    ctx->pc = 0x2358d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2358dc: 0xdfb10020
    ctx->pc = 0x2358dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2358e0: 0xdfb00010
    ctx->pc = 0x2358e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2358e4: 0x3e00008
    ctx->pc = 0x2358E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2358E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x235468u: goto label_235468;
            case 0x2354B8u: goto label_2354b8;
            case 0x2354ECu: goto label_2354ec;
            case 0x23550Cu: goto label_23550c;
            case 0x235524u: goto label_235524;
            case 0x235548u: goto label_235548;
            case 0x235560u: goto label_235560;
            case 0x235574u: goto label_235574;
            case 0x23557Cu: goto label_23557c;
            case 0x2355A8u: goto label_2355a8;
            case 0x2355B0u: goto label_2355b0;
            case 0x2355BCu: goto label_2355bc;
            case 0x2355C4u: goto label_2355c4;
            case 0x23562Cu: goto label_23562c;
            case 0x23567Cu: goto label_23567c;
            case 0x23568Cu: goto label_23568c;
            case 0x23569Cu: goto label_23569c;
            case 0x2356B4u: goto label_2356b4;
            case 0x2356C0u: goto label_2356c0;
            case 0x2356C4u: goto label_2356c4;
            case 0x2356C8u: goto label_2356c8;
            case 0x235794u: goto label_235794;
            case 0x2357ACu: goto label_2357ac;
            case 0x2357F4u: goto label_2357f4;
            case 0x2357FCu: goto label_2357fc;
            case 0x235818u: goto label_235818;
            case 0x235830u: goto label_235830;
            case 0x235874u: goto label_235874;
            case 0x23587Cu: goto label_23587c;
            case 0x2358A8u: goto label_2358a8;
            case 0x2358ACu: goto label_2358ac;
            case 0x2358B0u: goto label_2358b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2358ECu;
}
