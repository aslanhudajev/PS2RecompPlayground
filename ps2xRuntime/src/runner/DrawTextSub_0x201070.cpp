#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DrawTextSub
// Address: 0x201070 - 0x201298
void DrawTextSub_0x201070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201070u;

    // 0x201070: 0x27bdff60
    ctx->pc = 0x201070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x201074: 0xffbf0070
    ctx->pc = 0x201074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x201078: 0xffb60060
    ctx->pc = 0x201078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x20107c: 0xffb50050
    ctx->pc = 0x20107cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x201080: 0xffb40040
    ctx->pc = 0x201080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x201084: 0xffb30030
    ctx->pc = 0x201084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x201088: 0xffb20020
    ctx->pc = 0x201088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20108c: 0xffb10010
    ctx->pc = 0x20108cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x201090: 0xffb00000
    ctx->pc = 0x201090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201094: 0xe7b60090
    ctx->pc = 0x201094u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x201098: 0xe7b50088
    ctx->pc = 0x201098u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x20109c: 0xe7b40080
    ctx->pc = 0x20109cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2010a0: 0x80a82d
    ctx->pc = 0x2010a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2010a4: 0xa0802d
    ctx->pc = 0x2010a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2010a8: 0xc0882d
    ctx->pc = 0x2010a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2010ac: 0xe0b02d
    ctx->pc = 0x2010acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2010b0: 0x46006586
    ctx->pc = 0x2010b0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2010b4: 0x46006d46
    ctx->pc = 0x2010b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2010b8: 0x100a02d
    ctx->pc = 0x2010b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2010bc: 0x982d
    ctx->pc = 0x2010bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2010c0: 0x1a00000b
    ctx->pc = 0x2010C0u;
    {
        const bool branch_taken_0x2010c0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2010C4u;
        SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 17), 255));
        if (branch_taken_0x2010c0) {
            ctx->pc = 0x2010F0u;
            goto label_2010f0;
        }
    }
    ctx->pc = 0x2010C8u;
    // 0x2010c8: 0x32021000
    ctx->pc = 0x2010c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 4096));
    // 0x2010cc: 0x10400008
    ctx->pc = 0x2010CCu;
    {
        const bool branch_taken_0x2010cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2010D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294963199));
        if (branch_taken_0x2010cc) {
            ctx->pc = 0x2010F0u;
            goto label_2010f0;
        }
    }
    ctx->pc = 0x2010D4u;
    // 0x2010d4: 0x2028024
    ctx->pc = 0x2010d4u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2010d8: 0xc080570
    ctx->pc = 0x2010D8u;
    SET_GPR_U32(ctx, 31, 0x2010E0u);
    ctx->pc = 0x2010DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2015C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontHeight_0x2015c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2010E0u; }
    }
    if (ctx->pc != 0x2010E0u) { return; }
    ctx->pc = 0x2010E0u;
    // 0x2010e0: 0x21fc2
    ctx->pc = 0x2010e0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x2010e4: 0x621821
    ctx->pc = 0x2010e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2010e8: 0x31843
    ctx->pc = 0x2010e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2010ec: 0x2038023
    ctx->pc = 0x2010ecu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2010f0:
    // 0x2010f0: 0xc0be862
    ctx->pc = 0x2010F0u;
    SET_GPR_U32(ctx, 31, 0x2010F8u);
    ctx->pc = 0x2010F4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2010F8u; }
    }
    if (ctx->pc != 0x2010F8u) { return; }
    ctx->pc = 0x2010F8u;
    // 0x2010f8: 0x40202d
    ctx->pc = 0x2010f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2010fc: 0xc0be4ba
    ctx->pc = 0x2010FCu;
    SET_GPR_U32(ctx, 31, 0x201104u);
    ctx->pc = 0x201100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201104u; }
    }
    if (ctx->pc != 0x201104u) { return; }
    ctx->pc = 0x201104u;
    // 0x201104: 0x18400003
    ctx->pc = 0x201104u;
    {
        const bool branch_taken_0x201104 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x201104) {
            ctx->pc = 0x201114u;
            goto label_201114;
        }
    }
    ctx->pc = 0x20110Cu;
    // 0x20110c: 0x1000000c
    ctx->pc = 0x20110Cu;
    {
        const bool branch_taken_0x20110c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x201110u;
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
        if (branch_taken_0x20110c) {
            ctx->pc = 0x201140u;
            goto label_201140;
        }
    }
    ctx->pc = 0x201114u;
