#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterExpNodeColSub
// Address: 0x29a238 - 0x29a3bc
void CritterExpNodeColSub_0x29a238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29a238u;

    // 0x29a238: 0x27bdff60
    ctx->pc = 0x29a238u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29a23c: 0xffbf0070
    ctx->pc = 0x29a23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x29a240: 0xffb60060
    ctx->pc = 0x29a240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x29a244: 0xffb50050
    ctx->pc = 0x29a244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29a248: 0xffb40040
    ctx->pc = 0x29a248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29a24c: 0xffb30030
    ctx->pc = 0x29a24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29a250: 0xffb20020
    ctx->pc = 0x29a250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29a254: 0xffb10010
    ctx->pc = 0x29a254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29a258: 0xffb00000
    ctx->pc = 0x29a258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a25c: 0xe7b60090
    ctx->pc = 0x29a25cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x29a260: 0xe7b50088
    ctx->pc = 0x29a260u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x29a264: 0xe7b40080
    ctx->pc = 0x29a264u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x29a268: 0x80982d
    ctx->pc = 0x29a268u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a26c: 0xa0a02d
    ctx->pc = 0x29a26cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a270: 0x46006546
    ctx->pc = 0x29a270u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x29a274: 0xc0a82d
    ctx->pc = 0x29a274u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a278: 0x46006d06
    ctx->pc = 0x29a278u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x29a27c: 0xe0882d
    ctx->pc = 0x29a27cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a280: 0x8e620004
    ctx->pc = 0x29a280u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x29a284: 0x84420118
    ctx->pc = 0x29a284u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x29a288: 0x1840003c
    ctx->pc = 0x29A288u;
    {
        const bool branch_taken_0x29a288 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29A28Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29a288) {
            ctx->pc = 0x29A37Cu;
            goto label_29a37c;
        }
    }
    ctx->pc = 0x29A290u;
    // 0x29a290: 0x24160060
    ctx->pc = 0x29a290u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 96));
    // 0x29a294: 0x3c01bf80
    ctx->pc = 0x29a294u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x29a298: 0x4481b000
    ctx->pc = 0x29a298u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x29a29c: 0x2561018
    ctx->pc = 0x29a29cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_29a2a0:
    // 0x29a2a0: 0x24420540
    ctx->pc = 0x29a2a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1344));
    // 0x29a2a4: 0x2628021
    ctx->pc = 0x29a2a4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x29a2a8: 0x8e020004
    ctx->pc = 0x29a2a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29a2ac: 0x5040002e
    ctx->pc = 0x29A2ACu;
    {
        const bool branch_taken_0x29a2ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29a2ac) {
            ctx->pc = 0x29A2B0u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29A368u;
            goto label_29a368;
        }
    }
    ctx->pc = 0x29A2B4u;
    // 0x29a2b4: 0xc601005c
    ctx->pc = 0x29a2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a2b8: 0xc6000058
    ctx->pc = 0x29a2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a2bc: 0x46010036
    ctx->pc = 0x29a2bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a2c0: 0x0
    ctx->pc = 0x29a2c0u;
    // NOP
    // 0x29a2c4: 0x45030028
    ctx->pc = 0x29A2C4u;
    {
        const bool branch_taken_0x29a2c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a2c4) {
            ctx->pc = 0x29A2C8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29A368u;
            goto label_29a368;
        }
    }
    ctx->pc = 0x29A2CCu;
    // 0x29a2cc: 0xc6000040
    ctx->pc = 0x29a2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a2d0: 0xc6810000
    ctx->pc = 0x29a2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a2d4: 0x46010001
    ctx->pc = 0x29a2d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29a2d8: 0xe6200000
    ctx->pc = 0x29a2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x29a2dc: 0xc6000044
    ctx->pc = 0x29a2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a2e0: 0xc6810004
    ctx->pc = 0x29a2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a2e4: 0x46010001
    ctx->pc = 0x29a2e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29a2e8: 0xe6200004
    ctx->pc = 0x29a2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x29a2ec: 0xc6000048
    ctx->pc = 0x29a2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a2f0: 0xc6810008
    ctx->pc = 0x29a2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a2f4: 0x46010001
    ctx->pc = 0x29a2f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29a2f8: 0xe6200008
    ctx->pc = 0x29a2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x29a2fc: 0xc0b58fc
    ctx->pc = 0x29A2FCu;
    SET_GPR_U32(ctx, 31, 0x29A304u);
    ctx->pc = 0x29A300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A304u; }
    }
    if (ctx->pc != 0x29A304u) { return; }
    ctx->pc = 0x29A304u;
    // 0x29a304: 0x8e020000
    ctx->pc = 0x29a304u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a308: 0xc441002c
    ctx->pc = 0x29a308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a30c: 0x4601a840
    ctx->pc = 0x29a30cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x29a310: 0x46000834
    ctx->pc = 0x29a310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a314: 0x0
    ctx->pc = 0x29a314u;
    // NOP
    // 0x29a318: 0x45030013
    ctx->pc = 0x29A318u;
    {
        const bool branch_taken_0x29a318 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a318) {
            ctx->pc = 0x29A31Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29A368u;
            goto label_29a368;
        }
    }
    ctx->pc = 0x29A320u;
    // 0x29a320: 0x4614b034
    ctx->pc = 0x29a320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a324: 0x0
    ctx->pc = 0x29a324u;
    // NOP
    // 0x29a328: 0x4502000d
    ctx->pc = 0x29A328u;
    {
        const bool branch_taken_0x29a328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a328) {
            ctx->pc = 0x29A32Cu;
            WRITE16(ADD32(GPR_U32(ctx, 19), 2880), (uint16_t)GPR_U32(ctx, 18));
            ctx->pc = 0x29A360u;
            goto label_29a360;
        }
    }
    ctx->pc = 0x29A330u;
    // 0x29a330: 0xc6220000
    ctx->pc = 0x29a330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a334: 0xc6a00000
    ctx->pc = 0x29a334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a338: 0x46001082
    ctx->pc = 0x29a338u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29a33c: 0xc6200008
    ctx->pc = 0x29a33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a340: 0xc6a10008
    ctx->pc = 0x29a340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a344: 0x46010002
    ctx->pc = 0x29a344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29a348: 0x46001080
    ctx->pc = 0x29a348u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a34c: 0x46141034
    ctx->pc = 0x29a34cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a350: 0x0
    ctx->pc = 0x29a350u;
    // NOP
    // 0x29a354: 0x45030004
    ctx->pc = 0x29A354u;
    {
        const bool branch_taken_0x29a354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a354) {
            ctx->pc = 0x29A358u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29A368u;
            goto label_29a368;
        }
    }
    ctx->pc = 0x29A35Cu;
    // 0x29a35c: 0xa6720b40
    ctx->pc = 0x29a35cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2880), (uint16_t)GPR_U32(ctx, 18));
