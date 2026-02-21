#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic06
// Address: 0x241240 - 0x2415ec
void move_logic06_0x241240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x241240u;

    // 0x241240: 0x27bdff80
    ctx->pc = 0x241240u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x241244: 0xffbf0060
    ctx->pc = 0x241244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x241248: 0xffb10050
    ctx->pc = 0x241248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x24124c: 0xffb00040
    ctx->pc = 0x24124cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x241250: 0xe7b50078
    ctx->pc = 0x241250u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x241254: 0xe7b40070
    ctx->pc = 0x241254u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x241258: 0x80882d
    ctx->pc = 0x241258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24125c: 0x240303b0
    ctx->pc = 0x24125cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x241260: 0x2231818
    ctx->pc = 0x241260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x241264: 0x3c020033
    ctx->pc = 0x241264u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x241268: 0x2442dfd0
    ctx->pc = 0x241268u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x24126c: 0x628021
    ctx->pc = 0x24126cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241270: 0xc614024c
    ctx->pc = 0x241270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x241274: 0x3c03003c
    ctx->pc = 0x241274u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x241278: 0x24631bb8
    ctx->pc = 0x241278u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7096));
    // 0x24127c: 0x8e020000
    ctx->pc = 0x24127cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x241280: 0x21080
    ctx->pc = 0x241280u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x241284: 0x431021
    ctx->pc = 0x241284u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241288: 0xc08ed18
    ctx->pc = 0x241288u;
    SET_GPR_U32(ctx, 31, 0x241290u);
    ctx->pc = 0x24128Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->pc = 0x23B460u;
    {
        const uint32_t __entryPc = ctx->pc;
        FoundSuicideBomber_0x23b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241290u; }
    }
    if (ctx->pc != 0x241290u) { return; }
    ctx->pc = 0x241290u;
    // 0x241290: 0x10400006
    ctx->pc = 0x241290u;
    {
        const bool branch_taken_0x241290 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x241294u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x241290) {
            ctx->pc = 0x2412ACu;
            goto label_2412ac;
        }
    }
    ctx->pc = 0x241298u;
    // 0x241298: 0xa6020324
    ctx->pc = 0x241298u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x24129c: 0xc09095a
    ctx->pc = 0x24129Cu;
    SET_GPR_U32(ctx, 31, 0x2412A4u);
    ctx->pc = 0x2412A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x242568u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_ai_0x242568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2412A4u; }
    }
    if (ctx->pc != 0x2412A4u) { return; }
    ctx->pc = 0x2412A4u;
    // 0x2412a4: 0x100000cb
    ctx->pc = 0x2412A4u;
    {
        const bool branch_taken_0x2412a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2412A8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x2412a4) {
            ctx->pc = 0x2415D4u;
            goto label_2415d4;
        }
    }
    ctx->pc = 0x2412ACu;
label_2412ac:
    // 0x2412ac: 0x40034800
    ctx->pc = 0x2412acu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x2412b0: 0x3c02003a
    ctx->pc = 0x2412b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2412b4: 0x8c4221d0
    ctx->pc = 0x2412b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x2412b8: 0xac4301c8
    ctx->pc = 0x2412b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 456), GPR_U32(ctx, 3));
    // 0x2412bc: 0x86030324
    ctx->pc = 0x2412bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x2412c0: 0x86020328
    ctx->pc = 0x2412c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x2412c4: 0x50620004
    ctx->pc = 0x2412C4u;
    {
        const bool branch_taken_0x2412c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2412c4) {
            ctx->pc = 0x2412C8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->pc = 0x2412D8u;
            goto label_2412d8;
        }
    }
    ctx->pc = 0x2412CCu;
    // 0x2412cc: 0xc08e210
    ctx->pc = 0x2412CCu;
    SET_GPR_U32(ctx, 31, 0x2412D4u);
    ctx->pc = 0x2412D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2412D4u; }
    }
    if (ctx->pc != 0x2412D4u) { return; }
    ctx->pc = 0x2412D4u;
    // 0x2412d4: 0x8e03036c
    ctx->pc = 0x2412d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_2412d8:
    // 0x2412d8: 0x18600029
    ctx->pc = 0x2412D8u;
    {
        const bool branch_taken_0x2412d8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2412DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2412d8) {
            ctx->pc = 0x241380u;
            goto label_241380;
        }
    }
    ctx->pc = 0x2412E0u;
    // 0x2412e0: 0x8c42ffbc
    ctx->pc = 0x2412e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x2412e4: 0x621023
    ctx->pc = 0x2412e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2412e8: 0x1c400025
    ctx->pc = 0x2412E8u;
    {
        const bool branch_taken_0x2412e8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2412ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 2));
        if (branch_taken_0x2412e8) {
            ctx->pc = 0x241380u;
            goto label_241380;
        }
    }
    ctx->pc = 0x2412F0u;
    // 0x2412f0: 0xc6000260
    ctx->pc = 0x2412f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2412f4: 0x3c013fc9
    ctx->pc = 0x2412f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x2412f8: 0x34210fdb
    ctx->pc = 0x2412f8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2412fc: 0x44810800
    ctx->pc = 0x2412fcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x241300: 0x46010040
    ctx->pc = 0x241300u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x241304: 0x3c014049
    ctx->pc = 0x241304u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x241308: 0x34210fdb
    ctx->pc = 0x241308u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x24130c: 0x44810000
    ctx->pc = 0x24130cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241310: 0x46010034
    ctx->pc = 0x241310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241314: 0x0
    ctx->pc = 0x241314u;
    // NOP
    // 0x241318: 0x45000006
    ctx->pc = 0x241318u;
    {
        const bool branch_taken_0x241318 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24131Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x241318) {
            ctx->pc = 0x241334u;
            goto label_241334;
        }
    }
    ctx->pc = 0x241320u;
    // 0x241320: 0x3c0140c9
    ctx->pc = 0x241320u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x241324: 0x34210fdb
    ctx->pc = 0x241324u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241328: 0x44810000
    ctx->pc = 0x241328u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24132c: 0x1000000d
    ctx->pc = 0x24132Cu;
    {
        const bool branch_taken_0x24132c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x241330u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x24132c) {
            ctx->pc = 0x241364u;
            goto label_241364;
        }
    }
    ctx->pc = 0x241334u;