label_201114:
    // 0x201114: 0xc0be862
    ctx->pc = 0x201114u;
    SET_GPR_U32(ctx, 31, 0x20111Cu);
    ctx->pc = 0x201118u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20111Cu; }
    }
    if (ctx->pc != 0x20111Cu) { return; }
    ctx->pc = 0x20111Cu;
    // 0x20111c: 0x40202d
    ctx->pc = 0x20111cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201120: 0xc0be4ba
    ctx->pc = 0x201120u;
    SET_GPR_U32(ctx, 31, 0x201128u);
    ctx->pc = 0x201124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201128u; }
    }
    if (ctx->pc != 0x201128u) { return; }
    ctx->pc = 0x201128u;
    // 0x201128: 0x4410003
    ctx->pc = 0x201128u;
    {
        const bool branch_taken_0x201128 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x201128) {
            ctx->pc = 0x201138u;
            goto label_201138;
        }
    }
    ctx->pc = 0x201130u;
    // 0x201130: 0x10000003
    ctx->pc = 0x201130u;
    {
        const bool branch_taken_0x201130 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x201134u;
        ctx->f[21] = FPU_NEG_S(ctx->f[21]);
        if (branch_taken_0x201130) {
            ctx->pc = 0x201140u;
            goto label_201140;
        }
    }
    ctx->pc = 0x201138u;
label_201138:
    // 0x201138: 0x3c013f80
    ctx->pc = 0x201138u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x20113c: 0x4481a800
    ctx->pc = 0x20113cu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
label_201140:
    // 0x201140: 0xc0b145e
    ctx->pc = 0x201140u;
    SET_GPR_U32(ctx, 31, 0x201148u);
    ctx->pc = 0x201144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5178u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFont_0x2c5178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201148u; }
    }
    if (ctx->pc != 0x201148u) { return; }
    ctx->pc = 0x201148u;
    // 0x201148: 0x32220200
    ctx->pc = 0x201148u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 512));
    // 0x20114c: 0x10400007
    ctx->pc = 0x20114Cu;
    {
        const bool branch_taken_0x20114c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x201150u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 256));
        if (branch_taken_0x20114c) {
            ctx->pc = 0x20116Cu;
            goto label_20116c;
        }
    }
    ctx->pc = 0x201154u;
    // 0x201154: 0xc0b1444
    ctx->pc = 0x201154u;
    SET_GPR_U32(ctx, 31, 0x20115Cu);
    ctx->pc = 0x201158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5110u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontFlags_0x2c5110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20115Cu; }
    }
    if (ctx->pc != 0x20115Cu) { return; }
    ctx->pc = 0x20115Cu;
    // 0x20115c: 0x40982d
    ctx->pc = 0x20115cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201160: 0xc0b1444
    ctx->pc = 0x201160u;
    SET_GPR_U32(ctx, 31, 0x201168u);
    ctx->pc = 0x201164u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 19), 256));
    ctx->pc = 0x2C5110u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontFlags_0x2c5110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201168u; }
    }
    if (ctx->pc != 0x201168u) { return; }
    ctx->pc = 0x201168u;
    // 0x201168: 0x32220100
    ctx->pc = 0x201168u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 256));
