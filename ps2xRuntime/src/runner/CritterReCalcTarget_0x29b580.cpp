#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterReCalcTarget
// Address: 0x29b580 - 0x29b6d8
void CritterReCalcTarget_0x29b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29b580u;

    // 0x29b580: 0x27bdffb0
    ctx->pc = 0x29b580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29b584: 0xffbf0030
    ctx->pc = 0x29b584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29b588: 0xffb10020
    ctx->pc = 0x29b588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29b58c: 0xffb00010
    ctx->pc = 0x29b58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29b590: 0xe7b40040
    ctx->pc = 0x29b590u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29b594: 0xa0802d
    ctx->pc = 0x29b594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b598: 0x24020030
    ctx->pc = 0x29b598u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x29b59c: 0xc23018
    ctx->pc = 0x29b59cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29b5a0: 0x24c60140
    ctx->pc = 0x29b5a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 320));
    // 0x29b5a4: 0x12000013
    ctx->pc = 0x29B5A4u;
    {
        const bool branch_taken_0x29b5a4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x29B5A8u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        if (branch_taken_0x29b5a4) {
            ctx->pc = 0x29B5F4u;
            goto label_29b5f4;
        }
    }
    ctx->pc = 0x29B5ACu;
    // 0x29b5ac: 0xc481011c
    ctx->pc = 0x29b5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b5b0: 0xc6000010
    ctx->pc = 0x29b5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b5b4: 0x46000834
    ctx->pc = 0x29b5b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b5b8: 0x45010009
    ctx->pc = 0x29B5B8u;
    {
        const bool branch_taken_0x29b5b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b5b8) {
            ctx->pc = 0x29B5E0u;
            goto label_29b5e0;
        }
    }
    ctx->pc = 0x29B5C0u;
    // 0x29b5c0: 0xc6010014
    ctx->pc = 0x29b5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b5c4: 0x46010034
    ctx->pc = 0x29b5c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b5c8: 0x4500000a
    ctx->pc = 0x29B5C8u;
    {
        const bool branch_taken_0x29b5c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b5c8) {
            ctx->pc = 0x29B5F4u;
            goto label_29b5f4;
        }
    }
    ctx->pc = 0x29B5D0u;
    // 0x29b5d0: 0xc480011c
    ctx->pc = 0x29b5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b5d4: 0x46000836
    ctx->pc = 0x29b5d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b5d8: 0x45000006
    ctx->pc = 0x29B5D8u;
    {
        const bool branch_taken_0x29b5d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b5d8) {
            ctx->pc = 0x29B5F4u;
            goto label_29b5f4;
        }
    }
    ctx->pc = 0x29B5E0u;
label_29b5e0:
    // 0x29b5e0: 0x3c016282
    ctx->pc = 0x29b5e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25218 << 16));
    // 0x29b5e4: 0x34211ab1
    ctx->pc = 0x29b5e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 6833));
    // 0x29b5e8: 0x44810000
    ctx->pc = 0x29b5e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29b5ec: 0x10000035
    ctx->pc = 0x29B5ECu;
    {
        const bool branch_taken_0x29b5ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29B5F0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x29b5ec) {
            ctx->pc = 0x29B6C4u;
            goto label_29b6c4;
        }
    }
    ctx->pc = 0x29B5F4u;
label_29b5f4:
    // 0x29b5f4: 0x12000030
    ctx->pc = 0x29B5F4u;
    {
        const bool branch_taken_0x29b5f4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x29B5F8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x29b5f4) {
            ctx->pc = 0x29B6B8u;
            goto label_29b6b8;
        }
    }
    ctx->pc = 0x29B5FCu;
    // 0x29b5fc: 0xc6000000
    ctx->pc = 0x29b5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b600: 0x4600a034
    ctx->pc = 0x29b600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b604: 0x0
    ctx->pc = 0x29b604u;
    // NOP
    // 0x29b608: 0x45000006
    ctx->pc = 0x29B608u;
    {
        const bool branch_taken_0x29b608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B60Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x29b608) {
            ctx->pc = 0x29B624u;
            goto label_29b624;
        }
    }
    ctx->pc = 0x29B610u;
    // 0x29b610: 0x3c01625b
    ctx->pc = 0x29b610u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25179 << 16));
    // 0x29b614: 0x34210243
    ctx->pc = 0x29b614u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 579));
    // 0x29b618: 0x44810000
    ctx->pc = 0x29b618u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29b61c: 0x1000002a
    ctx->pc = 0x29B61Cu;
    {
        const bool branch_taken_0x29b61c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29B620u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x29b61c) {
            ctx->pc = 0x29B6C8u;
            goto label_29b6c8;
        }
    }
    ctx->pc = 0x29B624u;
