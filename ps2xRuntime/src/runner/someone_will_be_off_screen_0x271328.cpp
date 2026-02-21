#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: someone_will_be_off_screen
// Address: 0x271328 - 0x271834
void someone_will_be_off_screen_0x271328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x271328u;

    // 0x271328: 0x27bdff50
    ctx->pc = 0x271328u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x27132c: 0xffbf0090
    ctx->pc = 0x27132cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x271330: 0xffb60080
    ctx->pc = 0x271330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x271334: 0xffb50070
    ctx->pc = 0x271334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x271338: 0xffb40060
    ctx->pc = 0x271338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x27133c: 0xffb30050
    ctx->pc = 0x27133cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x271340: 0xffb20040
    ctx->pc = 0x271340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x271344: 0xffb10030
    ctx->pc = 0x271344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x271348: 0xffb00020
    ctx->pc = 0x271348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x27134c: 0xe7b400a0
    ctx->pc = 0x27134cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x271350: 0x80a82d
    ctx->pc = 0x271350u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271354: 0x24140005
    ctx->pc = 0x271354u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 5));
    // 0x271358: 0xb02d
    ctx->pc = 0x271358u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27135c: 0x3c020034
    ctx->pc = 0x27135cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x271360: 0x2442eb60
    ctx->pc = 0x271360u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x271364: 0x24510820
    ctx->pc = 0x271364u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 2080));
    // 0x271368: 0x202d
    ctx->pc = 0x271368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27136c: 0xc099d30
    ctx->pc = 0x27136Cu;
    SET_GPR_U32(ctx, 31, 0x271374u);
    ctx->pc = 0x271370u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x2674C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyCamera_0x2674c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271374u; }
    }
    if (ctx->pc != 0x271374u) { return; }
    ctx->pc = 0x271374u;
    // 0x271374: 0x24040005
    ctx->pc = 0x271374u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x271378: 0xc09a106
    ctx->pc = 0x271378u;
    SET_GPR_U32(ctx, 31, 0x271380u);
    ctx->pc = 0x27137Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x268418u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_attn_pos_0x268418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271380u; }
    }
    if (ctx->pc != 0x271380u) { return; }
    ctx->pc = 0x271380u;
    // 0x271380: 0x3c02003c
    ctx->pc = 0x271380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x271384: 0xac4038d4
    ctx->pc = 0x271384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14548), GPR_U32(ctx, 0));
    // 0x271388: 0xc09a8dc
    ctx->pc = 0x271388u;
    SET_GPR_U32(ctx, 31, 0x271390u);
    ctx->pc = 0x27138Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x26A370u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjust_radius_0x26a370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271390u; }
    }
    if (ctx->pc != 0x271390u) { return; }
    ctx->pc = 0x271390u;
    // 0x271390: 0xc7a10000
    ctx->pc = 0x271390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271394: 0xc6200140
    ctx->pc = 0x271394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271398: 0x46000b01
    ctx->pc = 0x271398u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27139c: 0xe62c0160
    ctx->pc = 0x27139cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 352), bits); }
    // 0x2713a0: 0xc7a20004
    ctx->pc = 0x2713a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2713a4: 0xc6200144
    ctx->pc = 0x2713a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2713a8: 0x46001081
    ctx->pc = 0x2713a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2713ac: 0xe6220164
    ctx->pc = 0x2713acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 356), bits); }
    // 0x2713b0: 0xc7a10008
    ctx->pc = 0x2713b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2713b4: 0xc6200148
    ctx->pc = 0x2713b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2713b8: 0x46000841
    ctx->pc = 0x2713b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2713bc: 0xe6210168
    ctx->pc = 0x2713bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 360), bits); }
    // 0x2713c0: 0x460c6002
    ctx->pc = 0x2713c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2713c4: 0x46021082
    ctx->pc = 0x2713c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2713c8: 0x46020000
    ctx->pc = 0x2713c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2713cc: 0x46010842
    ctx->pc = 0x2713ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2713d0: 0x46010000
    ctx->pc = 0x2713d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2713d4: 0x0
    ctx->pc = 0x2713d4u;
    // NOP
    // 0x2713d8: 0x0
    ctx->pc = 0x2713d8u;
    // NOP
    // 0x2713dc: 0x46000004
    ctx->pc = 0x2713dcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2713e0: 0x46000032
    ctx->pc = 0x2713e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2713e4: 0x45010005
    ctx->pc = 0x2713E4u;
    {
        const bool branch_taken_0x2713e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2713e4) {
            ctx->pc = 0x2713FCu;
            goto label_2713fc;
        }
    }
    ctx->pc = 0x2713ECu;
    // 0x2713ec: 0x460c6302
    ctx->pc = 0x2713ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2713f0: 0x46026300
    ctx->pc = 0x2713f0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2713f4: 0xc0ba284
    ctx->pc = 0x2713F4u;
    SET_GPR_U32(ctx, 31, 0x2713FCu);
    ctx->pc = 0x2713F8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2713FCu; }
    }
    if (ctx->pc != 0x2713FCu) { return; }
    ctx->pc = 0x2713FCu;
