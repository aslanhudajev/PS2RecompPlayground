#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ffsin
// Address: 0x2d7258 - 0x2d73e0
void ffsin_0x2d7258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d7258u;

    // 0x2d7258: 0x27bdffe0
    ctx->pc = 0x2d7258u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d725c: 0xffbf0010
    ctx->pc = 0x2d725cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d7260: 0xe7ac0000
    ctx->pc = 0x2d7260u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d7264: 0xdfa20000
    ctx->pc = 0x2d7264u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7268: 0x21278
    ctx->pc = 0x2d7268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x2d726c: 0x2103f
    ctx->pc = 0x2d726cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2d7270: 0x304200ff
    ctx->pc = 0x2d7270u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x2d7274: 0x240300ff
    ctx->pc = 0x2d7274u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d7278: 0x14430007
    ctx->pc = 0x2D7278u;
    {
        const bool branch_taken_0x2d7278 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2D727Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2d7278) {
            ctx->pc = 0x2D7298u;
            goto label_2d7298;
        }
    }
    ctx->pc = 0x2D7280u;
    // 0x2d7280: 0x3c04003b
    ctx->pc = 0x2d7280u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d7284: 0xc0b492e
    ctx->pc = 0x2D7284u;
    SET_GPR_U32(ctx, 31, 0x2D728Cu);
    ctx->pc = 0x2D7288u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32000));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D728Cu; }
    }
    if (ctx->pc != 0x2D728Cu) { return; }
    ctx->pc = 0x2D728Cu;
    // 0x2d728c: 0x44800000
    ctx->pc = 0x2d728cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d7290: 0x10000051
    ctx->pc = 0x2D7290u;
    {
        const bool branch_taken_0x2d7290 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D7294u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2d7290) {
            ctx->pc = 0x2D73D8u;
            goto label_2d73d8;
        }
    }
    ctx->pc = 0x2D7298u;
label_2d7298:
    // 0x2d7298: 0x44800800
    ctx->pc = 0x2d7298u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x2d729c: 0x460008c6
    ctx->pc = 0x2d729cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x2d72a0: 0x46010034
    ctx->pc = 0x2d72a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d72a4: 0x0
    ctx->pc = 0x2d72a4u;
    // NOP
    // 0x2d72a8: 0x4500000d
    ctx->pc = 0x2D72A8u;
    {
        const bool branch_taken_0x2d72a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D72ACu;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2d72a8) {
            ctx->pc = 0x2D72E0u;
            goto label_2d72e0;
        }
    }
    ctx->pc = 0x2D72B0u;
    // 0x2d72b0: 0x3c0140c9
    ctx->pc = 0x2d72b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2d72b4: 0x34210fdb
    ctx->pc = 0x2d72b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d72b8: 0x44810800
    ctx->pc = 0x2d72b8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d72bc: 0x0
    ctx->pc = 0x2d72bcu;
    // NOP
label_2d72c0:
    // 0x2d72c0: 0x46011000
    ctx->pc = 0x2d72c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2d72c4: 0x46000086
    ctx->pc = 0x2d72c4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2d72c8: 0x46031034
    ctx->pc = 0x2d72c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d72cc: 0x0
    ctx->pc = 0x2d72ccu;
    // NOP
    // 0x2d72d0: 0x0
    ctx->pc = 0x2d72d0u;
    // NOP
    // 0x2d72d4: 0x4501fffa
    ctx->pc = 0x2D72D4u;
    {
        const bool branch_taken_0x2d72d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d72d4) {
            ctx->pc = 0x2D72C0u;
            goto label_2d72c0;
        }
    }
    ctx->pc = 0x2D72DCu;
    // 0x2d72dc: 0xe7a00000
    ctx->pc = 0x2d72dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2d72e0:
    // 0x2d72e0: 0x3c0140c9
    ctx->pc = 0x2d72e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2d72e4: 0x34210fdb
    ctx->pc = 0x2d72e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d72e8: 0x44810800
    ctx->pc = 0x2d72e8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d72ec: 0xc7a00000
    ctx->pc = 0x2d72ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d72f0: 0x46000836
    ctx->pc = 0x2d72f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d72f4: 0x0
    ctx->pc = 0x2d72f4u;
    // NOP
    // 0x2d72f8: 0x4500000a
    ctx->pc = 0x2D72F8u;
    {
        const bool branch_taken_0x2d72f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D72FCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x2d72f8) {
            ctx->pc = 0x2D7324u;
            goto label_2d7324;
        }
    }
    ctx->pc = 0x2D7300u;
label_2d7300:
    // 0x2d7300: 0x46010001
    ctx->pc = 0x2d7300u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d7304: 0x46000836
    ctx->pc = 0x2d7304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7308: 0x0
    ctx->pc = 0x2d7308u;
    // NOP
    // 0x2d730c: 0x0
    ctx->pc = 0x2d730cu;
    // NOP
    // 0x2d7310: 0x0
    ctx->pc = 0x2d7310u;
    // NOP
    // 0x2d7314: 0x4501fffa
    ctx->pc = 0x2D7314u;
    {
        const bool branch_taken_0x2d7314 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7314) {
            ctx->pc = 0x2D7300u;
            goto label_2d7300;
        }
    }
    ctx->pc = 0x2D731Cu;
    // 0x2d731c: 0xe7a00000
    ctx->pc = 0x2d731cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d7320: 0xc7ac0000
    ctx->pc = 0x2d7320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2d7324:
    // 0x2d7324: 0x3c013fc9
    ctx->pc = 0x2d7324u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x2d7328: 0x34210fdb
    ctx->pc = 0x2d7328u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d732c: 0x44810000
    ctx->pc = 0x2d732cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d7330: 0x46006034
    ctx->pc = 0x2d7330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7334: 0x0
    ctx->pc = 0x2d7334u;
    // NOP
    // 0x2d7338: 0x45000005
    ctx->pc = 0x2D7338u;
    {
        const bool branch_taken_0x2d7338 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D733Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2d7338) {
            ctx->pc = 0x2D7350u;
            goto label_2d7350;
        }
    }
    ctx->pc = 0x2D7340u;
    // 0x2d7340: 0xc0b5c7e
    ctx->pc = 0x2D7340u;
    SET_GPR_U32(ctx, 31, 0x2D7348u);
    ctx->pc = 0x2D71F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SIN_POLY_0x2d71f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7348u; }
    }
    if (ctx->pc != 0x2D7348u) { return; }
    ctx->pc = 0x2D7348u;
    // 0x2d7348: 0x10000023
    ctx->pc = 0x2D7348u;
    {
        const bool branch_taken_0x2d7348 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D734Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2d7348) {
            ctx->pc = 0x2D73D8u;
            goto label_2d73d8;
        }
    }
    ctx->pc = 0x2D7350u;
