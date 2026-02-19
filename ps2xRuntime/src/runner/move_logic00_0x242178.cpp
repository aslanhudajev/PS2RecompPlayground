#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic00
// Address: 0x242178 - 0x2424b0
void move_logic00_0x242178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x242178u;

    // 0x242178: 0x27bdff70
    ctx->pc = 0x242178u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x24217c: 0xffbf0050
    ctx->pc = 0x24217cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x242180: 0xffb30040
    ctx->pc = 0x242180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x242184: 0xffb20030
    ctx->pc = 0x242184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x242188: 0xffb10020
    ctx->pc = 0x242188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24218c: 0xffb00010
    ctx->pc = 0x24218cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x242190: 0xe7b90088
    ctx->pc = 0x242190u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x242194: 0xe7b80080
    ctx->pc = 0x242194u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x242198: 0xe7b70078
    ctx->pc = 0x242198u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x24219c: 0xe7b60070
    ctx->pc = 0x24219cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2421a0: 0xe7b50068
    ctx->pc = 0x2421a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2421a4: 0xe7b40060
    ctx->pc = 0x2421a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2421a8: 0x80902d
    ctx->pc = 0x2421a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2421ac: 0x240303b0
    ctx->pc = 0x2421acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x2421b0: 0x2431818
    ctx->pc = 0x2421b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2421b4: 0x3c020033
    ctx->pc = 0x2421b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2421b8: 0x2442dfd0
    ctx->pc = 0x2421b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x2421bc: 0x628021
    ctx->pc = 0x2421bcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2421c0: 0x3c03003c
    ctx->pc = 0x2421c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2421c4: 0x24631bb8
    ctx->pc = 0x2421c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7096));
    // 0x2421c8: 0x8e020000
    ctx->pc = 0x2421c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2421cc: 0x21080
    ctx->pc = 0x2421ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2421d0: 0x431021
    ctx->pc = 0x2421d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2421d4: 0xc08ed18
    ctx->pc = 0x2421D4u;
    SET_GPR_U32(ctx, 31, 0x2421DCu);
    ctx->pc = 0x2421D8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    ctx->pc = 0x23B460u;
    {
        const uint32_t __entryPc = ctx->pc;
        FoundSuicideBomber_0x23b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2421DCu; }
    }
    if (ctx->pc != 0x2421DCu) { return; }
    ctx->pc = 0x2421DCu;
    // 0x2421dc: 0x14400008
    ctx->pc = 0x2421DCu;
    {
        const bool branch_taken_0x2421dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2421E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x2421dc) {
            ctx->pc = 0x242200u;
            goto label_242200;
        }
    }
    ctx->pc = 0x2421E4u;
    // 0x2421e4: 0x860202f2
    ctx->pc = 0x2421e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 754)));
    // 0x2421e8: 0x10400004
    ctx->pc = 0x2421E8u;
    {
        const bool branch_taken_0x2421e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2421ECu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x2421e8) {
            ctx->pc = 0x2421FCu;
            goto label_2421fc;
        }
    }
    ctx->pc = 0x2421F0u;
    // 0x2421f0: 0x86020288
    ctx->pc = 0x2421f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x2421f4: 0x4410007
    ctx->pc = 0x2421F4u;
    {
        const bool branch_taken_0x2421f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2421F8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x2421f4) {
            ctx->pc = 0x242214u;
            goto label_242214;
        }
    }
    ctx->pc = 0x2421FCu;
label_2421fc:
    // 0x2421fc: 0x24420005
    ctx->pc = 0x2421fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5));
label_242200:
    // 0x242200: 0xa6020324
    ctx->pc = 0x242200u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x242204: 0xc09095a
    ctx->pc = 0x242204u;
    SET_GPR_U32(ctx, 31, 0x24220Cu);
    ctx->pc = 0x242208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x242568u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_ai_0x242568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24220Cu; }
    }
    if (ctx->pc != 0x24220Cu) { return; }
    ctx->pc = 0x24220Cu;
    // 0x24220c: 0x1000009c
    ctx->pc = 0x24220Cu;
    {
        const bool branch_taken_0x24220c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242210u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x24220c) {
            ctx->pc = 0x242480u;
            goto label_242480;
        }
    }
    ctx->pc = 0x242214u;