label_2713fc:
    // 0x2713fc: 0x3c014180
    ctx->pc = 0x2713fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
    // 0x271400: 0x44816000
    ctx->pc = 0x271400u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x271404: 0x3c0141c4
    ctx->pc = 0x271404u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16836 << 16));
    // 0x271408: 0x44816800
    ctx->pc = 0x271408u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x27140c: 0xc09c470
    ctx->pc = 0x27140Cu;
    SET_GPR_U32(ctx, 31, 0x271414u);
    ctx->pc = 0x271410u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2711C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_cam_speed_0x2711c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271414u; }
    }
    if (ctx->pc != 0x271414u) { return; }
    ctx->pc = 0x271414u;
    // 0x271414: 0x3c020034
    ctx->pc = 0x271414u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x271418: 0x8c42cdb8
    ctx->pc = 0x271418u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
    // 0x27141c: 0x4410023
    ctx->pc = 0x27141Cu;
    {
        const bool branch_taken_0x27141c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x271420u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x27141c) {
            ctx->pc = 0x2714ACu;
            goto label_2714ac;
        }
    }
    ctx->pc = 0x271424u;
    // 0x271424: 0x3c020034
    ctx->pc = 0x271424u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x271428: 0xc441f9fc
    ctx->pc = 0x271428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27142c: 0x3c013f80
    ctx->pc = 0x27142cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x271430: 0x44810000
    ctx->pc = 0x271430u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x271434: 0x46010036
    ctx->pc = 0x271434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271438: 0x0
    ctx->pc = 0x271438u;
    // NOP
    // 0x27143c: 0x4500001a
    ctx->pc = 0x27143Cu;
    {
        const bool branch_taken_0x27143c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271440u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294965756));
        if (branch_taken_0x27143c) {
            ctx->pc = 0x2714A8u;
            goto label_2714a8;
        }
    }
    ctx->pc = 0x271444u;
    // 0x271444: 0x3c02003c
    ctx->pc = 0x271444u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x271448: 0x24463970
    ctx->pc = 0x271448u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 14704));
    // 0x27144c: 0x60282d
    ctx->pc = 0x27144cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271450: 0x3c030031
    ctx->pc = 0x271450u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x271454: 0x8c62ffbc
    ctx->pc = 0x271454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x271458: 0x4400005
    ctx->pc = 0x271458u;
    {
        const bool branch_taken_0x271458 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27145Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x271458) {
            ctx->pc = 0x271470u;
            goto label_271470;
        }
    }
    ctx->pc = 0x271460u;
    // 0x271460: 0x44820800
    ctx->pc = 0x271460u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x271464: 0x46800860
    ctx->pc = 0x271464u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x271468: 0x10000009
    ctx->pc = 0x271468u;
    {
        const bool branch_taken_0x271468 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27146Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x271468) {
            ctx->pc = 0x271490u;
            goto label_271490;
        }
    }
    ctx->pc = 0x271470u;