label_20116c:
    // 0x20116c: 0x1040001e
    ctx->pc = 0x20116Cu;
    {
        const bool branch_taken_0x20116c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x201170u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x20116c) {
            ctx->pc = 0x2011E8u;
            goto label_2011e8;
        }
    }
    ctx->pc = 0x201174u;
    // 0x201174: 0xc0b144c
    ctx->pc = 0x201174u;
    SET_GPR_U32(ctx, 31, 0x20117Cu);
    ctx->pc = 0x201178u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947384)));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20117Cu; }
    }
    if (ctx->pc != 0x20117Cu) { return; }
    ctx->pc = 0x20117Cu;
    // 0x20117c: 0xc0be862
    ctx->pc = 0x20117Cu;
    SET_GPR_U32(ctx, 31, 0x201184u);
    ctx->pc = 0x201180u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201184u; }
    }
    if (ctx->pc != 0x201184u) { return; }
    ctx->pc = 0x201184u;
    // 0x201184: 0x3c01003a
    ctx->pc = 0x201184u;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
    // 0x201188: 0xdc254768
    ctx->pc = 0x201188u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 18280)));
    // 0x20118c: 0xc0be370
    ctx->pc = 0x20118Cu;
    SET_GPR_U32(ctx, 31, 0x201194u);
    ctx->pc = 0x201190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201194u; }
    }
    if (ctx->pc != 0x201194u) { return; }
    ctx->pc = 0x201194u;
    // 0x201194: 0xc0be564
    ctx->pc = 0x201194u;
    SET_GPR_U32(ctx, 31, 0x20119Cu);
    ctx->pc = 0x201198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20119Cu; }
    }
    if (ctx->pc != 0x20119Cu) { return; }
    ctx->pc = 0x20119Cu;
    // 0x20119c: 0x46000506
    ctx->pc = 0x20119cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2011a0: 0xc0be862
    ctx->pc = 0x2011A0u;
    SET_GPR_U32(ctx, 31, 0x2011A8u);
    ctx->pc = 0x2011A4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2011A8u; }
    }
    if (ctx->pc != 0x2011A8u) { return; }
    ctx->pc = 0x2011A8u;
    // 0x2011a8: 0x3c01003a
    ctx->pc = 0x2011a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
    // 0x2011ac: 0xdc254770
    ctx->pc = 0x2011acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 18288)));
    // 0x2011b0: 0xc0be370
    ctx->pc = 0x2011B0u;
    SET_GPR_U32(ctx, 31, 0x2011B8u);
    ctx->pc = 0x2011B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2011B8u; }
    }
    if (ctx->pc != 0x2011B8u) { return; }
    ctx->pc = 0x2011B8u;
    // 0x2011b8: 0xc0be564
    ctx->pc = 0x2011B8u;
    SET_GPR_U32(ctx, 31, 0x2011C0u);
    ctx->pc = 0x2011BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2011C0u; }
    }
    if (ctx->pc != 0x2011C0u) { return; }
    ctx->pc = 0x2011C0u;
    // 0x2011c0: 0x4600a306
    ctx->pc = 0x2011c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2011c4: 0xc0b1414
    ctx->pc = 0x2011C4u;
    SET_GPR_U32(ctx, 31, 0x2011CCu);
    ctx->pc = 0x2011C8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2C5050u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontScale_0x2c5050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2011CCu; }
    }
    if (ctx->pc != 0x2011CCu) { return; }
    ctx->pc = 0x2011CCu;
    // 0x2011cc: 0x4600ab06
    ctx->pc = 0x2011ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2011d0: 0xc0b1426
    ctx->pc = 0x2011D0u;
    SET_GPR_U32(ctx, 31, 0x2011D8u);
    ctx->pc = 0x2011D4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2C5098u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontScaleSpace_0x2c5098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2011D8u; }
    }
    if (ctx->pc != 0x2011D8u) { return; }
    ctx->pc = 0x2011D8u;
    // 0x2011d8: 0x26a4fffe
    ctx->pc = 0x2011d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294967294));
    // 0x2011dc: 0x2605fffe
    ctx->pc = 0x2011dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x2011e0: 0xc0b135a
    ctx->pc = 0x2011E0u;
    SET_GPR_U32(ctx, 31, 0x2011E8u);
    ctx->pc = 0x2011E4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C4D68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawText_0x2c4d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2011E8u; }
    }
    if (ctx->pc != 0x2011E8u) { return; }
    ctx->pc = 0x2011E8u;