label_29b624:
    // 0x29b624: 0xc6010004
    ctx->pc = 0x29b624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b628: 0x44800000
    ctx->pc = 0x29b628u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29b62c: 0x46010034
    ctx->pc = 0x29b62cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b630: 0x0
    ctx->pc = 0x29b630u;
    // NOP
    // 0x29b634: 0x4502000b
    ctx->pc = 0x29B634u;
    {
        const bool branch_taken_0x29b634 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b634) {
            ctx->pc = 0x29B638u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x29B664u;
            goto label_29b664;
        }
    }
    ctx->pc = 0x29B63Cu;
    // 0x29b63c: 0x46140834
    ctx->pc = 0x29b63cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b640: 0x0
    ctx->pc = 0x29b640u;
    // NOP
    // 0x29b644: 0x45000006
    ctx->pc = 0x29B644u;
    {
        const bool branch_taken_0x29b644 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B648u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x29b644) {
            ctx->pc = 0x29B660u;
            goto label_29b660;
        }
    }
    ctx->pc = 0x29B64Cu;
    // 0x29b64c: 0x3c01625d
    ctx->pc = 0x29b64cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)25181 << 16));
    // 0x29b650: 0x34212d60
    ctx->pc = 0x29b650u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 11616));
    // 0x29b654: 0x44810000
    ctx->pc = 0x29b654u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29b658: 0x1000001b
    ctx->pc = 0x29B658u;
    {
        const bool branch_taken_0x29b658 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29B65Cu;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x29b658) {
            ctx->pc = 0x29B6C8u;
            goto label_29b6c8;
        }
    }
    ctx->pc = 0x29B660u;
label_29b660:
    // 0x29b660: 0xc60c0008
    ctx->pc = 0x29b660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_29b664:
    // 0x29b664: 0x24840030
    ctx->pc = 0x29b664u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 48));
    // 0x29b668: 0x3a0282d
    ctx->pc = 0x29b668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b66c: 0xc0b57e6
    ctx->pc = 0x29B66Cu;
    SET_GPR_U32(ctx, 31, 0x29B674u);
    ctx->pc = 0x29B670u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B674u; }
    }
    if (ctx->pc != 0x29B674u) { return; }
    ctx->pc = 0x29B674u;
    // 0x29b674: 0xafa00004
    ctx->pc = 0x29b674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x29b678: 0xc0b58ca
    ctx->pc = 0x29B678u;
    SET_GPR_U32(ctx, 31, 0x29B680u);
    ctx->pc = 0x29B67Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlowNormalVector_0x2d6328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B680u; }
    }
    if (ctx->pc != 0x29B680u) { return; }
    ctx->pc = 0x29B680u;
    // 0x29b680: 0xc6220020
    ctx->pc = 0x29b680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29b684: 0xc7a00000
    ctx->pc = 0x29b684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b688: 0x46001082
    ctx->pc = 0x29b688u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29b68c: 0xc6200028
    ctx->pc = 0x29b68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b690: 0xc7a10008
    ctx->pc = 0x29b690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b694: 0x46010002
    ctx->pc = 0x29b694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29b698: 0x46001080
    ctx->pc = 0x29b698u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29b69c: 0xc600000c
    ctx->pc = 0x29b69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b6a0: 0x46001034
    ctx->pc = 0x29b6a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b6a4: 0x3c01626e
    ctx->pc = 0x29b6a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25198 << 16));
    // 0x29b6a8: 0x34218645
    ctx->pc = 0x29b6a8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34373));
    // 0x29b6ac: 0x44810000
    ctx->pc = 0x29b6acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29b6b0: 0x45010004
    ctx->pc = 0x29B6B0u;
    {
        const bool branch_taken_0x29b6b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B6B4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x29b6b0) {
            ctx->pc = 0x29B6C4u;
            goto label_29b6c4;
        }
    }
    ctx->pc = 0x29B6B8u;
label_29b6b8:
    // 0x29b6b8: 0xc6200010
    ctx->pc = 0x29b6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b6bc: 0x4600a002
    ctx->pc = 0x29b6bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x29b6c0: 0xdfbf0030
    ctx->pc = 0x29b6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29b6c4:
    // 0x29b6c4: 0xdfb10020
    ctx->pc = 0x29b6c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29b6c8:
    // 0x29b6c8: 0xdfb00010
    ctx->pc = 0x29b6c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b6cc: 0xc7b40040
    ctx->pc = 0x29b6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29b6d0: 0x3e00008
    ctx->pc = 0x29B6D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B6D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29B5E0u: goto label_29b5e0;
            case 0x29B5F4u: goto label_29b5f4;
            case 0x29B624u: goto label_29b624;
            case 0x29B660u: goto label_29b660;
            case 0x29B664u: goto label_29b664;
            case 0x29B6B8u: goto label_29b6b8;
            case 0x29B6C4u: goto label_29b6c4;
            case 0x29B6C8u: goto label_29b6c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29B6D8u;
}