label_242214:
    // 0x242214: 0x40034800
    ctx->pc = 0x242214u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x242218: 0x3c02003a
    ctx->pc = 0x242218u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x24221c: 0x8c4221d0
    ctx->pc = 0x24221cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x242220: 0xac430168
    ctx->pc = 0x242220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 360), GPR_U32(ctx, 3));
    // 0x242224: 0x86030324
    ctx->pc = 0x242224u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x242228: 0x86020328
    ctx->pc = 0x242228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x24222c: 0x50620004
    ctx->pc = 0x24222Cu;
    {
        const bool branch_taken_0x24222c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x24222c) {
            ctx->pc = 0x242230u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->pc = 0x242240u;
            goto label_242240;
        }
    }
    ctx->pc = 0x242234u;
    // 0x242234: 0xc08e210
    ctx->pc = 0x242234u;
    SET_GPR_U32(ctx, 31, 0x24223Cu);
    ctx->pc = 0x242238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24223Cu; }
    }
    if (ctx->pc != 0x24223Cu) { return; }
    ctx->pc = 0x24223Cu;
    // 0x24223c: 0x8e03036c
    ctx->pc = 0x24223cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_242240:
    // 0x242240: 0x18600005
    ctx->pc = 0x242240u;
    {
        const bool branch_taken_0x242240 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x242244u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x242240) {
            ctx->pc = 0x242258u;
            goto label_242258;
        }
    }
    ctx->pc = 0x242248u;
    // 0x242248: 0x8c42ffbc
    ctx->pc = 0x242248u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x24224c: 0x621023
    ctx->pc = 0x24224cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242250: 0x1c400075
    ctx->pc = 0x242250u;
    {
        const bool branch_taken_0x242250 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x242254u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 2));
        if (branch_taken_0x242250) {
            ctx->pc = 0x242428u;
            goto label_242428;
        }
    }
    ctx->pc = 0x242258u;
label_242258:
    // 0x242258: 0x200202d
    ctx->pc = 0x242258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24225c: 0xc08f0f0
    ctx->pc = 0x24225Cu;
    SET_GPR_U32(ctx, 31, 0x242264u);
    ctx->pc = 0x242260u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242264u; }
    }
    if (ctx->pc != 0x242264u) { return; }
    ctx->pc = 0x242264u;
    // 0x242264: 0x3c02003c
    ctx->pc = 0x242264u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x242268: 0xe4401c6c
    ctx->pc = 0x242268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7276), bits); }
    // 0x24226c: 0x46000506
    ctx->pc = 0x24226cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x242270: 0x882d
    ctx->pc = 0x242270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242274: 0x3c020033
    ctx->pc = 0x242274u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x242278: 0x2453dfa0
    ctx->pc = 0x242278u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294959008));
    // 0x24227c: 0x3c014049
    ctx->pc = 0x24227cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x242280: 0x34210fdb
    ctx->pc = 0x242280u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x242284: 0x4481c000
    ctx->pc = 0x242284u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 1);
    // 0x242288: 0x3c0140c9
    ctx->pc = 0x242288u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x24228c: 0x34210fdb
    ctx->pc = 0x24228cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x242290: 0x4481a800
    ctx->pc = 0x242290u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x242294: 0x3c01c049
    ctx->pc = 0x242294u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x242298: 0x34210fdb
    ctx->pc = 0x242298u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x24229c: 0x4481b800
    ctx->pc = 0x24229cu;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 1);
    // 0x2422a0: 0x3c013dcc
    ctx->pc = 0x2422a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2422a4: 0x3421cccd
    ctx->pc = 0x2422a4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2422a8: 0x4481c800
    ctx->pc = 0x2422a8u;
    *(uint32_t*)&ctx->f[25] = GPR_U32(ctx, 1);
    // 0x2422ac: 0x8e020368
    ctx->pc = 0x2422acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_2422b0:
    // 0x2422b0: 0x18400005
    ctx->pc = 0x2422B0u;
    {
        const bool branch_taken_0x2422b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2422B4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x2422b0) {
            ctx->pc = 0x2422C8u;
            goto label_2422c8;
        }
    }
    ctx->pc = 0x2422B8u;
    // 0x2422b8: 0x531021
    ctx->pc = 0x2422b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2422bc: 0xc4400000
    ctx->pc = 0x2422bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2422c0: 0x10000004
    ctx->pc = 0x2422C0u;
    {
        const bool branch_taken_0x2422c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2422C4u;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x2422c0) {
            ctx->pc = 0x2422D4u;
            goto label_2422d4;
        }
    }
    ctx->pc = 0x2422C8u;