label_241334:
    // 0x241334: 0xc6010260
    ctx->pc = 0x241334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241338: 0x3c01c049
    ctx->pc = 0x241338u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x24133c: 0x34210fdb
    ctx->pc = 0x24133cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241340: 0x44810000
    ctx->pc = 0x241340u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241344: 0x46000836
    ctx->pc = 0x241344u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241348: 0x0
    ctx->pc = 0x241348u;
    // NOP
    // 0x24134c: 0x45020005
    ctx->pc = 0x24134Cu;
    {
        const bool branch_taken_0x24134c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24134c) {
            ctx->pc = 0x241350u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x241364u;
            goto label_241364;
        }
    }
    ctx->pc = 0x241354u;
    // 0x241354: 0x3c0140c9
    ctx->pc = 0x241354u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x241358: 0x34210fdb
    ctx->pc = 0x241358u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x24135c: 0x44810000
    ctx->pc = 0x24135cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241360: 0x46000800
    ctx->pc = 0x241360u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_241364:
    // 0x241364: 0xe6000260
    ctx->pc = 0x241364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x241368: 0x8e020370
    ctx->pc = 0x241368u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x24136c: 0x24420001
    ctx->pc = 0x24136cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x241370: 0xae020370
    ctx->pc = 0x241370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 2));
    // 0x241374: 0x28420004
    ctx->pc = 0x241374u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x241378: 0x50400001
    ctx->pc = 0x241378u;
    {
        const bool branch_taken_0x241378 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x241378) {
            ctx->pc = 0x24137Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 0));
            ctx->pc = 0x241380u;
            goto label_241380;
        }
    }
    ctx->pc = 0x241380u;