label_2011e8:
    // 0x2011e8: 0xc0b144c
    ctx->pc = 0x2011E8u;
    SET_GPR_U32(ctx, 31, 0x2011F0u);
    ctx->pc = 0x2011ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2011F0u; }
    }
    if (ctx->pc != 0x2011F0u) { return; }
    ctx->pc = 0x2011F0u;
    // 0x2011f0: 0x4600b306
    ctx->pc = 0x2011f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2011f4: 0xc0b1414
    ctx->pc = 0x2011F4u;
    SET_GPR_U32(ctx, 31, 0x2011FCu);
    ctx->pc = 0x2011F8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2C5050u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontScale_0x2c5050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2011FCu; }
    }
    if (ctx->pc != 0x2011FCu) { return; }
    ctx->pc = 0x2011FCu;
    // 0x2011fc: 0x4600ab06
    ctx->pc = 0x2011fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x201200: 0xc0b1426
    ctx->pc = 0x201200u;
    SET_GPR_U32(ctx, 31, 0x201208u);
    ctx->pc = 0x201204u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2C5098u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontScaleSpace_0x2c5098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201208u; }
    }
    if (ctx->pc != 0x201208u) { return; }
    ctx->pc = 0x201208u;
    // 0x201208: 0x2a0202d
    ctx->pc = 0x201208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20120c: 0x200282d
    ctx->pc = 0x20120cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201210: 0xc0b135a
    ctx->pc = 0x201210u;
    SET_GPR_U32(ctx, 31, 0x201218u);
    ctx->pc = 0x201214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C4D68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawText_0x2c4d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201218u; }
    }
    if (ctx->pc != 0x201218u) { return; }
    ctx->pc = 0x201218u;
    // 0x201218: 0x40802d
    ctx->pc = 0x201218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20121c: 0x32220200
    ctx->pc = 0x20121cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 512));
    // 0x201220: 0x10400003
    ctx->pc = 0x201220u;
    {
        const bool branch_taken_0x201220 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x201220) {
            ctx->pc = 0x201230u;
            goto label_201230;
        }
    }
    ctx->pc = 0x201228u;
    // 0x201228: 0xc0b1444
    ctx->pc = 0x201228u;
    SET_GPR_U32(ctx, 31, 0x201230u);
    ctx->pc = 0x20122Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5110u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontFlags_0x2c5110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201230u; }
    }
    if (ctx->pc != 0x201230u) { return; }
    ctx->pc = 0x201230u;
label_201230:
    // 0x201230: 0xc0be862
    ctx->pc = 0x201230u;
    SET_GPR_U32(ctx, 31, 0x201238u);
    ctx->pc = 0x201234u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201238u; }
    }
    if (ctx->pc != 0x201238u) { return; }
    ctx->pc = 0x201238u;
    // 0x201238: 0x3405ffc0
    ctx->pc = 0x201238u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
    // 0x20123c: 0x52bbc
    ctx->pc = 0x20123cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x201240: 0xc0be4ba
    ctx->pc = 0x201240u;
    SET_GPR_U32(ctx, 31, 0x201248u);
    ctx->pc = 0x201244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201248u; }
    }
    if (ctx->pc != 0x201248u) { return; }
    ctx->pc = 0x201248u;
    // 0x201248: 0x10400006
    ctx->pc = 0x201248u;
    {
        const bool branch_taken_0x201248 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20124Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x201248) {
            ctx->pc = 0x201264u;
            goto label_201264;
        }
    }
    ctx->pc = 0x201250u;
    // 0x201250: 0x3c013f80
    ctx->pc = 0x201250u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x201254: 0x44816000
    ctx->pc = 0x201254u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x201258: 0xc0b1426
    ctx->pc = 0x201258u;
    SET_GPR_U32(ctx, 31, 0x201260u);
    ctx->pc = 0x20125Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C5098u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontScaleSpace_0x2c5098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201260u; }
    }
    if (ctx->pc != 0x201260u) { return; }
    ctx->pc = 0x201260u;
    // 0x201260: 0x200102d
    ctx->pc = 0x201260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201264:
    // 0x201264: 0xdfbf0070
    ctx->pc = 0x201264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x201268: 0xdfb60060
    ctx->pc = 0x201268u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20126c: 0xdfb50050
    ctx->pc = 0x20126cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x201270: 0xdfb40040
    ctx->pc = 0x201270u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201274: 0xdfb30030
    ctx->pc = 0x201274u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201278: 0xdfb20020
    ctx->pc = 0x201278u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20127c: 0xdfb10010
    ctx->pc = 0x20127cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201280: 0xdfb00000
    ctx->pc = 0x201280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201284: 0xc7b60090
    ctx->pc = 0x201284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x201288: 0xc7b50088
    ctx->pc = 0x201288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20128c: 0xc7b40080
    ctx->pc = 0x20128cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x201290: 0x3e00008
    ctx->pc = 0x201290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201294u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2010F0u: goto label_2010f0;
            case 0x201114u: goto label_201114;
            case 0x201138u: goto label_201138;
            case 0x201140u: goto label_201140;
            case 0x20116Cu: goto label_20116c;
            case 0x2011E8u: goto label_2011e8;
            case 0x201230u: goto label_201230;
            case 0x201264u: goto label_201264;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201298u;
}