label_29a360:
    // 0x29a360: 0x10000009
    ctx->pc = 0x29A360u;
    {
        const bool branch_taken_0x29a360 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29A364u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x29a360) {
            ctx->pc = 0x29A388u;
            goto label_29a388;
        }
    }
    ctx->pc = 0x29A368u;
label_29a368:
    // 0x29a368: 0x8e620004
    ctx->pc = 0x29a368u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x29a36c: 0x84420118
    ctx->pc = 0x29a36cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x29a370: 0x242102a
    ctx->pc = 0x29a370u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x29a374: 0x1440ffca
    ctx->pc = 0x29A374u;
    {
        const bool branch_taken_0x29a374 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29A378u;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x29a374) {
            ctx->pc = 0x29A2A0u;
            goto label_29a2a0;
        }
    }
    ctx->pc = 0x29A37Cu;
label_29a37c:
    // 0x29a37c: 0x2402ffff
    ctx->pc = 0x29a37cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29a380: 0xa6620b40
    ctx->pc = 0x29a380u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2880), (uint16_t)GPR_U32(ctx, 2));
    // 0x29a384: 0x102d
    ctx->pc = 0x29a384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a388:
    // 0x29a388: 0xdfbf0070
    ctx->pc = 0x29a388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29a38c: 0xdfb60060
    ctx->pc = 0x29a38cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29a390: 0xdfb50050
    ctx->pc = 0x29a390u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a394: 0xdfb40040
    ctx->pc = 0x29a394u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a398: 0xdfb30030
    ctx->pc = 0x29a398u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a39c: 0xdfb20020
    ctx->pc = 0x29a39cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a3a0: 0xdfb10010
    ctx->pc = 0x29a3a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a3a4: 0xdfb00000
    ctx->pc = 0x29a3a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a3a8: 0xc7b60090
    ctx->pc = 0x29a3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29a3ac: 0xc7b50088
    ctx->pc = 0x29a3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29a3b0: 0xc7b40080
    ctx->pc = 0x29a3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29a3b4: 0x3e00008
    ctx->pc = 0x29A3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A3B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A2A0u: goto label_29a2a0;
            case 0x29A360u: goto label_29a360;
            case 0x29A368u: goto label_29a368;
            case 0x29A37Cu: goto label_29a37c;
            case 0x29A388u: goto label_29a388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A3BCu;
}