label_241380:
    // 0x241380: 0xc6040040
    ctx->pc = 0x241380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x241384: 0xe7a40010
    ctx->pc = 0x241384u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x241388: 0xc6020044
    ctx->pc = 0x241388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24138c: 0xc6030048
    ctx->pc = 0x24138cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x241390: 0xe7a30018
    ctx->pc = 0x241390u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x241394: 0xc600024c
    ctx->pc = 0x241394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241398: 0x3c013dcc
    ctx->pc = 0x241398u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x24139c: 0x3421cccd
    ctx->pc = 0x24139cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2413a0: 0x44810800
    ctx->pc = 0x2413a0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2413a4: 0x46010000
    ctx->pc = 0x2413a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2413a8: 0x46020000
    ctx->pc = 0x2413a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2413ac: 0xe7a00014
    ctx->pc = 0x2413acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2413b0: 0xe7a40020
    ctx->pc = 0x2413b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2413b4: 0xe7a00024
    ctx->pc = 0x2413b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2413b8: 0xe7a30028
    ctx->pc = 0x2413b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2413bc: 0x3c013f00
    ctx->pc = 0x2413bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2413c0: 0x44810000
    ctx->pc = 0x2413c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2413c4: 0x4600a500
    ctx->pc = 0x2413c4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2413c8: 0xc0b9e4a
    ctx->pc = 0x2413C8u;
    SET_GPR_U32(ctx, 31, 0x2413D0u);
    ctx->pc = 0x2413CCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2413D0u; }
    }
    if (ctx->pc != 0x2413D0u) { return; }
    ctx->pc = 0x2413D0u;
    // 0x2413d0: 0x46140002
    ctx->pc = 0x2413d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2413d4: 0xc7a10020
    ctx->pc = 0x2413d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2413d8: 0x46010000
    ctx->pc = 0x2413d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2413dc: 0xe7a00020
    ctx->pc = 0x2413dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2413e0: 0xc0b9dce
    ctx->pc = 0x2413E0u;
    SET_GPR_U32(ctx, 31, 0x2413E8u);
    ctx->pc = 0x2413E4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2413E8u; }
    }
    if (ctx->pc != 0x2413E8u) { return; }
    ctx->pc = 0x2413E8u;
    // 0x2413e8: 0x46140002
    ctx->pc = 0x2413e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2413ec: 0xc7a10028
    ctx->pc = 0x2413ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2413f0: 0x46010000
    ctx->pc = 0x2413f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2413f4: 0xe7a00028
    ctx->pc = 0x2413f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2413f8: 0x27a40010
    ctx->pc = 0x2413f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2413fc: 0x27a50020
    ctx->pc = 0x2413fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x241400: 0x302d
    ctx->pc = 0x241400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241404: 0xc087b72
    ctx->pc = 0x241404u;
    SET_GPR_U32(ctx, 31, 0x24140Cu);
    ctx->pc = 0x241408u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x21EDC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FastWallCollide_0x21edc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24140Cu; }
    }
    if (ctx->pc != 0x24140Cu) { return; }
    ctx->pc = 0x24140Cu;
    // 0x24140c: 0x10400024
    ctx->pc = 0x24140Cu;
    {
        const bool branch_taken_0x24140c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x241410u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x24140c) {
            ctx->pc = 0x2414A0u;
            goto label_2414a0;
        }
    }
    ctx->pc = 0x241414u;
    // 0x241414: 0xc6000260
    ctx->pc = 0x241414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241418: 0x3c013fc9
    ctx->pc = 0x241418u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x24141c: 0x34210fdb
    ctx->pc = 0x24141cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241420: 0x44810800
    ctx->pc = 0x241420u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x241424: 0x46010040
    ctx->pc = 0x241424u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x241428: 0x3c014049
    ctx->pc = 0x241428u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x24142c: 0x34210fdb
    ctx->pc = 0x24142cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241430: 0x44810000
    ctx->pc = 0x241430u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241434: 0x46010034
    ctx->pc = 0x241434u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241438: 0x0
    ctx->pc = 0x241438u;
    // NOP
    // 0x24143c: 0x45000006
    ctx->pc = 0x24143Cu;
    {
        const bool branch_taken_0x24143c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241440u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x24143c) {
            ctx->pc = 0x241458u;
            goto label_241458;
        }
    }
    ctx->pc = 0x241444u;
    // 0x241444: 0x3c0140c9
    ctx->pc = 0x241444u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x241448: 0x34210fdb
    ctx->pc = 0x241448u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x24144c: 0x44810000
    ctx->pc = 0x24144cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241450: 0x1000000d
    ctx->pc = 0x241450u;
    {
        const bool branch_taken_0x241450 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x241454u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x241450) {
            ctx->pc = 0x241488u;
            goto label_241488;
        }
    }
    ctx->pc = 0x241458u;
label_241458:
    // 0x241458: 0xc6010260
    ctx->pc = 0x241458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24145c: 0x3c01c049
    ctx->pc = 0x24145cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x241460: 0x34210fdb
    ctx->pc = 0x241460u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241464: 0x44810000
    ctx->pc = 0x241464u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241468: 0x46000836
    ctx->pc = 0x241468u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24146c: 0x0
    ctx->pc = 0x24146cu;
    // NOP
    // 0x241470: 0x45020005
    ctx->pc = 0x241470u;
    {
        const bool branch_taken_0x241470 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241470) {
            ctx->pc = 0x241474u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x241488u;
            goto label_241488;
        }
    }
    ctx->pc = 0x241478u;
    // 0x241478: 0x3c0140c9
    ctx->pc = 0x241478u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x24147c: 0x34210fdb
    ctx->pc = 0x24147cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241480: 0x44810000
    ctx->pc = 0x241480u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241484: 0x46000800
    ctx->pc = 0x241484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_241488:
    // 0x241488: 0xe6000260
    ctx->pc = 0x241488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x24148c: 0x220202d
    ctx->pc = 0x24148cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241490: 0xc08efc2
    ctx->pc = 0x241490u;
    SET_GPR_U32(ctx, 31, 0x241498u);
    ctx->pc = 0x241494u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241498u; }
    }
    if (ctx->pc != 0x241498u) { return; }
    ctx->pc = 0x241498u;
    // 0x241498: 0x10000039
    ctx->pc = 0x241498u;
    {
        const bool branch_taken_0x241498 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24149Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x241498) {
            ctx->pc = 0x241580u;
            goto label_241580;
        }
    }
    ctx->pc = 0x2414A0u;