label_271470:
    // 0x271470: 0x8c820000
    ctx->pc = 0x271470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x271474: 0x30430001
    ctx->pc = 0x271474u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x271478: 0x21042
    ctx->pc = 0x271478u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x27147c: 0x621825
    ctx->pc = 0x27147cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x271480: 0x44830800
    ctx->pc = 0x271480u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x271484: 0x46800860
    ctx->pc = 0x271484u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x271488: 0x46010840
    ctx->pc = 0x271488u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x27148c: 0xc4a00000
    ctx->pc = 0x27148cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271490:
    // 0x271490: 0x46000802
    ctx->pc = 0x271490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x271494: 0xe4c00000
    ctx->pc = 0x271494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x271498: 0x3c02003c
    ctx->pc = 0x271498u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x27149c: 0x3c014120
    ctx->pc = 0x27149cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2714a0: 0x44810000
    ctx->pc = 0x2714a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2714a4: 0xe4403974
    ctx->pc = 0x2714a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14708), bits); }
label_2714a8:
    // 0x2714a8: 0x3c02003c
    ctx->pc = 0x2714a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2714ac:
    // 0x2714ac: 0xc4403970
    ctx->pc = 0x2714acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2714b0: 0x46140036
    ctx->pc = 0x2714b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2714b4: 0x0
    ctx->pc = 0x2714b4u;
    // NOP
    // 0x2714b8: 0x45000014
    ctx->pc = 0x2714B8u;
    {
        const bool branch_taken_0x2714b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2714BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2714b8) {
            ctx->pc = 0x27150Cu;
            goto label_27150c;
        }
    }
    ctx->pc = 0x2714C0u;
    // 0x2714c0: 0xc4403974
    ctx->pc = 0x2714c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2714c4: 0x46140034
    ctx->pc = 0x2714c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2714c8: 0x0
    ctx->pc = 0x2714c8u;
    // NOP
    // 0x2714cc: 0x45030001
    ctx->pc = 0x2714CCu;
    {
        const bool branch_taken_0x2714cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2714cc) {
            ctx->pc = 0x2714D0u;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2714D4u;
            goto label_2714d4;
        }
    }
    ctx->pc = 0x2714D4u;
label_2714d4:
    // 0x2714d4: 0x3c02003c
    ctx->pc = 0x2714d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2714d8: 0xc4413970
    ctx->pc = 0x2714d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2714dc: 0x0
    ctx->pc = 0x2714dcu;
    // NOP
    // 0x2714e0: 0x0
    ctx->pc = 0x2714e0u;
    // NOP
    // 0x2714e4: 0x46140843
    ctx->pc = 0x2714e4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[20];
    // 0x2714e8: 0xc6200160
    ctx->pc = 0x2714e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2714ec: 0x46000802
    ctx->pc = 0x2714ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2714f0: 0xe6200160
    ctx->pc = 0x2714f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 352), bits); }
    // 0x2714f4: 0xc6200164
    ctx->pc = 0x2714f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2714f8: 0x46000802
    ctx->pc = 0x2714f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2714fc: 0xe6200164
    ctx->pc = 0x2714fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 356), bits); }
    // 0x271500: 0xc6200168
    ctx->pc = 0x271500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271504: 0x46000842
    ctx->pc = 0x271504u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x271508: 0xe6210168
    ctx->pc = 0x271508u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 360), bits); }