label_2422c8:
    // 0x2422c8: 0x531021
    ctx->pc = 0x2422c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2422cc: 0xc4400000
    ctx->pc = 0x2422ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2422d0: 0x4600a501
    ctx->pc = 0x2422d0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2422d4:
    // 0x2422d4: 0x4614c034
    ctx->pc = 0x2422d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2422d8: 0x45000003
    ctx->pc = 0x2422D8u;
    {
        const bool branch_taken_0x2422d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2422d8) {
            ctx->pc = 0x2422E8u;
            goto label_2422e8;
        }
    }
    ctx->pc = 0x2422E0u;
    // 0x2422e0: 0x10000006
    ctx->pc = 0x2422E0u;
    {
        const bool branch_taken_0x2422e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2422E4u;
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
        if (branch_taken_0x2422e0) {
            ctx->pc = 0x2422FCu;
            goto label_2422fc;
        }
    }
    ctx->pc = 0x2422E8u;
label_2422e8:
    // 0x2422e8: 0x4617a036
    ctx->pc = 0x2422e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2422ec: 0x0
    ctx->pc = 0x2422ecu;
    // NOP
    // 0x2422f0: 0x45000002
    ctx->pc = 0x2422F0u;
    {
        const bool branch_taken_0x2422f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2422F4u;
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x2422f0) {
            ctx->pc = 0x2422FCu;
            goto label_2422fc;
        }
    }
    ctx->pc = 0x2422F8u;
    // 0x2422f8: 0x4615a000
    ctx->pc = 0x2422f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_2422fc:
    // 0x2422fc: 0x46000506
    ctx->pc = 0x2422fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x242300: 0xc6000040
    ctx->pc = 0x242300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242304: 0xe7a00000
    ctx->pc = 0x242304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x242308: 0xc6010044
    ctx->pc = 0x242308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24230c: 0xc6000048
    ctx->pc = 0x24230cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242310: 0xe7a00008
    ctx->pc = 0x242310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x242314: 0xc600024c
    ctx->pc = 0x242314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242318: 0x46190000
    ctx->pc = 0x242318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x24231c: 0x46010000
    ctx->pc = 0x24231cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x242320: 0xe7a00004
    ctx->pc = 0x242320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x242324: 0xc0b9e4a
    ctx->pc = 0x242324u;
    SET_GPR_U32(ctx, 31, 0x24232Cu);
    ctx->pc = 0x242328u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24232Cu; }
    }
    if (ctx->pc != 0x24232Cu) { return; }
    ctx->pc = 0x24232Cu;
    // 0x24232c: 0x46160002
    ctx->pc = 0x24232cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x242330: 0xc7a10000
    ctx->pc = 0x242330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242334: 0x46010000
    ctx->pc = 0x242334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x242338: 0xe7a00000
    ctx->pc = 0x242338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24233c: 0xc0b9dce
    ctx->pc = 0x24233Cu;
    SET_GPR_U32(ctx, 31, 0x242344u);
    ctx->pc = 0x242340u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242344u; }
    }
    if (ctx->pc != 0x242344u) { return; }
    ctx->pc = 0x242344u;
    // 0x242344: 0x46160002
    ctx->pc = 0x242344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x242348: 0xc7a10008
    ctx->pc = 0x242348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24234c: 0x46010000
    ctx->pc = 0x24234cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x242350: 0xe7a00008
    ctx->pc = 0x242350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x242354: 0xc6000260
    ctx->pc = 0x242354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242358: 0x4600a041
    ctx->pc = 0x242358u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x24235c: 0x4601c034
    ctx->pc = 0x24235cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242360: 0x45000003
    ctx->pc = 0x242360u;
    {
        const bool branch_taken_0x242360 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242360) {
            ctx->pc = 0x242370u;
            goto label_242370;
        }
    }
    ctx->pc = 0x242368u;
    // 0x242368: 0x10000006
    ctx->pc = 0x242368u;
    {
        const bool branch_taken_0x242368 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24236Cu;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
        if (branch_taken_0x242368) {
            ctx->pc = 0x242384u;
            goto label_242384;
        }
    }
    ctx->pc = 0x242370u;