label_2414a0:
    // 0x2414a0: 0xe7a00000
    ctx->pc = 0x2414a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2414a4: 0xc7a00014
    ctx->pc = 0x2414a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2414a8: 0xe7a00004
    ctx->pc = 0x2414a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2414ac: 0xc7a00018
    ctx->pc = 0x2414acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2414b0: 0xe7a00008
    ctx->pc = 0x2414b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2414b4: 0xc0b9e4a
    ctx->pc = 0x2414B4u;
    SET_GPR_U32(ctx, 31, 0x2414BCu);
    ctx->pc = 0x2414B8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2414BCu; }
    }
    if (ctx->pc != 0x2414BCu) { return; }
    ctx->pc = 0x2414BCu;
    // 0x2414bc: 0x46150002
    ctx->pc = 0x2414bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2414c0: 0xc7a10000
    ctx->pc = 0x2414c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2414c4: 0x46010000
    ctx->pc = 0x2414c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2414c8: 0xe7a00000
    ctx->pc = 0x2414c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2414cc: 0xc0b9dce
    ctx->pc = 0x2414CCu;
    SET_GPR_U32(ctx, 31, 0x2414D4u);
    ctx->pc = 0x2414D0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2414D4u; }
    }
    if (ctx->pc != 0x2414D4u) { return; }
    ctx->pc = 0x2414D4u;
    // 0x2414d4: 0x46150002
    ctx->pc = 0x2414d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2414d8: 0xc7a10008
    ctx->pc = 0x2414d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2414dc: 0x46010000
    ctx->pc = 0x2414dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2414e0: 0xe7a00008
    ctx->pc = 0x2414e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2414e4: 0x3a0202d
    ctx->pc = 0x2414e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2414e8: 0xc08f296
    ctx->pc = 0x2414E8u;
    SET_GPR_U32(ctx, 31, 0x2414F0u);
    ctx->pc = 0x2414ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23CA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_vacancy_0x23ca58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2414F0u; }
    }
    if (ctx->pc != 0x2414F0u) { return; }
    ctx->pc = 0x2414F0u;
    // 0x2414f0: 0x14400023
    ctx->pc = 0x2414F0u;
    {
        const bool branch_taken_0x2414f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2414F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2414f0) {
            ctx->pc = 0x241580u;
            goto label_241580;
        }
    }
    ctx->pc = 0x2414F8u;
    // 0x2414f8: 0xc6000260
    ctx->pc = 0x2414f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2414fc: 0x3c013fc9
    ctx->pc = 0x2414fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x241500: 0x34210fdb
    ctx->pc = 0x241500u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241504: 0x44810800
    ctx->pc = 0x241504u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x241508: 0x46010040
    ctx->pc = 0x241508u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24150c: 0x3c014049
    ctx->pc = 0x24150cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x241510: 0x34210fdb
    ctx->pc = 0x241510u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241514: 0x44810000
    ctx->pc = 0x241514u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241518: 0x46010034
    ctx->pc = 0x241518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24151c: 0x0
    ctx->pc = 0x24151cu;
    // NOP
    // 0x241520: 0x45000006
    ctx->pc = 0x241520u;
    {
        const bool branch_taken_0x241520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241524u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x241520) {
            ctx->pc = 0x24153Cu;
            goto label_24153c;
        }
    }
    ctx->pc = 0x241528u;
    // 0x241528: 0x3c0140c9
    ctx->pc = 0x241528u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x24152c: 0x34210fdb
    ctx->pc = 0x24152cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241530: 0x44810000
    ctx->pc = 0x241530u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241534: 0x1000000d
    ctx->pc = 0x241534u;
    {
        const bool branch_taken_0x241534 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x241538u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x241534) {
            ctx->pc = 0x24156Cu;
            goto label_24156c;
        }
    }
    ctx->pc = 0x24153Cu;