label_27150c:
    // 0x27150c: 0xc6200140
    ctx->pc = 0x27150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271510: 0xc6210160
    ctx->pc = 0x271510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271514: 0x46010000
    ctx->pc = 0x271514u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x271518: 0xe6200140
    ctx->pc = 0x271518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
    // 0x27151c: 0xc6200144
    ctx->pc = 0x27151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271520: 0xc6210164
    ctx->pc = 0x271520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271524: 0x46010000
    ctx->pc = 0x271524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x271528: 0xe6200144
    ctx->pc = 0x271528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
    // 0x27152c: 0xc6200148
    ctx->pc = 0x27152cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271530: 0xc6210168
    ctx->pc = 0x271530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271534: 0x46010000
    ctx->pc = 0x271534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x271538: 0xe6200148
    ctx->pc = 0x271538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x27153c: 0x3c10003c
    ctx->pc = 0x27153cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x271540: 0xc61438f0
    ctx->pc = 0x271540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 14576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x271544: 0x280202d
    ctx->pc = 0x271544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271548: 0xc09ab02
    ctx->pc = 0x271548u;
    SET_GPR_U32(ctx, 31, 0x271550u);
    ctx->pc = 0x27154Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26AC08u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_rotation_for_multiplayer_0x26ac08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271550u; }
    }
    if (ctx->pc != 0x271550u) { return; }
    ctx->pc = 0x271550u;
    // 0x271550: 0xe61438f0
    ctx->pc = 0x271550u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 14576), bits); }
    // 0x271554: 0xc09a972
    ctx->pc = 0x271554u;
    SET_GPR_U32(ctx, 31, 0x27155Cu);
    ctx->pc = 0x271558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26A5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_cam_wpos_0x26a5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27155Cu; }
    }
    if (ctx->pc != 0x27155Cu) { return; }
    ctx->pc = 0x27155Cu;
    // 0x27155c: 0xae200090
    ctx->pc = 0x27155cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x271560: 0xae200094
    ctx->pc = 0x271560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    // 0x271564: 0xae200098
    ctx->pc = 0x271564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    // 0x271568: 0xae2000a0
    ctx->pc = 0x271568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
    // 0x27156c: 0xae2000a4
    ctx->pc = 0x27156cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x271570: 0xae2000a8
    ctx->pc = 0x271570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
    // 0x271574: 0x3c02003c
    ctx->pc = 0x271574u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x271578: 0x8c4238d4
    ctx->pc = 0x271578u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14548)));
    // 0x27157c: 0x10400004
    ctx->pc = 0x27157Cu;
    {
        const bool branch_taken_0x27157c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x271580u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 320));
        if (branch_taken_0x27157c) {
            ctx->pc = 0x271590u;
            goto label_271590;
        }
    }
    ctx->pc = 0x271584u;
    // 0x271584: 0x26250070
    ctx->pc = 0x271584u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 112));
    // 0x271588: 0xc099c08
    ctx->pc = 0x271588u;
    SET_GPR_U32(ctx, 31, 0x271590u);
    ctx->pc = 0x27158Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x267020u;
    {
        const uint32_t __entryPc = ctx->pc;
        fix_radius_0x267020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271590u; }
    }
    if (ctx->pc != 0x271590u) { return; }
    ctx->pc = 0x271590u;