label_2d7350:
    // 0x2d7350: 0x3c014049
    ctx->pc = 0x2d7350u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2d7354: 0x34210fdb
    ctx->pc = 0x2d7354u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d7358: 0x44810800
    ctx->pc = 0x2d7358u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d735c: 0x46010034
    ctx->pc = 0x2d735cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7360: 0x0
    ctx->pc = 0x2d7360u;
    // NOP
    // 0x2d7364: 0x45020007
    ctx->pc = 0x2D7364u;
    {
        const bool branch_taken_0x2d7364 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7364) {
            ctx->pc = 0x2D7368u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x2D7384u;
            goto label_2d7384;
        }
    }
    ctx->pc = 0x2D736Cu;
    // 0x2d736c: 0x46000801
    ctx->pc = 0x2d736cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7370: 0xe7a00000
    ctx->pc = 0x2d7370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d7374: 0xc0b5c7e
    ctx->pc = 0x2D7374u;
    SET_GPR_U32(ctx, 31, 0x2D737Cu);
    ctx->pc = 0x2D7378u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2D71F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SIN_POLY_0x2d71f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D737Cu; }
    }
    if (ctx->pc != 0x2D737Cu) { return; }
    ctx->pc = 0x2D737Cu;
    // 0x2d737c: 0x10000016
    ctx->pc = 0x2D737Cu;
    {
        const bool branch_taken_0x2d737c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D7380u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2d737c) {
            ctx->pc = 0x2D73D8u;
            goto label_2d73d8;
        }
    }
    ctx->pc = 0x2D7384u;
label_2d7384:
    // 0x2d7384: 0x3c014096
    ctx->pc = 0x2d7384u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16534 << 16));
    // 0x2d7388: 0x3421cbe4
    ctx->pc = 0x2d7388u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52196));
    // 0x2d738c: 0x44810000
    ctx->pc = 0x2d738cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d7390: 0x46000834
    ctx->pc = 0x2d7390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7394: 0x0
    ctx->pc = 0x2d7394u;
    // NOP
    // 0x2d7398: 0x45020006
    ctx->pc = 0x2D7398u;
    {
        const bool branch_taken_0x2d7398 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7398) {
            ctx->pc = 0x2D739Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x2D73B4u;
            goto label_2d73b4;
        }
    }
    ctx->pc = 0x2D73A0u;
    // 0x2d73a0: 0x3c014049
    ctx->pc = 0x2d73a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2d73a4: 0x34210fdb
    ctx->pc = 0x2d73a4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d73a8: 0x44810000
    ctx->pc = 0x2d73a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d73ac: 0x10000005
    ctx->pc = 0x2D73ACu;
    {
        const bool branch_taken_0x2d73ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D73B0u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2d73ac) {
            ctx->pc = 0x2D73C4u;
            goto label_2d73c4;
        }
    }
    ctx->pc = 0x2D73B4u;
label_2d73b4:
    // 0x2d73b4: 0x3c0140c9
    ctx->pc = 0x2d73b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2d73b8: 0x34210fdb
    ctx->pc = 0x2d73b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d73bc: 0x44810000
    ctx->pc = 0x2d73bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d73c0: 0x46010001
    ctx->pc = 0x2d73c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2d73c4:
    // 0x2d73c4: 0xe7a00000
    ctx->pc = 0x2d73c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d73c8: 0xc0b5c7e
    ctx->pc = 0x2D73C8u;
    SET_GPR_U32(ctx, 31, 0x2D73D0u);
    ctx->pc = 0x2D73CCu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2D71F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SIN_POLY_0x2d71f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D73D0u; }
    }
    if (ctx->pc != 0x2D73D0u) { return; }
    ctx->pc = 0x2D73D0u;
    // 0x2d73d0: 0x46000007
    ctx->pc = 0x2d73d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d73d4: 0xdfbf0010
    ctx->pc = 0x2d73d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d73d8:
    // 0x2d73d8: 0x3e00008
    ctx->pc = 0x2D73D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D73DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D7298u: goto label_2d7298;
            case 0x2D72C0u: goto label_2d72c0;
            case 0x2D72E0u: goto label_2d72e0;
            case 0x2D7300u: goto label_2d7300;
            case 0x2D7324u: goto label_2d7324;
            case 0x2D7350u: goto label_2d7350;
            case 0x2D7384u: goto label_2d7384;
            case 0x2D73B4u: goto label_2d73b4;
            case 0x2D73C4u: goto label_2d73c4;
            case 0x2D73D8u: goto label_2d73d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D73E0u;
}