label_24153c:
    // 0x24153c: 0xc6010260
    ctx->pc = 0x24153cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241540: 0x3c01c049
    ctx->pc = 0x241540u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x241544: 0x34210fdb
    ctx->pc = 0x241544u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241548: 0x44810000
    ctx->pc = 0x241548u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24154c: 0x46000836
    ctx->pc = 0x24154cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241550: 0x0
    ctx->pc = 0x241550u;
    // NOP
    // 0x241554: 0x45020005
    ctx->pc = 0x241554u;
    {
        const bool branch_taken_0x241554 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241554) {
            ctx->pc = 0x241558u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x24156Cu;
            goto label_24156c;
        }
    }
    ctx->pc = 0x24155Cu;
    // 0x24155c: 0x3c0140c9
    ctx->pc = 0x24155cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x241560: 0x34210fdb
    ctx->pc = 0x241560u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241564: 0x44810000
    ctx->pc = 0x241564u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241568: 0x46000800
    ctx->pc = 0x241568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_24156c:
    // 0x24156c: 0xe6000260
    ctx->pc = 0x24156cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x241570: 0x220202d
    ctx->pc = 0x241570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241574: 0xc08efc2
    ctx->pc = 0x241574u;
    SET_GPR_U32(ctx, 31, 0x24157Cu);
    ctx->pc = 0x241578u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24157Cu; }
    }
    if (ctx->pc != 0x24157Cu) { return; }
    ctx->pc = 0x24157Cu;
    // 0x24157c: 0x200202d
    ctx->pc = 0x24157cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241580:
    // 0x241580: 0x3c013f80
    ctx->pc = 0x241580u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x241584: 0x44816000
    ctx->pc = 0x241584u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x241588: 0xc08f14c
    ctx->pc = 0x241588u;
    SET_GPR_U32(ctx, 31, 0x241590u);
    ctx->pc = 0x24158Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241590u; }
    }
    if (ctx->pc != 0x241590u) { return; }
    ctx->pc = 0x241590u;
    // 0x241590: 0xc08f20c
    ctx->pc = 0x241590u;
    SET_GPR_U32(ctx, 31, 0x241598u);
    ctx->pc = 0x241594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241598u; }
    }
    if (ctx->pc != 0x241598u) { return; }
    ctx->pc = 0x241598u;
    // 0x241598: 0xe6000258
    ctx->pc = 0x241598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x24159c: 0xc090e82
    ctx->pc = 0x24159Cu;
    SET_GPR_U32(ctx, 31, 0x2415A4u);
    ctx->pc = 0x2415A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2415A4u; }
    }
    if (ctx->pc != 0x2415A4u) { return; }
    ctx->pc = 0x2415A4u;
    // 0x2415a4: 0x40034800
    ctx->pc = 0x2415a4u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x2415a8: 0x3c02003a
    ctx->pc = 0x2415a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2415ac: 0x8c4421d0
    ctx->pc = 0x2415acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x2415b0: 0x8c8201c8
    ctx->pc = 0x2415b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 456)));
    // 0x2415b4: 0x621823
    ctx->pc = 0x2415b4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2415b8: 0x8c8201c0
    ctx->pc = 0x2415b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x2415bc: 0x621821
    ctx->pc = 0x2415bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2415c0: 0xac8301c0
    ctx->pc = 0x2415c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 3));
    // 0x2415c4: 0x8c8201c4
    ctx->pc = 0x2415c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 452)));
    // 0x2415c8: 0x24420001
    ctx->pc = 0x2415c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2415cc: 0xac8201c4
    ctx->pc = 0x2415ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 452), GPR_U32(ctx, 2));
    // 0x2415d0: 0xdfbf0060
    ctx->pc = 0x2415d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2415d4:
    // 0x2415d4: 0xdfb10050
    ctx->pc = 0x2415d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2415d8: 0xdfb00040
    ctx->pc = 0x2415d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2415dc: 0xc7b50078
    ctx->pc = 0x2415dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2415e0: 0xc7b40070
    ctx->pc = 0x2415e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2415e4: 0x3e00008
    ctx->pc = 0x2415E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2415E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2412ACu: goto label_2412ac;
            case 0x2412D8u: goto label_2412d8;
            case 0x241334u: goto label_241334;
            case 0x241364u: goto label_241364;
            case 0x241380u: goto label_241380;
            case 0x241458u: goto label_241458;
            case 0x241488u: goto label_241488;
            case 0x2414A0u: goto label_2414a0;
            case 0x24153Cu: goto label_24153c;
            case 0x24156Cu: goto label_24156c;
            case 0x241580u: goto label_241580;
            case 0x2415D4u: goto label_2415d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2415ECu;
}