label_271590:
    // 0x271590: 0x280202d
    ctx->pc = 0x271590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271594: 0xc09a760
    ctx->pc = 0x271594u;
    SET_GPR_U32(ctx, 31, 0x27159Cu);
    ctx->pc = 0x271598u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
    ctx->pc = 0x269D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_orient_to_0x269d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27159Cu; }
    }
    if (ctx->pc != 0x27159Cu) { return; }
    ctx->pc = 0x27159Cu;
    // 0x27159c: 0x280202d
    ctx->pc = 0x27159cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2715a0: 0xc099c48
    ctx->pc = 0x2715A0u;
    SET_GPR_U32(ctx, 31, 0x2715A8u);
    ctx->pc = 0x2715A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x267120u;
    {
        const uint32_t __entryPc = ctx->pc;
        ProcCamera_0x267120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2715A8u; }
    }
    if (ctx->pc != 0x2715A8u) { return; }
    ctx->pc = 0x2715A8u;
    // 0x2715a8: 0x3c020035
    ctx->pc = 0x2715a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2715ac: 0x8c429b88
    ctx->pc = 0x2715acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941576)));
    // 0x2715b0: 0x1440001e
    ctx->pc = 0x2715B0u;
    {
        const bool branch_taken_0x2715b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2715B4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2715b0) {
            ctx->pc = 0x27162Cu;
            goto label_27162c;
        }
    }
    ctx->pc = 0x2715B8u;
    // 0x2715b8: 0xc6200070
    ctx->pc = 0x2715b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2715bc: 0xc6210074
    ctx->pc = 0x2715bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2715c0: 0xc6220078
    ctx->pc = 0x2715c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2715c4: 0x24040028
    ctx->pc = 0x2715c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 40));
    // 0x2715c8: 0x24050009
    ctx->pc = 0x2715c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    // 0x2715cc: 0x3c06003b
    ctx->pc = 0x2715ccu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2715d0: 0x460000e4
    ctx->pc = 0x2715d0u;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2715d4: 0x44071800
    ctx->pc = 0x2715d4u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[3]);
    // 0x2715d8: 0x46000824
    ctx->pc = 0x2715d8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x2715dc: 0x44080000
    ctx->pc = 0x2715dcu;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[0]);
    // 0x2715e0: 0x46001024
    ctx->pc = 0x2715e0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[2]);
    // 0x2715e4: 0x44090000
    ctx->pc = 0x2715e4u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[0]);
    // 0x2715e8: 0xc0b47da
    ctx->pc = 0x2715E8u;
    SET_GPR_U32(ctx, 31, 0x2715F0u);
    ctx->pc = 0x2715ECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294944376));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2715F0u; }
    }
    if (ctx->pc != 0x2715F0u) { return; }
    ctx->pc = 0x2715F0u;
    // 0x2715f0: 0xc6200140
    ctx->pc = 0x2715f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2715f4: 0xc6210144
    ctx->pc = 0x2715f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2715f8: 0xc6220148
    ctx->pc = 0x2715f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2715fc: 0x24040028
    ctx->pc = 0x2715fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 40));
    // 0x271600: 0x2405000a
    ctx->pc = 0x271600u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x271604: 0x3c06003b
    ctx->pc = 0x271604u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x271608: 0x460000e4
    ctx->pc = 0x271608u;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x27160c: 0x44071800
    ctx->pc = 0x27160cu;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[3]);
    // 0x271610: 0x46000824
    ctx->pc = 0x271610u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x271614: 0x44080000
    ctx->pc = 0x271614u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[0]);
    // 0x271618: 0x46001024
    ctx->pc = 0x271618u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[2]);
    // 0x27161c: 0x44090000
    ctx->pc = 0x27161cu;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[0]);
    // 0x271620: 0xc0b47da
    ctx->pc = 0x271620u;
    SET_GPR_U32(ctx, 31, 0x271628u);
    ctx->pc = 0x271624u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294944400));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271628u; }
    }
    if (ctx->pc != 0x271628u) { return; }
    ctx->pc = 0x271628u;
    // 0x271628: 0x802d
    ctx->pc = 0x271628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27162c:
    // 0x27162c: 0x3c020032
    ctx->pc = 0x27162cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x271630: 0x6a00059
    ctx->pc = 0x271630u;
    {
        const bool branch_taken_0x271630 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x271634u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 7104));
        if (branch_taken_0x271630) {
            ctx->pc = 0x271798u;
            goto label_271798;
        }
    }
    ctx->pc = 0x271638u;
    // 0x271638: 0x3c130035
    ctx->pc = 0x271638u;
    SET_GPR_U32(ctx, 19, ((uint32_t)53 << 16));
    // 0x27163c: 0x0
    ctx->pc = 0x27163cu;
    // NOP