label_242370:
    // 0x242370: 0x46170836
    ctx->pc = 0x242370u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242374: 0x0
    ctx->pc = 0x242374u;
    // NOP
    // 0x242378: 0x45030001
    ctx->pc = 0x242378u;
    {
        const bool branch_taken_0x242378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x242378) {
            ctx->pc = 0x24237Cu;
            ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
            ctx->pc = 0x242380u;
            goto label_242380;
        }
    }
    ctx->pc = 0x242380u;
label_242380:
    // 0x242380: 0xc6000260
    ctx->pc = 0x242380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242384:
    // 0x242384: 0xc6020264
    ctx->pc = 0x242384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x242388: 0x46020001
    ctx->pc = 0x242388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x24238c: 0x46000005
    ctx->pc = 0x24238cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x242390: 0x3c013d0e
    ctx->pc = 0x242390u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15630 << 16));
    // 0x242394: 0x3421fa36
    ctx->pc = 0x242394u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x242398: 0x44811800
    ctx->pc = 0x242398u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x24239c: 0x46001834
    ctx->pc = 0x24239cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2423a0: 0x0
    ctx->pc = 0x2423a0u;
    // NOP
    // 0x2423a4: 0x45020008
    ctx->pc = 0x2423A4u;
    {
        const bool branch_taken_0x2423a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2423a4) {
            ctx->pc = 0x2423A8u;
            ctx->f[1] = FPU_ABS_S(ctx->f[1]);
            ctx->pc = 0x2423C8u;
            goto label_2423c8;
        }
    }
    ctx->pc = 0x2423ACu;
    // 0x2423ac: 0x4602a001
    ctx->pc = 0x2423acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x2423b0: 0x46000005
    ctx->pc = 0x2423b0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2423b4: 0x46030036
    ctx->pc = 0x2423b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2423b8: 0x0
    ctx->pc = 0x2423b8u;
    // NOP
    // 0x2423bc: 0x4503000f
    ctx->pc = 0x2423BCu;
    {
        const bool branch_taken_0x2423bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2423bc) {
            ctx->pc = 0x2423C0u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x2423FCu;
            goto label_2423fc;
        }
    }
    ctx->pc = 0x2423C4u;
    // 0x2423c4: 0x46000845
    ctx->pc = 0x2423c4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_2423c8:
    // 0x2423c8: 0x3c014046
    ctx->pc = 0x2423c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16454 << 16));
    // 0x2423cc: 0x3421d3f2
    ctx->pc = 0x2423ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 54258));
    // 0x2423d0: 0x44810000
    ctx->pc = 0x2423d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2423d4: 0x46010036
    ctx->pc = 0x2423d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2423d8: 0x0
    ctx->pc = 0x2423d8u;
    // NOP
    // 0x2423dc: 0x45030007
    ctx->pc = 0x2423DCu;
    {
        const bool branch_taken_0x2423dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2423dc) {
            ctx->pc = 0x2423E0u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x2423FCu;
            goto label_2423fc;
        }
    }
    ctx->pc = 0x2423E4u;
    // 0x2423e4: 0x3a0202d
    ctx->pc = 0x2423e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2423e8: 0xc08f296
    ctx->pc = 0x2423E8u;
    SET_GPR_U32(ctx, 31, 0x2423F0u);
    ctx->pc = 0x2423ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23CA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_vacancy_0x23ca58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2423F0u; }
    }
    if (ctx->pc != 0x2423F0u) { return; }
    ctx->pc = 0x2423F0u;
    // 0x2423f0: 0x14400006
    ctx->pc = 0x2423F0u;
    {
        const bool branch_taken_0x2423f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2423F4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 9));
        if (branch_taken_0x2423f0) {
            ctx->pc = 0x24240Cu;
            goto label_24240c;
        }
    }
    ctx->pc = 0x2423F8u;
    // 0x2423f8: 0x26310001
    ctx->pc = 0x2423f8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2423fc:
    // 0x2423fc: 0x2a220009
    ctx->pc = 0x2423fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 9));
    // 0x242400: 0x5440ffab
    ctx->pc = 0x242400u;
    {
        const bool branch_taken_0x242400 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x242400) {
            ctx->pc = 0x242404u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
            ctx->pc = 0x2422B0u;
            goto label_2422b0;
        }
    }
    ctx->pc = 0x242408u;
    // 0x242408: 0x2a220009
    ctx->pc = 0x242408u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 9));