label_271640:
    // 0x271640: 0x8e4300fc
    ctx->pc = 0x271640u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x271644: 0x24020001
    ctx->pc = 0x271644u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x271648: 0x54620050
    ctx->pc = 0x271648u;
    {
        const bool branch_taken_0x271648 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x271648) {
            ctx->pc = 0x27164Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x27178Cu;
            goto label_27178c;
        }
    }
    ctx->pc = 0x271650u;
    // 0x271650: 0x280202d
    ctx->pc = 0x271650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271654: 0x27a50010
    ctx->pc = 0x271654u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x271658: 0x27a60014
    ctx->pc = 0x271658u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 20));
    // 0x27165c: 0xc09cf78
    ctx->pc = 0x27165Cu;
    SET_GPR_U32(ctx, 31, 0x271664u);
    ctx->pc = 0x271660u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 96));
    ctx->pc = 0x273DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_screen_pos_0x273de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271664u; }
    }
    if (ctx->pc != 0x271664u) { return; }
    ctx->pc = 0x271664u;
    // 0x271664: 0x3c020034
    ctx->pc = 0x271664u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x271668: 0x8c42f918
    ctx->pc = 0x271668u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965528)));
    // 0x27166c: 0x2442001e
    ctx->pc = 0x27166cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30));
    // 0x271670: 0x44820000
    ctx->pc = 0x271670u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x271674: 0x46800020
    ctx->pc = 0x271674u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x271678: 0xc7a10010
    ctx->pc = 0x271678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27167c: 0x46000834
    ctx->pc = 0x27167cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271680: 0x0
    ctx->pc = 0x271680u;
    // NOP
    // 0x271684: 0x4501001d
    ctx->pc = 0x271684u;
    {
        const bool branch_taken_0x271684 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x271688u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x271684) {
            ctx->pc = 0x2716FCu;
            goto label_2716fc;
        }
    }
    ctx->pc = 0x27168Cu;
    // 0x27168c: 0x3c020034
    ctx->pc = 0x27168cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x271690: 0x8c42f91c
    ctx->pc = 0x271690u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965532)));
    // 0x271694: 0x2442ffe2
    ctx->pc = 0x271694u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x271698: 0x44820000
    ctx->pc = 0x271698u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x27169c: 0x46800020
    ctx->pc = 0x27169cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2716a0: 0x46010034
    ctx->pc = 0x2716a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2716a4: 0x0
    ctx->pc = 0x2716a4u;
    // NOP
    // 0x2716a8: 0x45010014
    ctx->pc = 0x2716A8u;
    {
        const bool branch_taken_0x2716a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2716ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2716a8) {
            ctx->pc = 0x2716FCu;
            goto label_2716fc;
        }
    }
    ctx->pc = 0x2716B0u;
    // 0x2716b0: 0x3c020034
    ctx->pc = 0x2716b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2716b4: 0x8c42f920
    ctx->pc = 0x2716b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965536)));
    // 0x2716b8: 0x2442ffec
    ctx->pc = 0x2716b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x2716bc: 0x44820000
    ctx->pc = 0x2716bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2716c0: 0x46800020
    ctx->pc = 0x2716c0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2716c4: 0xc7a10014
    ctx->pc = 0x2716c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2716c8: 0x46010034
    ctx->pc = 0x2716c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2716cc: 0x0
    ctx->pc = 0x2716ccu;
    // NOP
    // 0x2716d0: 0x4501000a
    ctx->pc = 0x2716D0u;
    {
        const bool branch_taken_0x2716d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2716D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2716d0) {
            ctx->pc = 0x2716FCu;
            goto label_2716fc;
        }
    }
    ctx->pc = 0x2716D8u;
    // 0x2716d8: 0x3c020034
    ctx->pc = 0x2716d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2716dc: 0x8c42f924
    ctx->pc = 0x2716dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965540)));
    // 0x2716e0: 0x24420028
    ctx->pc = 0x2716e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x2716e4: 0x44820000
    ctx->pc = 0x2716e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2716e8: 0x46800020
    ctx->pc = 0x2716e8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2716ec: 0x46000834
    ctx->pc = 0x2716ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2716f0: 0x0
    ctx->pc = 0x2716f0u;
    // NOP
    // 0x2716f4: 0x4500000d
    ctx->pc = 0x2716F4u;
    {
        const bool branch_taken_0x2716f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2716F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2716f4) {
            ctx->pc = 0x27172Cu;
            goto label_27172c;
        }
    }
    ctx->pc = 0x2716FCu;
label_2716fc:
    // 0x2716fc: 0xac40f940
    ctx->pc = 0x2716fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965568), GPR_U32(ctx, 0));
    // 0x271700: 0x8e629b88
    ctx->pc = 0x271700u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294941576)));
    // 0x271704: 0x14400020
    ctx->pc = 0x271704u;
    {
        const bool branch_taken_0x271704 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x271708u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x271704) {
            ctx->pc = 0x271788u;
            goto label_271788;
        }
    }
    ctx->pc = 0x27170Cu;
    // 0x27170c: 0x3c06003b
    ctx->pc = 0x27170cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x271710: 0x2404000a
    ctx->pc = 0x271710u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x271714: 0x2605000b
    ctx->pc = 0x271714u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 11));
    // 0x271718: 0x24c6a6a8
    ctx->pc = 0x271718u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294944424));
    // 0x27171c: 0xc0b47da
    ctx->pc = 0x27171Cu;
    SET_GPR_U32(ctx, 31, 0x271724u);
    ctx->pc = 0x271720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271724u; }
    }
    if (ctx->pc != 0x271724u) { return; }
    ctx->pc = 0x271724u;
    // 0x271724: 0x1000000a
    ctx->pc = 0x271724u;
    {
        const bool branch_taken_0x271724 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x271728u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294941576)));
        if (branch_taken_0x271724) {
            ctx->pc = 0x271750u;
            goto label_271750;
        }
    }
    ctx->pc = 0x27172Cu;
label_27172c:
    // 0x27172c: 0x8e629b88
    ctx->pc = 0x27172cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294941576)));
    // 0x271730: 0x54400016
    ctx->pc = 0x271730u;
    {
        const bool branch_taken_0x271730 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x271730) {
            ctx->pc = 0x271734u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x27178Cu;
            goto label_27178c;
        }
    }
    ctx->pc = 0x271738u;
    // 0x271738: 0x3c06003b
    ctx->pc = 0x271738u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x27173c: 0x2404000a
    ctx->pc = 0x27173cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x271740: 0x2605000b
    ctx->pc = 0x271740u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 11));
    // 0x271744: 0xc0b47da
    ctx->pc = 0x271744u;
    SET_GPR_U32(ctx, 31, 0x27174Cu);
    ctx->pc = 0x271748u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294944448));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27174Cu; }
    }
    if (ctx->pc != 0x27174Cu) { return; }
    ctx->pc = 0x27174Cu;
    // 0x27174c: 0x8e629b88
    ctx->pc = 0x27174cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294941576)));
label_271750:
    // 0x271750: 0x5440000e
    ctx->pc = 0x271750u;
    {
        const bool branch_taken_0x271750 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x271750) {
            ctx->pc = 0x271754u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x27178Cu;
            goto label_27178c;
        }
    }
    ctx->pc = 0x271758u;
    // 0x271758: 0x3c06003b
    ctx->pc = 0x271758u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x27175c: 0xc7a00010
    ctx->pc = 0x27175cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271760: 0xc7a10014
    ctx->pc = 0x271760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271764: 0x24040028
    ctx->pc = 0x271764u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 40));
    // 0x271768: 0x2605000b
    ctx->pc = 0x271768u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 11));
    // 0x27176c: 0x24c6a6d8
    ctx->pc = 0x27176cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294944472));
    // 0x271770: 0x460000a4
    ctx->pc = 0x271770u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x271774: 0x44071000
    ctx->pc = 0x271774u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[2]);
    // 0x271778: 0x46000824
    ctx->pc = 0x271778u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x27177c: 0x44080000
    ctx->pc = 0x27177cu;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[0]);
    // 0x271780: 0xc0b47da
    ctx->pc = 0x271780u;
    SET_GPR_U32(ctx, 31, 0x271788u);
    ctx->pc = 0x271784u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271788u; }
    }
    if (ctx->pc != 0x271788u) { return; }
    ctx->pc = 0x271788u;
label_271788:
    // 0x271788: 0x26100001
    ctx->pc = 0x271788u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_27178c:
    // 0x27178c: 0x2b0102a
    ctx->pc = 0x27178cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 16)));
    // 0x271790: 0x1040ffab
    ctx->pc = 0x271790u;
    {
        const bool branch_taken_0x271790 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x271794u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 11008));
        if (branch_taken_0x271790) {
            ctx->pc = 0x271640u;
            goto label_271640;
        }
    }
    ctx->pc = 0x271798u;