label_24240c:
    // 0x24240c: 0x54400003
    ctx->pc = 0x24240Cu;
    {
        const bool branch_taken_0x24240c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24240c) {
            ctx->pc = 0x242410u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 17));
            ctx->pc = 0x24241Cu;
            goto label_24241c;
        }
    }
    ctx->pc = 0x242414u;
    // 0x242414: 0x3c02003c
    ctx->pc = 0x242414u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x242418: 0xc4541c6c
    ctx->pc = 0x242418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_24241c:
    // 0x24241c: 0xc6000260
    ctx->pc = 0x24241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242420: 0xe6000264
    ctx->pc = 0x242420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
    // 0x242424: 0xe6140260
    ctx->pc = 0x242424u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
label_242428:
    // 0x242428: 0x200202d
    ctx->pc = 0x242428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24242c: 0x3c013f80
    ctx->pc = 0x24242cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x242430: 0x44816000
    ctx->pc = 0x242430u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x242434: 0xc08f14c
    ctx->pc = 0x242434u;
    SET_GPR_U32(ctx, 31, 0x24243Cu);
    ctx->pc = 0x242438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24243Cu; }
    }
    if (ctx->pc != 0x24243Cu) { return; }
    ctx->pc = 0x24243Cu;
    // 0x24243c: 0xc08f20c
    ctx->pc = 0x24243Cu;
    SET_GPR_U32(ctx, 31, 0x242444u);
    ctx->pc = 0x242440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242444u; }
    }
    if (ctx->pc != 0x242444u) { return; }
    ctx->pc = 0x242444u;
    // 0x242444: 0xe6000258
    ctx->pc = 0x242444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x242448: 0xc090e82
    ctx->pc = 0x242448u;
    SET_GPR_U32(ctx, 31, 0x242450u);
    ctx->pc = 0x24244Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242450u; }
    }
    if (ctx->pc != 0x242450u) { return; }
    ctx->pc = 0x242450u;
    // 0x242450: 0x40034800
    ctx->pc = 0x242450u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x242454: 0x3c02003a
    ctx->pc = 0x242454u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x242458: 0x8c4421d0
    ctx->pc = 0x242458u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x24245c: 0x8c820168
    ctx->pc = 0x24245cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 360)));
    // 0x242460: 0x621823
    ctx->pc = 0x242460u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242464: 0x8c820160
    ctx->pc = 0x242464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x242468: 0x621821
    ctx->pc = 0x242468u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24246c: 0xac830160
    ctx->pc = 0x24246cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 3));
    // 0x242470: 0x8c820164
    ctx->pc = 0x242470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 356)));
    // 0x242474: 0x24420001
    ctx->pc = 0x242474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x242478: 0xac820164
    ctx->pc = 0x242478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 2));
    // 0x24247c: 0xdfbf0050
    ctx->pc = 0x24247cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_242480:
    // 0x242480: 0xdfb30040
    ctx->pc = 0x242480u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x242484: 0xdfb20030
    ctx->pc = 0x242484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242488: 0xdfb10020
    ctx->pc = 0x242488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24248c: 0xdfb00010
    ctx->pc = 0x24248cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242490: 0xc7b90088
    ctx->pc = 0x242490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x242494: 0xc7b80080
    ctx->pc = 0x242494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x242498: 0xc7b70078
    ctx->pc = 0x242498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x24249c: 0xc7b60070
    ctx->pc = 0x24249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2424a0: 0xc7b50068
    ctx->pc = 0x2424a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2424a4: 0xc7b40060
    ctx->pc = 0x2424a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2424a8: 0x3e00008
    ctx->pc = 0x2424A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2424ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2421FCu: goto label_2421fc;
            case 0x242200u: goto label_242200;
            case 0x242214u: goto label_242214;
            case 0x242240u: goto label_242240;
            case 0x242258u: goto label_242258;
            case 0x2422B0u: goto label_2422b0;
            case 0x2422C8u: goto label_2422c8;
            case 0x2422D4u: goto label_2422d4;
            case 0x2422E8u: goto label_2422e8;
            case 0x2422FCu: goto label_2422fc;
            case 0x242370u: goto label_242370;
            case 0x242380u: goto label_242380;
            case 0x242384u: goto label_242384;
            case 0x2423C8u: goto label_2423c8;
            case 0x2423FCu: goto label_2423fc;
            case 0x24240Cu: goto label_24240c;
            case 0x24241Cu: goto label_24241c;
            case 0x242428u: goto label_242428;
            case 0x242480u: goto label_242480;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2424B0u;
}