label_271798:
    // 0x271798: 0x3c020034
    ctx->pc = 0x271798u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27179c: 0x2442eb60
    ctx->pc = 0x27179cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x2717a0: 0x241001a0
    ctx->pc = 0x2717a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 416));
    // 0x2717a4: 0x2908018
    ctx->pc = 0x2717a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2717a8: 0x2028021
    ctx->pc = 0x2717a8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2717ac: 0x280202d
    ctx->pc = 0x2717acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717b0: 0x282d
    ctx->pc = 0x2717b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717b4: 0xc099c34
    ctx->pc = 0x2717B4u;
    SET_GPR_U32(ctx, 31, 0x2717BCu);
    ctx->pc = 0x2717B8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 260)));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2717BCu; }
    }
    if (ctx->pc != 0x2717BCu) { return; }
    ctx->pc = 0x2717BCu;
    // 0x2717bc: 0xae000000
    ctx->pc = 0x2717bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2717c0: 0x3c020034
    ctx->pc = 0x2717c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2717c4: 0xc62100d0
    ctx->pc = 0x2717c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2717c8: 0xc440f904
    ctx->pc = 0x2717c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2717cc: 0x46000834
    ctx->pc = 0x2717ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2717d0: 0x0
    ctx->pc = 0x2717d0u;
    // NOP
    // 0x2717d4: 0x4503000b
    ctx->pc = 0x2717D4u;
    {
        const bool branch_taken_0x2717d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2717d4) {
            ctx->pc = 0x2717D8u;
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x271804u;
            goto label_271804;
        }
    }
    ctx->pc = 0x2717DCu;
    // 0x2717dc: 0x3c0142a0
    ctx->pc = 0x2717dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17056 << 16));
    // 0x2717e0: 0x44810000
    ctx->pc = 0x2717e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2717e4: 0x46000834
    ctx->pc = 0x2717e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2717e8: 0x0
    ctx->pc = 0x2717e8u;
    // NOP
    // 0x2717ec: 0x45000005
    ctx->pc = 0x2717ECu;
    {
        const bool branch_taken_0x2717ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2717F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2717ec) {
            ctx->pc = 0x271804u;
            goto label_271804;
        }
    }
    ctx->pc = 0x2717F4u;
    // 0x2717f4: 0x8c42cdb8
    ctx->pc = 0x2717f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
    // 0x2717f8: 0x10400003
    ctx->pc = 0x2717F8u;
    {
        const bool branch_taken_0x2717f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2717FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2717f8) {
            ctx->pc = 0x271808u;
            goto label_271808;
        }
    }
    ctx->pc = 0x271800u;
    // 0x271800: 0xb02d
    ctx->pc = 0x271800u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271804:
    // 0x271804: 0x2c0102d
    ctx->pc = 0x271804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_271808:
    // 0x271808: 0xdfbf0090
    ctx->pc = 0x271808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27180c: 0xdfb60080
    ctx->pc = 0x27180cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x271810: 0xdfb50070
    ctx->pc = 0x271810u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x271814: 0xdfb40060
    ctx->pc = 0x271814u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x271818: 0xdfb30050
    ctx->pc = 0x271818u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27181c: 0xdfb20040
    ctx->pc = 0x27181cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x271820: 0xdfb10030
    ctx->pc = 0x271820u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271824: 0xdfb00020
    ctx->pc = 0x271824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271828: 0xc7b400a0
    ctx->pc = 0x271828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27182c: 0x3e00008
    ctx->pc = 0x27182Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271830u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2713FCu: goto label_2713fc;
            case 0x271470u: goto label_271470;
            case 0x271490u: goto label_271490;
            case 0x2714A8u: goto label_2714a8;
            case 0x2714ACu: goto label_2714ac;
            case 0x2714D4u: goto label_2714d4;
            case 0x27150Cu: goto label_27150c;
            case 0x271590u: goto label_271590;
            case 0x27162Cu: goto label_27162c;
            case 0x271640u: goto label_271640;
            case 0x2716FCu: goto label_2716fc;
            case 0x27172Cu: goto label_27172c;
            case 0x271750u: goto label_271750;
            case 0x271788u: goto label_271788;
            case 0x27178Cu: goto label_27178c;
            case 0x271798u: goto label_271798;
            case 0x271804u: goto label_271804;
            case 0x271808u: goto label_271808;
            default: break;
        }
        return;
    }
    ctx->pc = 0x271834u;
}
